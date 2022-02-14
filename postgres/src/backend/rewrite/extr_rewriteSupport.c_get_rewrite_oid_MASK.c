
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ev_class; scalar_t__ oid; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_rewrite ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char const*) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char const*,int ) ;
 int FUNC_10 (scalar_t__) ;

Oid
FUNC_11(Oid VAR_4, const char *VAR_5, bool VAR_6)
{
 HeapTuple VAR_7;
 Form_pg_rewrite VAR_8;
 Oid VAR_9;


 VAR_7 = FUNC_6(VAR_3,
       FUNC_3(VAR_4),
       FUNC_4(VAR_5));
 if (!FUNC_2(VAR_7))
 {
  if (VAR_6)
   return VAR_2;
  FUNC_7(VAR_1,
    (FUNC_8(VAR_0),
     FUNC_9("rule \"%s\" for relation \"%s\" does not exist",
      VAR_5, FUNC_10(VAR_4))));
 }
 VAR_8 = (Form_pg_rewrite) FUNC_1(VAR_7);
 FUNC_0(VAR_4 == VAR_8->ev_class);
 VAR_9 = VAR_8->oid;
 FUNC_5(VAR_7);
 return VAR_9;
}
