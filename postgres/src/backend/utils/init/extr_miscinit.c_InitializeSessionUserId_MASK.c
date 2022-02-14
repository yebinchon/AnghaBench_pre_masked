
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* roleId; } ;
struct TYPE_3__ {char* oid; scalar_t__ rolconnlimit; int rolcanlogin; scalar_t__ rolsuper; int rolname; } ;
typedef char* Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_authid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ VAR_7 ;
 TYPE_2__* VAR_8 ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,char*,int ,int ) ;
 int FUNC_13 (char*,scalar_t__) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,char const*) ;

void
FUNC_17(const char *VAR_12, Oid VAR_13)
{
 HeapTuple VAR_14;
 Form_pg_authid VAR_15;
 char *VAR_16;





 FUNC_1(!FUNC_5());


 FUNC_1(!FUNC_8(VAR_2));






 FUNC_0();

 if (VAR_12 != ((void*)0))
 {
  VAR_14 = FUNC_11(VAR_0, FUNC_9(VAR_12));
  if (!FUNC_4(VAR_14))
   FUNC_14(VAR_6,
     (FUNC_15(VAR_4),
      FUNC_16("role \"%s\" does not exist", VAR_12)));
 }
 else
 {
  VAR_14 = FUNC_11(VAR_1, FUNC_7(VAR_13));
  if (!FUNC_4(VAR_14))
   FUNC_14(VAR_6,
     (FUNC_15(VAR_4),
      FUNC_16("role with OID %u does not exist", VAR_13)));
 }

 VAR_15 = (Form_pg_authid) FUNC_3(VAR_14);
 VAR_13 = VAR_15->oid;
 VAR_16 = FUNC_6(VAR_15->rolname);

 VAR_2 = VAR_13;
 VAR_3 = VAR_15->rolsuper;


 FUNC_13(VAR_13, VAR_3);



 VAR_8->roleId = VAR_13;






 if (VAR_7)
 {



  if (!VAR_15->rolcanlogin)
   FUNC_14(VAR_6,
     (FUNC_15(VAR_4),
      FUNC_16("role \"%s\" is not permitted to log in",
       VAR_16)));
  if (VAR_15->rolconnlimit >= 0 &&
   !VAR_3 &&
   FUNC_2(VAR_13) > VAR_15->rolconnlimit)
   FUNC_14(VAR_6,
     (FUNC_15(VAR_5),
      FUNC_16("too many connections for role \"%s\"",
       VAR_16)));
 }


 FUNC_12("session_authorization", VAR_16,
     VAR_9, VAR_11);
 FUNC_12("is_superuser",
     VAR_3 ? "on" : "off",
     VAR_10, VAR_11);

 FUNC_10(VAR_14);
}
