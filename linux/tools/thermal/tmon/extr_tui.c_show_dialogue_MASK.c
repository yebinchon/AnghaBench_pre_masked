
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_4__ {int nr_cooling_dev; TYPE_1__* cdi; } ;
struct TYPE_3__ {int instance; int type; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 () ;
 int * VAR_2 ;
 int FUNC_2 (int *,int,int) ;
 int VAR_3 ;
 int FUNC_3 (int *,int,int,char*,...) ;
 TYPE_2__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(void)
{
 int VAR_6, VAR_7 = 0, VAR_8 = 0;
 int VAR_9, VAR_10;
 WINDOW *VAR_11 = VAR_2;

 if (VAR_5 || !VAR_11)
  return;

 FUNC_2(VAR_11, VAR_9, VAR_10);


 (void)VAR_10;

 FUNC_6(VAR_11);
 FUNC_0(VAR_11, 0, 0);
 FUNC_3(VAR_11, 0, VAR_3/4, VAR_1);

 for (VAR_6 = 0; VAR_6 <= VAR_4.nr_cooling_dev; VAR_6++) {
  VAR_8 = VAR_6 % FUNC_1();
  if (VAR_8 == 0 && VAR_6 != 0)
   VAR_7 += 20;
  if (VAR_6 == VAR_4.nr_cooling_dev)

   FUNC_3(VAR_11, VAR_8+1, VAR_7+1, "%C-%.12s", 'A'+VAR_6, "Set Temp");
  else
   FUNC_3(VAR_11, VAR_8+1, VAR_7+1, "%C-%.10s-%2d", 'A'+VAR_6,
    VAR_4.cdi[VAR_6].type, VAR_4.cdi[VAR_6].instance);
 }
 FUNC_5(VAR_11, VAR_0);
 FUNC_3(VAR_11, FUNC_1()+1, 1, "Enter Choice [A-Z]?");
 FUNC_4(VAR_11, VAR_0);

 FUNC_3(VAR_11, VAR_9 - 2, 1,
  "Legend: A=Active, P=Passive, C=Critical");

 FUNC_7(VAR_2);
}
