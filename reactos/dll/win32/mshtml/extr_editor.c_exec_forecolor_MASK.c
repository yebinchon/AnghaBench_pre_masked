
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsICommandParams ;
typedef int VARIANT ;
typedef int HTMLDocument ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int *,int *,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (char*,char*,int,int,int) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_11(HTMLDocument *VAR_6, DWORD VAR_7, VARIANT *VAR_8, VARIANT *VAR_9)
{
    FUNC_1("(%p)->(%p %p)\n", VAR_6, VAR_8, VAR_9);

    if(VAR_8) {
        if(FUNC_3(VAR_8) == VAR_5) {
            nsICommandParams *VAR_10 = FUNC_4();
            char VAR_11[10];

            FUNC_9(VAR_11, "#%02x%02x%02x",
                    FUNC_2(VAR_8)&0xff, (FUNC_2(VAR_8)>>8)&0xff, (FUNC_2(VAR_8)>>16)&0xff);

            FUNC_8(VAR_10, VAR_2, VAR_11);
            FUNC_6(VAR_6, VAR_1, VAR_10);

            FUNC_7(VAR_10);
        }else {
            FUNC_0("unsupported forecolor %s\n", FUNC_5(VAR_8));
        }

        FUNC_10(VAR_6, VAR_4);
    }

    if(VAR_9) {
        FUNC_0("unsupported out\n");
        return VAR_0;
    }

    return VAR_3;
}
