
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ECPGstruct_member* members; } ;
struct ECPGtype {int * struct_sizeof; TYPE_1__ u; } ;
struct ECPGstruct_member {struct ECPGstruct_member* next; int * type; int * name; } ;
typedef int FILE ;


 int FUNC_0 (int *,int *,int *,int,int *,int *,int,char const*,char const*,char*,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 struct ECPGtype VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,char*,char const*) ;
 int FUNC_5 (char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 struct ECPGstruct_member VAR_3 ;

__attribute__((used)) static void
FUNC_7(FILE *VAR_4, const char *VAR_5, const char *VAR_6, char *VAR_7, struct ECPGtype *VAR_8, struct ECPGtype *VAR_9, const char *VAR_10, const char *VAR_11)
{




 struct ECPGstruct_member *VAR_12,
      *VAR_13 = ((void*)0);
 char *VAR_14 = (char *) FUNC_3(FUNC_6(VAR_5) + ((VAR_10 == ((void*)0)) ? 0 : FUNC_6(VAR_10)) + 3);
 char *VAR_15 = (char *) FUNC_3(FUNC_6(VAR_6) + ((VAR_11 == ((void*)0)) ? 0 : FUNC_6(VAR_11)) + 3);

 if (FUNC_1(VAR_7) == 1)
  FUNC_5(VAR_14, "%s%s.", VAR_10 ? VAR_10 : "", VAR_5);
 else
  FUNC_5(VAR_14, "%s%s->", VAR_10 ? VAR_10 : "", VAR_5);

 VAR_10 = VAR_14;

 if (VAR_9 == &VAR_2)
  VAR_13 = &VAR_3;
 else if (VAR_9 != ((void*)0))
 {
  if (FUNC_1(VAR_7) == 1)
   FUNC_5(VAR_15, "%s%s.", VAR_11 ? VAR_11 : "", VAR_6);
  else
   FUNC_5(VAR_15, "%s%s->", VAR_11 ? VAR_11 : "", VAR_6);

  VAR_11 = VAR_15;
  VAR_13 = VAR_9->u.members;
 }

 for (VAR_12 = VAR_8->u.members; VAR_12; VAR_12 = VAR_12->next)
 {
  FUNC_0(VAR_4, VAR_12->name, VAR_12->type, -1,
      (VAR_13 != ((void*)0)) ? VAR_13->name : ((void*)0),
      (VAR_13 != ((void*)0)) ? VAR_13->type : ((void*)0),
      -1,
      VAR_10, VAR_11, VAR_7, VAR_8->struct_sizeof,
      (VAR_13 != ((void*)0)) ? VAR_9->struct_sizeof : ((void*)0));
  if (VAR_13 != ((void*)0) && VAR_13 != &VAR_3)
  {
   VAR_13 = VAR_13->next;
   if (VAR_13 == ((void*)0) && VAR_12->next != ((void*)0))
   {
    FUNC_4(VAR_1, VAR_0, "indicator struct \"%s\" has too few members", VAR_6);
    VAR_13 = &VAR_3;
   }
  }
 }

 if (VAR_9 != ((void*)0) && VAR_13 != ((void*)0) && VAR_13 != &VAR_3)
 {
  FUNC_4(VAR_1, VAR_0, "indicator struct \"%s\" has too many members", VAR_6);
 }

 FUNC_2(VAR_14);
 FUNC_2(VAR_15);
}
