
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int z_nrules; char z_format_specifier; int z_isdst; int z_rule; int z_save; int z_linenum; int z_filename; struct rule* z_rules; } ;
struct rule {int r_name; int r_filename; int r_linenum; } ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct rule*,int,int,int ) ;
 int VAR_4 ;
 struct rule* VAR_5 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 struct zone* VAR_6 ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct zone *VAR_7;
 struct rule *VAR_8;
 ptrdiff_t VAR_9,
    VAR_10,
    VAR_11,
    VAR_12;

 if (VAR_2 != 0)
 {
  FUNC_5(VAR_5, VAR_2, sizeof *VAR_5, VAR_4);
  for (VAR_9 = 0; VAR_9 < VAR_2 - 1; ++VAR_9)
  {
   if (FUNC_6(VAR_5[VAR_9].r_name,
        VAR_5[VAR_9 + 1].r_name) != 0)
    continue;
   if (FUNC_6(VAR_5[VAR_9].r_filename,
        VAR_5[VAR_9 + 1].r_filename) == 0)
    continue;
   FUNC_1(VAR_5[VAR_9].r_filename, VAR_5[VAR_9].r_linenum);
   FUNC_7(FUNC_0("same rule name in multiple files"));
   FUNC_1(VAR_5[VAR_9 + 1].r_filename, VAR_5[VAR_9 + 1].r_linenum);
   FUNC_7(FUNC_0("same rule name in multiple files"));
   for (VAR_10 = VAR_9 + 2; VAR_10 < VAR_2; ++VAR_10)
   {
    if (FUNC_6(VAR_5[VAR_9].r_name,
         VAR_5[VAR_10].r_name) != 0)
     break;
    if (FUNC_6(VAR_5[VAR_9].r_filename,
         VAR_5[VAR_10].r_filename) == 0)
     continue;
    if (FUNC_6(VAR_5[VAR_9 + 1].r_filename,
         VAR_5[VAR_10].r_filename) == 0)
     continue;
    break;
   }
   VAR_9 = VAR_10 - 1;
  }
 }
 for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9)
 {
  VAR_7 = &VAR_6[VAR_9];
  VAR_7->z_rules = ((void*)0);
  VAR_7->z_nrules = 0;
 }
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11 = VAR_12)
 {
  VAR_8 = &VAR_5[VAR_11];
  for (VAR_12 = VAR_11 + 1; VAR_12 < VAR_2; ++VAR_12)
   if (FUNC_6(VAR_8->r_name, VAR_5[VAR_12].r_name) != 0)
    break;
  for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9)
  {
   VAR_7 = &VAR_6[VAR_9];
   if (FUNC_6(VAR_7->z_rule, VAR_8->r_name) != 0)
    continue;
   VAR_7->z_rules = VAR_8;
   VAR_7->z_nrules = VAR_12 - VAR_11;
  }
 }
 for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9)
 {
  VAR_7 = &VAR_6[VAR_9];
  if (VAR_7->z_nrules == 0)
  {



   FUNC_1(VAR_7->z_filename, VAR_7->z_linenum);
   VAR_7->z_save = FUNC_4(VAR_7->z_rule, &VAR_7->z_isdst);





   if (VAR_7->z_format_specifier == 's')
    FUNC_2("%s", FUNC_0("%s in ruleless zone"));
  }
 }
 if (VAR_1)
  FUNC_3(VAR_0);
}
