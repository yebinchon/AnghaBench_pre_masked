
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int type; int type_name; int file; int pSymbols; int bArrayType; } ;
typedef TYPE_1__* PVRET ;
typedef scalar_t__ LPSTR ;
typedef int BOOLEAN ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,char) ;
 int FUNC_6 (int ,int ) ;
 int VAR_1 ;

BOOLEAN FUNC_7(PVRET VAR_2,LPSTR VAR_3)
{
    ULONG VAR_4,VAR_5;
    ULONG VAR_6,VAR_7;
    LPSTR VAR_8;

    FUNC_0((1,"ExtractArray(%s)\n",VAR_3));


    VAR_2->bArrayType = VAR_1;
    VAR_3++;
    VAR_4 = FUNC_3(VAR_3);
    VAR_3 = FUNC_5(VAR_3,';');
    if(VAR_3)
    {
        VAR_3++;
        VAR_6 = FUNC_1(VAR_3);
        VAR_3 = FUNC_5(VAR_3,';');
        if(VAR_3)
        {
            VAR_3++;

            VAR_7 = FUNC_1(VAR_3);
            VAR_3 = FUNC_5(VAR_3,';');
            if(VAR_3)
            {
                VAR_3++;

                VAR_5 = FUNC_3(VAR_3);

                FUNC_0((1,"ExtractArray(): %x %x %x %x\n",VAR_4,VAR_6,VAR_7,VAR_5));

                VAR_8 = FUNC_4(VAR_2->pSymbols,VAR_5,VAR_2->file);
                if(VAR_8)
                {
                    FUNC_6(VAR_2->type_name,FUNC_2(VAR_8));
                    VAR_2->type = VAR_5;
                    return VAR_1;
                }
            }
        }
    }
    return VAR_0;
}
