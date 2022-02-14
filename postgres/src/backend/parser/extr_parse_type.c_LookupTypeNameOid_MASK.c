
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int location; } ;
typedef TYPE_1__ TypeName ;
typedef int * Type ;
struct TYPE_7__ {int oid; } ;
typedef int ParseState ;
typedef int Oid ;
typedef TYPE_2__* Form_pg_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int * FUNC_1 (int *,TYPE_1__ const*,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,int ) ;

Oid
FUNC_8(ParseState *VAR_3, const TypeName *VAR_4, bool VAR_5)
{
 Oid VAR_6;
 Type VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_4, ((void*)0), VAR_5);
 if (VAR_7 == ((void*)0))
 {
  if (!VAR_5)
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("type \"%s\" does not exist",
       FUNC_3(VAR_4)),
      FUNC_7(VAR_3, VAR_4->location)));

  return VAR_2;
 }

 VAR_6 = ((Form_pg_type) FUNC_0(VAR_7))->oid;
 FUNC_2(VAR_7);

 return VAR_6;
}
