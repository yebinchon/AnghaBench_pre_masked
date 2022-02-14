
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dscale; } ;
typedef TYPE_1__ numeric ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (TYPE_1__*,int ) ;
 double FUNC_5 (char*,char**) ;

__attribute__((used)) static int
FUNC_6(numeric *VAR_5, double *VAR_6)
{
 char *VAR_7;
 double VAR_8;
 char *VAR_9;
 numeric *VAR_10 = FUNC_2();

 if (VAR_10 == ((void*)0))
  return -1;

 if (FUNC_0(VAR_5, VAR_10) < 0)
 {
  FUNC_1(VAR_10);
  return -1;
 }

 VAR_7 = FUNC_4(VAR_10, VAR_10->dscale);
 FUNC_1(VAR_10);

 if (VAR_7 == ((void*)0))
  return -1;




 VAR_4 = 0;
 VAR_8 = FUNC_5(VAR_7, &VAR_9);
 if (VAR_4 == VAR_0)
 {
  FUNC_3(VAR_7);
  if (VAR_8 == 0)
   VAR_4 = VAR_3;
  else
   VAR_4 = VAR_2;
  return -1;
 }


 if (*VAR_9 != '\0')
 {

  FUNC_3(VAR_7);
  VAR_4 = VAR_1;
  return -1;
 }
 FUNC_3(VAR_7);
 *VAR_6 = VAR_8;
 return 0;
}
