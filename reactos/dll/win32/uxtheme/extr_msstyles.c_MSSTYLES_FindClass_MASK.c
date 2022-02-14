
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; int * szClassName; int * szAppName; } ;
struct TYPE_5__ {TYPE_2__* classes; } ;
typedef TYPE_1__* PTHEME_FILE ;
typedef TYPE_2__* PTHEME_CLASS ;
typedef int LPCWSTR ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static PTHEME_CLASS FUNC_1(PTHEME_FILE VAR_0, LPCWSTR VAR_1, LPCWSTR VAR_2)
{
    PTHEME_CLASS VAR_3 = VAR_0->classes;
    while(VAR_3) {
        if(!VAR_1) {
            if(!*VAR_3->szAppName && !FUNC_0(VAR_2, VAR_3->szClassName))
                return VAR_3;
        }
        else {
            if(!FUNC_0(VAR_1, VAR_3->szAppName) && !FUNC_0(VAR_2, VAR_3->szClassName))
                return VAR_3;
        }
        VAR_3 = VAR_3->next;
    }
    return ((void*)0);
}
