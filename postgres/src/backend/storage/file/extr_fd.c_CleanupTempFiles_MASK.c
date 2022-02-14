
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short fdstate; int * fileName; } ;
typedef size_t Index ;


 int FUNC_0 (int ) ;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (int ,char*,int *) ;
 int VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static void
FUNC_5(bool VAR_8, bool VAR_9)
{
 Index VAR_10;





 if (VAR_9 || VAR_6)
 {
  FUNC_0(FUNC_2(0));
  for (VAR_10 = 1; VAR_10 < VAR_2; VAR_10++)
  {
   unsigned short VAR_11 = VAR_3[VAR_10].fdstate;

   if (((VAR_11 & VAR_1) || (VAR_11 & VAR_0)) &&
    VAR_3[VAR_10].fileName != ((void*)0))
   {







    if (VAR_9)
     FUNC_1(VAR_10);
    else if (VAR_11 & VAR_0)
    {
     FUNC_4(VAR_4,
       "temporary file %s not closed at end-of-transaction",
       VAR_3[VAR_10].fileName);
     FUNC_1(VAR_10);
    }
   }
  }

  VAR_6 = 0;
 }


 if (VAR_8 && VAR_7 > 0)
  FUNC_4(VAR_4, "%d temporary files and directories not closed at end-of-transaction",
    VAR_7);


 while (VAR_7 > 0)
  FUNC_3(&VAR_5[0]);
}
