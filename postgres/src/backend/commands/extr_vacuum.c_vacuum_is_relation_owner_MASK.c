
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ relnamespace; scalar_t__ relisshared; int relname; } ;
typedef int Oid ;
typedef TYPE_1__* Form_pg_class ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 char* FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

bool
FUNC_7(Oid VAR_5, Form_pg_class VAR_6, int VAR_7)
{
 char *VAR_8;

 FUNC_0((VAR_7 & (VAR_3 | VAR_2)) != 0);
 if (FUNC_5(VAR_5, FUNC_1()) ||
  (FUNC_6(VAR_0, FUNC_1()) && !VAR_6->relisshared))
  return 1;

 VAR_8 = FUNC_2(VAR_6->relname);

 if ((VAR_7 & VAR_3) != 0)
 {
  if (VAR_6->relisshared)
   FUNC_3(VAR_4,
     (FUNC_4("skipping \"%s\" --- only superuser can vacuum it",
       VAR_8)));
  else if (VAR_6->relnamespace == VAR_1)
   FUNC_3(VAR_4,
     (FUNC_4("skipping \"%s\" --- only superuser or database owner can vacuum it",
       VAR_8)));
  else
   FUNC_3(VAR_4,
     (FUNC_4("skipping \"%s\" --- only table or database owner can vacuum it",
       VAR_8)));






  return 0;
 }

 if ((VAR_7 & VAR_2) != 0)
 {
  if (VAR_6->relisshared)
   FUNC_3(VAR_4,
     (FUNC_4("skipping \"%s\" --- only superuser can analyze it",
       VAR_8)));
  else if (VAR_6->relnamespace == VAR_1)
   FUNC_3(VAR_4,
     (FUNC_4("skipping \"%s\" --- only superuser or database owner can analyze it",
       VAR_8)));
  else
   FUNC_3(VAR_4,
     (FUNC_4("skipping \"%s\" --- only table or database owner can analyze it",
       VAR_8)));
 }

 return 0;
}
