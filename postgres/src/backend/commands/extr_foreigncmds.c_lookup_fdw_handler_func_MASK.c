
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * arg; } ;
typedef int Oid ;
typedef int List ;
typedef TYPE_1__ DefElem ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static Oid
FUNC_6(DefElem *VAR_4)
{
 Oid VAR_5;

 if (VAR_4 == ((void*)0) || VAR_4->arg == ((void*)0))
  return VAR_3;


 VAR_5 = FUNC_0((List *) VAR_4->arg, 0, ((void*)0), 0);


 if (FUNC_5(VAR_5) != VAR_2)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("function %s must return type %s",
      FUNC_1((List *) VAR_4->arg), "fdw_handler")));

 return VAR_5;
}
