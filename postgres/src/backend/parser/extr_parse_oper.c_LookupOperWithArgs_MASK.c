
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TypeName ;
struct TYPE_3__ {int objname; int objargs; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectWithArgs ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,int ,int,int) ;
 int FUNC_2 (int *,int *,int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;

Oid
FUNC_6(ObjectWithArgs *VAR_1, bool VAR_2)
{
 TypeName *VAR_3,
      *VAR_4;
 Oid VAR_5,
    VAR_6;

 FUNC_0(FUNC_4(VAR_1->objargs) == 2);
 VAR_3 = FUNC_3(VAR_1->objargs);
 VAR_4 = FUNC_5(VAR_1->objargs);

 if (VAR_3 == ((void*)0))
  VAR_5 = VAR_0;
 else
  VAR_5 = FUNC_2(((void*)0), VAR_3, VAR_2);

 if (VAR_4 == ((void*)0))
  VAR_6 = VAR_0;
 else
  VAR_6 = FUNC_2(((void*)0), VAR_4, VAR_2);

 return FUNC_1(((void*)0), VAR_1->objname, VAR_5, VAR_6,
        VAR_2, -1);
}
