
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * Type ;
struct TYPE_2__ {scalar_t__ typisdefined; } ;
typedef int Oid ;
typedef int List ;
typedef TYPE_1__* Form_pg_type ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int ,int *,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static Oid
FUNC_7(List *VAR_1)
{
 Oid VAR_2;
 Type VAR_3;





 VAR_3 = FUNC_1(((void*)0), FUNC_4(VAR_1),
         ((void*)0), 0, 0);
 if (VAR_3 == ((void*)0))
  return VAR_0;

 if (((Form_pg_type) FUNC_0(VAR_3))->typisdefined &&
  !FUNC_2(FUNC_6(VAR_3)))
  VAR_2 = FUNC_5(VAR_3);
 else
  VAR_2 = VAR_0;

 FUNC_3(VAR_3);
 return VAR_2;
}
