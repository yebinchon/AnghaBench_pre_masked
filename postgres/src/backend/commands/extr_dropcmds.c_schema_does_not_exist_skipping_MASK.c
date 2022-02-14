
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* schemaname; } ;
typedef TYPE_1__ RangeVar ;
typedef int List ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static bool
FUNC_4(List *VAR_0, const char **VAR_1, char **VAR_2)
{
 RangeVar *VAR_3;

 VAR_3 = FUNC_3(VAR_0);

 if (VAR_3->schemaname != ((void*)0) &&
  !FUNC_1(FUNC_0(VAR_3->schemaname)))
 {
  *VAR_1 = FUNC_2("schema \"%s\" does not exist, skipping");
  *VAR_2 = VAR_3->schemaname;

  return 1;
 }

 return 0;
}
