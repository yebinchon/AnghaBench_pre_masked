
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct DynamicBuffer {int * data; int used; int * member_2; int member_1; int member_0; } ;
typedef int line ;
typedef int * LPBYTE ;
typedef int HCERTSTORE ;
typedef int FILE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ,int ,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int ,int ,int *,int *,int *,int *) ;
 int VAR_2 ;
 int FUNC_4 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct DynamicBuffer*,char*) ;
 scalar_t__ FUNC_6 (char*,int,int *) ;
 int FUNC_7 (struct DynamicBuffer*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*,char const*,int ) ;

__attribute__((used)) static BOOL FUNC_10(FILE *VAR_5, HCERTSTORE VAR_6)
{
    char VAR_7[1024];
    BOOL VAR_8 = VAR_2;
    struct DynamicBuffer VAR_9 = { 0, 0, ((void*)0) };
    int VAR_10 = 0;

    FUNC_4("\n");
    while (FUNC_6(VAR_7, sizeof(VAR_7), VAR_5))
    {
        static const char VAR_11[] = "-----BEGIN CERTIFICATE-----";
        static const char VAR_12[] = "-----END CERTIFICATE-----";

        if (!FUNC_9(VAR_7, VAR_11, FUNC_8(VAR_11)))
        {
            FUNC_4("begin new certificate\n");
            VAR_8 = VAR_3;
            FUNC_7(&VAR_9);
        }
        else if (!FUNC_9(VAR_7, VAR_12, FUNC_8(VAR_12)))
        {
            DWORD VAR_13;

            FUNC_4("end of certificate, adding cert\n");
            VAR_8 = VAR_2;
            if (FUNC_3((char *)VAR_9.data, VAR_9.used,
             VAR_1, ((void*)0), &VAR_13, ((void*)0), ((void*)0)))
            {
                LPBYTE VAR_14 = FUNC_1(VAR_13);

                if (VAR_14)
                {
                    FUNC_3((char *)VAR_9.data,
                     VAR_9.used, VAR_1, VAR_14, &VAR_13, ((void*)0),
                     ((void*)0));
                    if (FUNC_0(VAR_6,
                     VAR_4, VAR_14, VAR_13, VAR_0, ((void*)0)))
                        VAR_10++;
                    FUNC_2(VAR_14);
                }
            }
        }
        else if (VAR_8)
            FUNC_5(&VAR_9, VAR_7);
    }
    FUNC_2(VAR_9.data);
    FUNC_4("Read %d certs\n", VAR_10);
    return VAR_10 > 0;
}
