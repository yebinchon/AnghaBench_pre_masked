
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {scalar_t__ y; } ;
struct TYPE_4__ {scalar_t__ ImageFileName; } ;
typedef TYPE_1__* PEPROCESS ;
typedef scalar_t__ LPSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 size_t VAR_2 ;
 int FUNC_5 (int ,char*,int ,...) ;
 int FUNC_6 (int ,int,scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;

void FUNC_10(void)
{
 PEPROCESS VAR_5 = FUNC_2();
    LPSTR VAR_6;

    FUNC_1();

    if(FUNC_3((ULONG)VAR_5))
    {
        FUNC_9(VAR_1);
     FUNC_8(VAR_0);

  FUNC_0(VAR_4[VAR_2].y-1);

        VAR_6 = VAR_5->ImageFileName;
        if(FUNC_3((ULONG)VAR_6) )
        {
      FUNC_5(VAR_3,
                    " PROCESS(%.8X \"%s\") ",
                    (ULONG)VAR_5,VAR_6);
        }
        else
        {
      FUNC_5(VAR_3,
                    " PROCESS(%.8X) ",
                    (ULONG)VAR_5);
        }
  FUNC_6(VAR_3,1,VAR_4[VAR_2].y-1);

        FUNC_7();
    }

    FUNC_4();
}
