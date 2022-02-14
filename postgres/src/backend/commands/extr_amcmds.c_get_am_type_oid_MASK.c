
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char amtype; int oid; int amname; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_am ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char const*,...) ;
 int FUNC_10 (char) ;

__attribute__((used)) static Oid
FUNC_11(const char *VAR_5, char VAR_6, bool VAR_7)
{
 HeapTuple VAR_8;
 Oid VAR_9 = VAR_4;

 VAR_8 = FUNC_6(VAR_0, FUNC_0(VAR_5));
 if (FUNC_2(VAR_8))
 {
  Form_pg_am VAR_10 = (Form_pg_am) FUNC_1(VAR_8);

  if (VAR_6 != '\0' &&
   VAR_10->amtype != VAR_6)
   FUNC_7(VAR_3,
     (FUNC_8(VAR_1),
      FUNC_9("access method \"%s\" is not of type %s",
       FUNC_3(VAR_10->amname),
       FUNC_10(VAR_6))));

  VAR_9 = VAR_10->oid;
  FUNC_5(VAR_8);
 }

 if (!FUNC_4(VAR_9) && !VAR_7)
  FUNC_7(VAR_3,
    (FUNC_8(VAR_2),
     FUNC_9("access method \"%s\" does not exist", VAR_5)));
 return VAR_9;
}
