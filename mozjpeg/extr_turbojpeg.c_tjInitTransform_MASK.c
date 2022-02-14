
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int errStr; } ;
typedef TYPE_1__ tjinstance ;
typedef int * tjhandle ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int * FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ,char*) ;

tjhandle FUNC_5(void)
{
  tjinstance *VAR_2 = ((void*)0);
  tjhandle VAR_3 = ((void*)0);

  if ((VAR_2 = (tjinstance *)FUNC_3(sizeof(tjinstance))) == ((void*)0)) {
  FUNC_4(VAR_1, VAR_0,
   "tjInitTransform(): Memory allocation failure");
  return ((void*)0);
 }
 FUNC_0(VAR_2, sizeof(tjinstance));
  FUNC_4(VAR_2->errStr, VAR_0, "No error");
 VAR_3=FUNC_1(VAR_2);
 if(!VAR_3) return ((void*)0);
 VAR_3=FUNC_2(VAR_2);
 return VAR_3;
}
