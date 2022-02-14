
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dxbc {int dummy; } ;
typedef scalar_t__ SIZE_T ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,unsigned int,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (struct dxbc*,scalar_t__,char const*,scalar_t__) ;
 int FUNC_5 (struct dxbc*,scalar_t__) ;
 int FUNC_6 (char const**,scalar_t__*) ;
 int FUNC_7 (char const**,int) ;

HRESULT FUNC_8(const char *VAR_3, SIZE_T VAR_4, struct dxbc *VAR_5)
{
    const char *VAR_6 = VAR_3;
    HRESULT VAR_7;
    unsigned int VAR_8;
    DWORD VAR_9, VAR_10, VAR_11;

    if (!VAR_3)
    {
        FUNC_2("No data supplied.\n");
        return VAR_1;
    }

    FUNC_6(&VAR_6, &VAR_9);
    FUNC_1("tag: %s.\n", FUNC_3((const char *)&VAR_9, 4));

    if (VAR_9 != VAR_2)
    {
        FUNC_2("Wrong tag.\n");
        return VAR_1;
    }


    FUNC_7(&VAR_6, 4);

    FUNC_7(&VAR_6, 1);

    FUNC_6(&VAR_6, &VAR_10);
    FUNC_1("total size: %#x\n", VAR_10);

    if (VAR_4 != VAR_10)
    {
        FUNC_2("Wrong size supplied.\n");
        return VAR_0;
    }

    FUNC_6(&VAR_6, &VAR_11);
    FUNC_1("chunk count: %#x\n", VAR_11);

    VAR_7 = FUNC_5(VAR_5, VAR_11);
    if (FUNC_0(VAR_7))
    {
        FUNC_2("Failed to init dxbc\n");
        return VAR_7;
    }

    for (VAR_8 = 0; VAR_8 < VAR_11; ++VAR_8)
    {
        DWORD VAR_12, VAR_13;
        const char *VAR_14;
        DWORD VAR_15;

        FUNC_6(&VAR_6, &VAR_15);
        FUNC_1("chunk %u at offset %#x\n", VAR_8, VAR_15);

        VAR_14 = VAR_3 + VAR_15;

        FUNC_6(&VAR_14, &VAR_12);
        FUNC_6(&VAR_14, &VAR_13);

        VAR_7 = FUNC_4(VAR_5, VAR_12, VAR_14, VAR_13);
        if (FUNC_0(VAR_7))
        {
            FUNC_2("Failed to add section to dxbc\n");
            return VAR_7;
        }
    }

    return VAR_7;
}
