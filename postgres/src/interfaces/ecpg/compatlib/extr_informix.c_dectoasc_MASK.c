
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dscale; } ;
typedef TYPE_1__ numeric ;
typedef int decimal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 char* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;

int
FUNC_9(decimal *VAR_3, char *VAR_4, int VAR_5, int VAR_6)
{
 char *VAR_7;
 numeric *VAR_8;

 FUNC_6(VAR_1, (char *) VAR_4);
 if (FUNC_5(VAR_0, (char *) VAR_3))
  return 0;

 VAR_8 = FUNC_2();
 if (VAR_8 == ((void*)0))
  return VAR_2;

 if (FUNC_1(VAR_3, VAR_8) != 0)
 {
  FUNC_0(VAR_8);
  return VAR_2;
 }

 if (VAR_6 >= 0)
  VAR_7 = FUNC_3(VAR_8, VAR_6);
 else
  VAR_7 = FUNC_3(VAR_8, VAR_8->dscale);

 FUNC_0(VAR_8);
 if (!VAR_7)
  return -1;





 if ((int) (FUNC_8(VAR_7) + 1) > VAR_5)
 {
  if (VAR_5 > 1)
  {
   VAR_4[0] = '*';
   VAR_4[1] = '\0';
  }
  FUNC_4(VAR_7);
  return -1;
 }
 else
 {
  FUNC_7(VAR_4, VAR_7);
  FUNC_4(VAR_7);
  return 0;
 }
}
