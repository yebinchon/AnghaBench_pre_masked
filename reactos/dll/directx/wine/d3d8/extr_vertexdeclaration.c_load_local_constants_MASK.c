
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader {int dummy; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const FUNC_0 () ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int,float const,float const,float const,float const) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (struct wined3d_shader*,int,float const*,int) ;

void FUNC_7(const DWORD *VAR_8, struct wined3d_shader *VAR_9)
{
    const DWORD *VAR_10 = VAR_8;

    while (*VAR_10 != FUNC_0())
    {
        if (((*VAR_10 & VAR_4) >> VAR_5) == VAR_6)
        {
            DWORD VAR_11 = ((*VAR_10 & VAR_2) >> VAR_3);
            DWORD VAR_12 = ((*VAR_10 & VAR_0) >> VAR_1);
            HRESULT VAR_13;

            if (FUNC_4(VAR_7))
            {
                DWORD VAR_14;
                for (VAR_14 = 0; VAR_14 < VAR_11; ++VAR_14)
                {
                    FUNC_3("c[%u] = (%8f, %8f, %8f, %8f)\n",
                            VAR_12,
                            *(const float *)(VAR_10 + VAR_14 * 4 + 1),
                            *(const float *)(VAR_10 + VAR_14 * 4 + 2),
                            *(const float *)(VAR_10 + VAR_14 * 4 + 3),
                            *(const float *)(VAR_10 + VAR_14 * 4 + 4));
                }
            }
            VAR_13 = FUNC_6(VAR_9,
                    VAR_12, (const float *)VAR_10 + 1, VAR_11);
            if (FUNC_2(VAR_13)) FUNC_1("Failed setting shader constants\n");
        }

        VAR_10 += FUNC_5(VAR_10);
    }
}
