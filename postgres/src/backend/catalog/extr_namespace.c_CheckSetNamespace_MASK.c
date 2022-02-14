
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

void
FUNC_4(Oid VAR_3, Oid VAR_4)
{

 if (FUNC_3(VAR_4) || FUNC_3(VAR_3))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("cannot move objects into or out of temporary schemas")));


 if (VAR_4 == VAR_2 || VAR_3 == VAR_2)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("cannot move objects into or out of TOAST schema")));
}
