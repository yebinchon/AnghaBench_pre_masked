
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
struct TYPE_7__ {int oid; int typisdefined; } ;
typedef int Oid ;
typedef TYPE_2__* Form_pg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int * FUNC_1 (int *,TYPE_1__*,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,int ) ;
 TYPE_1__* FUNC_8 (char const*) ;

void
FUNC_9(const char *VAR_3, Oid *VAR_4, int32 *VAR_5, bool VAR_6)
{
 TypeName *VAR_7;
 Type VAR_8;

 VAR_7 = FUNC_8(VAR_3);

 VAR_8 = FUNC_1(((void*)0), VAR_7, VAR_5, VAR_6);
 if (VAR_8 == ((void*)0))
 {
  if (!VAR_6)
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("type \"%s\" does not exist",
       FUNC_3(VAR_7)),
      FUNC_7(((void*)0), VAR_7->location)));
  *VAR_4 = VAR_2;
 }
 else
 {
  Form_pg_type VAR_9 = (Form_pg_type) FUNC_0(VAR_8);

  if (!VAR_9->typisdefined)
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("type \"%s\" is only a shell",
       FUNC_3(VAR_7)),
      FUNC_7(((void*)0), VAR_7->location)));
  *VAR_4 = VAR_9->oid;
  FUNC_2(VAR_8);
 }
}
