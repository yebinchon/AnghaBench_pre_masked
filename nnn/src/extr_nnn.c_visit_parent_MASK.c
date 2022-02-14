
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ filtermode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 TYPE_1__ VAR_3 ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (char*,char*,int ) ;

__attribute__((used)) static char *FUNC_5(char *VAR_4, char *VAR_5, int *VAR_6)
{
 char *VAR_7;


 if (FUNC_2(VAR_4)) {

  if (VAR_3.filtermode)
   *VAR_6 = VAR_0;
  return ((void*)0);
 }


 FUNC_4(VAR_5, VAR_4, VAR_1);

 VAR_7 = FUNC_1(VAR_5);
 if (FUNC_0(VAR_7, VAR_2) == -1) {
  FUNC_3(VAR_6);
  return ((void*)0);
 }

 return VAR_7;
}
