
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* UuidToStringFunc ) (int *,unsigned char**) ;
typedef scalar_t__ (* UuidCreateFunc ) (int *) ;
typedef int UUID ;
typedef int (* RpcStringFreeFunc ) (unsigned char**) ;
typedef scalar_t__ RPC_STATUS ;
typedef int LPCSTR ;
typedef scalar_t__ HMODULE ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static HCRYPTPROV FUNC_6(void)
{
    HCRYPTPROV VAR_6 = 0;
    HMODULE VAR_7 = FUNC_5("rpcrt4");

    if (VAR_7)
    {
        UuidCreateFunc VAR_8 = (UuidCreateFunc)FUNC_4(VAR_7,
         "UuidCreate");
        UuidToStringFunc VAR_9 = (UuidToStringFunc)FUNC_4(VAR_7,
         "UuidToStringA");
        RpcStringFreeFunc VAR_10 = (RpcStringFreeFunc)FUNC_4(
         VAR_7, "RpcStringFreeA");

        if (VAR_8 && VAR_9 && VAR_10)
        {
            UUID VAR_11;
            RPC_STATUS VAR_12 = VAR_8(&VAR_11);

            if (VAR_12 == VAR_4 || VAR_12 == VAR_5)
            {
                unsigned char *VAR_13;

                VAR_12 = VAR_9(&VAR_11, &VAR_13);
                if (VAR_12 == VAR_4)
                {
                    BOOL VAR_14 = FUNC_0(&VAR_6, (LPCSTR)VAR_13,
                     VAR_2, VAR_3, VAR_1);

                    if (VAR_14)
                    {
                        HCRYPTKEY VAR_15;

                        VAR_14 = FUNC_2(VAR_6, VAR_0, 0, &VAR_15);
                        if (VAR_14)
                            FUNC_1(VAR_15);
                    }
                    VAR_10(&VAR_13);
                }
            }
        }
        FUNC_3(VAR_7);
    }
    return VAR_6;
}
