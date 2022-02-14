
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int typlen; int typbyval; int typoutput; int typisdefined; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ) ;

void
FUNC_11(Oid VAR_4, Oid *VAR_5, bool *VAR_6)
{
 HeapTuple VAR_7;
 Form_pg_type VAR_8;

 VAR_7 = FUNC_5(VAR_3, FUNC_2(VAR_4));
 if (!FUNC_1(VAR_7))
  FUNC_6(VAR_2, "cache lookup failed for type %u", VAR_4);
 VAR_8 = (Form_pg_type) FUNC_0(VAR_7);

 if (!VAR_8->typisdefined)
  FUNC_7(VAR_2,
    (FUNC_8(VAR_1),
     FUNC_9("type %s is only a shell",
      FUNC_10(VAR_4))));
 if (!FUNC_3(VAR_8->typoutput))
  FUNC_7(VAR_2,
    (FUNC_8(VAR_0),
     FUNC_9("no output function available for type %s",
      FUNC_10(VAR_4))));

 *VAR_5 = VAR_8->typoutput;
 *VAR_6 = (!VAR_8->typbyval) && (VAR_8->typlen == -1);

 FUNC_4(VAR_7);
}
