
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int uri; } ;
typedef TYPE_1__ nsWineURI ;
typedef int WCHAR ;
struct TYPE_7__ {int hostui; } ;
typedef int OLECHAR ;
typedef TYPE_2__ HTMLDocumentObj ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int **) ;
 scalar_t__ FUNC_4 (int ,int **) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int *,int *) ;

__attribute__((used)) static BOOL FUNC_9(HTMLDocumentObj *VAR_3, nsWineURI *VAR_4)
{
    OLECHAR *VAR_5 = ((void*)0);
    WCHAR *VAR_6;
    BOOL VAR_7 = VAR_0;
    HRESULT VAR_8;

    if(!VAR_3->hostui || !FUNC_7(VAR_4))
        return VAR_0;

    VAR_8 = FUNC_4(VAR_4->uri, &VAR_6);
    if(FUNC_1(VAR_8))
        return VAR_0;

    VAR_8 = FUNC_3(VAR_3->hostui, 0, VAR_6, &VAR_5);
    if(VAR_8 == VAR_1 && VAR_5) {
        if(FUNC_8(VAR_6, VAR_5)) {
            FUNC_2("TranslateUrl returned new URL %s -> %s\n", FUNC_6(VAR_6), FUNC_6(VAR_5));
            VAR_7 = VAR_2;
        }
        FUNC_0(VAR_5);
    }

    FUNC_5(VAR_6);
    return VAR_7;
}
