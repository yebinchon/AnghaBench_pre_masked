
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int fWhiteSpace; int fSoftBreak; } ;
struct TYPE_10__ {TYPE_6__* logAttr; int text; } ;
struct TYPE_9__ {int eScript; } ;
typedef int SCRIPT_LOGATTR ;
typedef TYPE_1__ SCRIPT_ANALYSIS ;
typedef int * LPWSTR ;
typedef int INT ;
typedef TYPE_2__ EDITSTATE ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 TYPE_6__* FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int,TYPE_1__*,TYPE_6__*) ;
 int FUNC_4 (char*,int *,int,int,int) ;



 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

__attribute__((used)) static INT FUNC_7(EDITSTATE *VAR_1, LPWSTR VAR_2, INT VAR_3, INT VAR_4, INT VAR_5)
{
    INT VAR_6 = 0;

    FUNC_4("s=%p, index=%d, count=%d, action=%d\n", VAR_2, VAR_3, VAR_4, VAR_5);

    if(!VAR_2) return 0;

    if (!VAR_1->logAttr)
    {
        SCRIPT_ANALYSIS VAR_7;

        FUNC_6(&VAR_7,0,sizeof(SCRIPT_ANALYSIS));
        VAR_7.eScript = VAR_0;

        VAR_1->logAttr = FUNC_2(FUNC_1(), 0, sizeof(SCRIPT_LOGATTR) * FUNC_5(VAR_1));
        FUNC_3(VAR_1->text, FUNC_5(VAR_1), &VAR_7, VAR_1->logAttr);
    }

    switch (VAR_5) {
    case 129:
        if (VAR_3)
            VAR_3--;
        while (VAR_3 && !VAR_1->logAttr[VAR_3].fSoftBreak)
            VAR_3--;
        VAR_6 = VAR_3;
        break;
    case 128:
        if (!VAR_4)
            break;
        while (VAR_3 < VAR_4 && VAR_2[VAR_3] && !VAR_1->logAttr[VAR_3].fSoftBreak)
            VAR_3++;
        VAR_6 = VAR_3;
        break;
    case 130:
        VAR_6 = VAR_1->logAttr[VAR_3].fWhiteSpace;
        break;
    default:
        FUNC_0("unknown action code, please report !\n");
        break;
    }
    return VAR_6;
}
