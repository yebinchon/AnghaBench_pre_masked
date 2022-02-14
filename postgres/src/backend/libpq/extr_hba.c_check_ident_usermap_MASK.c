
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;
typedef char pg_wchar ;
typedef int errstr ;
struct TYPE_6__ {char* usermap; char* ident_user; char* pg_role; int re; } ;
typedef TYPE_2__ IdentLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (int) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char const*,char*,int) ;
 int FUNC_8 (int,int *,char*,int) ;
 int FUNC_9 (int *,char*,int,int ,int *,int,TYPE_1__*,int ) ;
 scalar_t__ FUNC_10 (char*,char const*) ;
 char* FUNC_11 (char const*) ;
 int FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*,char const*) ;
 int FUNC_14 (char const*) ;
 char* FUNC_15 (char*,char*) ;

__attribute__((used)) static void
FUNC_16(IdentLine *VAR_3, const char *VAR_4,
     const char *VAR_5, const char *VAR_6,
     bool VAR_7, bool *VAR_8, bool *VAR_9)
{
 *VAR_8 = 0;
 *VAR_9 = 0;

 if (FUNC_13(VAR_3->usermap, VAR_4) != 0)

  return;


 if (VAR_3->ident_user[0] == '/')
 {






  int VAR_10;
  regmatch_t VAR_11[2];
  pg_wchar *VAR_12;
  int VAR_13;
  char *VAR_14;
  char *VAR_15;

  VAR_12 = FUNC_4((FUNC_14(VAR_6) + 1) * sizeof(pg_wchar));
  VAR_13 = FUNC_7(VAR_6, VAR_12, FUNC_14(VAR_6));

  VAR_10 = FUNC_9(&VAR_3->re, VAR_12, VAR_13, 0, ((void*)0), 2, VAR_11, 0);
  if (VAR_10)
  {
   char VAR_16[100];

   if (VAR_10 != VAR_2)
   {

    FUNC_8(VAR_10, &VAR_3->re, VAR_16, sizeof(VAR_16));
    FUNC_0(VAR_1,
      (FUNC_1(VAR_0),
       FUNC_2("regular expression match for \"%s\" failed: %s",
        VAR_3->ident_user + 1, VAR_16)));
    *VAR_9 = 1;
   }

   FUNC_6(VAR_12);
   return;
  }
  FUNC_6(VAR_12);

  if ((VAR_14 = FUNC_15(VAR_3->pg_role, "\\1")) != ((void*)0))
  {
   int VAR_17;


   if (VAR_11[1].rm_so < 0)
   {
    FUNC_0(VAR_1,
      (FUNC_1(VAR_0),
       FUNC_2("regular expression \"%s\" has no subexpressions as requested by backreference in \"%s\"",
        VAR_3->ident_user + 1, VAR_3->pg_role)));
    *VAR_9 = 1;
    return;
   }





   VAR_15 = FUNC_5(FUNC_14(VAR_3->pg_role) - 2 + (VAR_11[1].rm_eo - VAR_11[1].rm_so) + 1);
   VAR_17 = VAR_14 - VAR_3->pg_role;
   FUNC_3(VAR_15, VAR_3->pg_role, VAR_17);
   FUNC_3(VAR_15 + VAR_17,
       VAR_6 + VAR_11[1].rm_so,
       VAR_11[1].rm_eo - VAR_11[1].rm_so);
   FUNC_12(VAR_15, VAR_14 + 2);
  }
  else
  {

   VAR_15 = FUNC_11(VAR_3->pg_role);
  }





  if (VAR_7)
  {
   if (FUNC_10(VAR_15, VAR_5) == 0)
    *VAR_8 = 1;
  }
  else
  {
   if (FUNC_13(VAR_15, VAR_5) == 0)
    *VAR_8 = 1;
  }
  FUNC_6(VAR_15);

  return;
 }
 else
 {

  if (VAR_7)
  {
   if (FUNC_10(VAR_3->pg_role, VAR_5) == 0 &&
    FUNC_10(VAR_3->ident_user, VAR_6) == 0)
    *VAR_8 = 1;
  }
  else
  {
   if (FUNC_13(VAR_3->pg_role, VAR_5) == 0 &&
    FUNC_13(VAR_3->ident_user, VAR_6) == 0)
    *VAR_8 = 1;
  }
 }
 return;
}
