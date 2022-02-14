
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_6__ {int location; } ;
typedef TYPE_1__ TypeName ;
typedef int * Type ;
struct TYPE_7__ {int typisdefined; } ;
typedef int ParseState ;
typedef TYPE_2__* Form_pg_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,TYPE_1__ const*,int *,int) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *,int ) ;

Type
FUNC_7(ParseState *VAR_2, const TypeName *VAR_3, int32 *VAR_4)
{
 Type VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4, 0);
 if (VAR_5 == ((void*)0))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("type \"%s\" does not exist",
      FUNC_2(VAR_3)),
     FUNC_6(VAR_2, VAR_3->location)));
 if (!((Form_pg_type) FUNC_0(VAR_5))->typisdefined)
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("type \"%s\" is only a shell",
      FUNC_2(VAR_3)),
     FUNC_6(VAR_2, VAR_3->location)));
 return VAR_5;
}
