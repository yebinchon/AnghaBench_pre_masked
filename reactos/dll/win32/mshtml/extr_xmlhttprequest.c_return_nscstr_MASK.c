
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsACString ;
typedef int HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,char const*,int,int *,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const**) ;

__attribute__((used)) static HRESULT FUNC_6(nsresult VAR_4, nsACString *VAR_5, BSTR *VAR_6)
{
    const char *VAR_7;
    int VAR_8;

    if(FUNC_2(VAR_4)) {
        FUNC_0("failed: %08x\n", VAR_4);
        FUNC_4(VAR_5);
        return VAR_1;
    }

    FUNC_5(VAR_5, &VAR_7);

    if(*VAR_7) {
        VAR_8 = FUNC_1(VAR_0, 0, VAR_7, -1, ((void*)0), 0);
        *VAR_6 = FUNC_3(((void*)0), VAR_8);
        if(!*VAR_6) {
            FUNC_4(VAR_5);
            return VAR_2;
        }
        FUNC_1(VAR_0, 0, VAR_7, -1, *VAR_6, VAR_8);
    }else {
        *VAR_6 = ((void*)0);
    }

    FUNC_4(VAR_5);
    return VAR_3;
}
