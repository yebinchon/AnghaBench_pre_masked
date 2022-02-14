
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* mem; scalar_t__ mempos; scalar_t__ memsize; } ;
typedef char* LPTSTR ;
typedef char* LPSTR ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_3 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;

BOOL FUNC_5(LPTSTR VAR_4, INT VAR_5)
{
    LPSTR VAR_6;
    INT VAR_7 = 0;
    VAR_6 = VAR_4;


    if (VAR_3->mem)
    {
        for (; (VAR_3->mempos < VAR_3->memsize && VAR_7 < (VAR_5-1)); VAR_7++)
        {
            VAR_6[VAR_7] = VAR_3->mem[VAR_3->mempos++];
            if (VAR_6[VAR_7] == '\n' )
            {
                VAR_7++;
                break;
            }
        }
    }

    if (!VAR_7)
    {



        return VAR_0;
    }

    VAR_6[VAR_7++] = '\0';




    return VAR_2;
}
