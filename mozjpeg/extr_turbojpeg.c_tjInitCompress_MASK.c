
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int errStr; } ;
typedef TYPE_1__ tjinstance ;
typedef int * tjhandle ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int * FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,char*) ;

tjhandle FUNC_4(void)
{
 tjinstance *VAR_2=((void*)0);

  if ((VAR_2 = (tjinstance *)FUNC_2(sizeof(tjinstance))) == ((void*)0)) {
  FUNC_3(VAR_1, VAR_0,
   "tjInitCompress(): Memory allocation failure");
  return ((void*)0);
 }
 FUNC_0(VAR_2, sizeof(tjinstance));
  FUNC_3(VAR_2->errStr, VAR_0, "No error");
 return FUNC_1(VAR_2);
}
