
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_4__ {char nr_cooling_dev; TYPE_1__* cdi; } ;
struct TYPE_3__ {char* type; int instance; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (char*,int,char*,...) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static void FUNC_4(int VAR_1)
{
 char VAR_2[48];
 int VAR_3 = 0;
 int VAR_4 = 0;

 if ((VAR_1 >= 'A' && VAR_1 <= 'A' + VAR_0.nr_cooling_dev) ||
  (VAR_1 >= 'a' && VAR_1 <= 'a' + VAR_0.nr_cooling_dev)) {
  VAR_3 = (VAR_1 < 'a') ? 'A' : 'a';
  VAR_4 = VAR_1 - VAR_3;
  if (VAR_0.nr_cooling_dev == VAR_4)
   FUNC_2(VAR_2, sizeof(VAR_2), "New Target Temp:");
  else
   FUNC_2(VAR_2, sizeof(VAR_2), "New Value for %.10s-%2d: ",
    VAR_0.cdi[VAR_4].type,
    VAR_0.cdi[VAR_4].instance);
  FUNC_3(VAR_2, FUNC_0() + 2, 2);
  FUNC_1(VAR_4);
 } else {
  FUNC_2(VAR_2, sizeof(VAR_2), "Invalid selection %d", VAR_1);
  FUNC_3(VAR_2, 8, 2);
 }
}
