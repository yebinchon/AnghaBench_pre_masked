
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sync_standbys_defined; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;
 TYPE_1__* VAR_3 ;

void
FUNC_4(void)
{
 bool VAR_4 = FUNC_3();

 if (VAR_4 != VAR_3->sync_standbys_defined)
 {
  FUNC_0(VAR_2, VAR_0);






  if (!VAR_4)
  {
   int VAR_5;

   for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    FUNC_2(1, VAR_5);
  }
  VAR_3->sync_standbys_defined = VAR_4;

  FUNC_1(VAR_2);
 }
}
