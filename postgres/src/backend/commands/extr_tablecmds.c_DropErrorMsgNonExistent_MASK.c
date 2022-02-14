
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dropmsgstrings {char kind; char* nonexistent_msg; char* skipping_msg; int nonexistent_code; } ;
struct TYPE_3__ {int * relname; int * schemaname; } ;
typedef TYPE_1__ RangeVar ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 struct dropmsgstrings* VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int *) ;

__attribute__((used)) static void
FUNC_6(RangeVar *VAR_4, char VAR_5, bool VAR_6)
{
 const struct dropmsgstrings *VAR_7;

 if (VAR_4->schemaname != ((void*)0) &&
  !FUNC_2(FUNC_1(VAR_4->schemaname)))
 {
  if (!VAR_6)
  {
   FUNC_3(VAR_1,
     (FUNC_4(VAR_0),
      FUNC_5("schema \"%s\" does not exist", VAR_4->schemaname)));
  }
  else
  {
   FUNC_3(VAR_2,
     (FUNC_5("schema \"%s\" does not exist, skipping",
       VAR_4->schemaname)));
  }
  return;
 }

 for (VAR_7 = VAR_3; VAR_7->kind != '\0'; VAR_7++)
 {
  if (VAR_7->kind == VAR_5)
  {
   if (!VAR_6)
   {
    FUNC_3(VAR_1,
      (FUNC_4(VAR_7->nonexistent_code),
       FUNC_5(VAR_7->nonexistent_msg, VAR_4->relname)));
   }
   else
   {
    FUNC_3(VAR_2, (FUNC_5(VAR_7->skipping_msg, VAR_4->relname)));
    break;
   }
  }
 }

 FUNC_0(VAR_7->kind != '\0');
}
