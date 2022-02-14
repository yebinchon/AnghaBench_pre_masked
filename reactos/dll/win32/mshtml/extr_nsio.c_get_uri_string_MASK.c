
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsresult ;
struct TYPE_4__ {int uri; } ;
typedef TYPE_1__ nsWineURI ;
typedef int nsACString ;
typedef int Uri_PROPERTY ;
typedef int HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int *,char*) ;

__attribute__((used)) static nsresult FUNC_10(nsWineURI *VAR_3, Uri_PROPERTY VAR_4, nsACString *VAR_5)
{
    char *VAR_6;
    BSTR VAR_7;
    HRESULT VAR_8;

    if(!FUNC_6(VAR_3))
        return VAR_1;

    VAR_8 = FUNC_1(VAR_3->uri, VAR_4, &VAR_7, 0);
    if(FUNC_0(VAR_8)) {
        FUNC_4("GetPropertyBSTR failed: %08x\n", VAR_8);
        return VAR_1;
    }

    VAR_6 = FUNC_8(VAR_7);
    FUNC_2(VAR_7);
    if(!VAR_6)
        return VAR_0;

    FUNC_3("ret %s\n", FUNC_5(VAR_6));
    FUNC_9(VAR_5, VAR_6);
    FUNC_7(VAR_6);
    return VAR_2;
}
