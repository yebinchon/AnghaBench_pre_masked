
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* doc_obj; } ;
struct TYPE_4__ {scalar_t__ hostui; } ;
typedef int OLECHAR ;
typedef int IUri ;
typedef TYPE_2__ HTMLOuterWindow ;
typedef int HRESULT ;
typedef int * BSTR ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,int *,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,int ,int ) ;
 int FUNC_8 (int *,int ,int **) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static HRESULT FUNC_10(HTMLOuterWindow *VAR_1, IUri *VAR_2, BSTR *VAR_3, IUri **VAR_4)
{
    IUri *VAR_5 = ((void*)0);
    BSTR VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_4(VAR_2, &VAR_6);
    if(FUNC_1(VAR_7))
        return VAR_7;

    if(VAR_1->doc_obj && VAR_1->doc_obj->hostui) {
        OLECHAR *VAR_8 = ((void*)0);

        VAR_7 = FUNC_2(VAR_1->doc_obj->hostui, 0, VAR_6,
                &VAR_8);
        if(VAR_7 == VAR_0 && VAR_8) {
            FUNC_7("%08x %s -> %s\n", VAR_7, FUNC_9(VAR_6), FUNC_9(VAR_8));
            FUNC_6(VAR_6);
            VAR_7 = FUNC_8(VAR_8, 0, &VAR_5);
            FUNC_0(VAR_8);
            if(FUNC_1(VAR_7))
                return VAR_7;

            VAR_7 = FUNC_4(VAR_5, &VAR_6);
            if(FUNC_1(VAR_7)) {
                FUNC_5(VAR_5);
                return VAR_7;
            }
        }
    }

    if(!VAR_5) {
        FUNC_3(VAR_2);
        VAR_5 = VAR_2;
    }

    *VAR_3 = VAR_6;
    *VAR_4 = VAR_5;
    return VAR_0;
}
