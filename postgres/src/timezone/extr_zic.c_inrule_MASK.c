
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rule {void* r_abbrvar; void* r_name; int r_isdst; int r_save; int r_linenum; int r_filename; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int ,...) ;
 int VAR_10 ;
 int FUNC_3 (char*,int *) ;
 struct rule* FUNC_4 (struct rule*,int,int ,int *) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct rule* VAR_15 ;
 int FUNC_5 (struct rule*,char*,char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_6 (void*) ;

__attribute__((used)) static void
FUNC_7(char **VAR_16, int VAR_17)
{
 static struct rule VAR_18;

 if (VAR_17 != VAR_9)
 {
  FUNC_2(FUNC_0("wrong number of fields on Rule line"));
  return;
 }
 switch (*VAR_16[VAR_6])
 {
  case '\0':
  case ' ':
  case '\f':
  case '\n':
  case '\r':
  case '\t':
  case '\v':
  case '+':
  case '-':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
   FUNC_2(FUNC_0("Invalid rule name \"%s\""), VAR_16[VAR_6]);
   return;
 }
 VAR_18.r_filename = VAR_10;
 VAR_18.r_linenum = VAR_11;
 VAR_18.r_save = FUNC_3(VAR_16[VAR_7], &VAR_18.r_isdst);
 FUNC_5(&VAR_18, VAR_16[VAR_4], VAR_16[VAR_3], VAR_16[VAR_1],
   VAR_16[VAR_5], VAR_16[VAR_2], VAR_16[VAR_8]);
 VAR_18.r_name = FUNC_1(VAR_16[VAR_6]);
 VAR_18.r_abbrvar = FUNC_1(VAR_16[VAR_0]);
 if (VAR_12 < FUNC_6(VAR_18.r_abbrvar))
  VAR_12 = FUNC_6(VAR_18.r_abbrvar);
 VAR_15 = FUNC_4(VAR_15, sizeof *VAR_15, VAR_13, &VAR_14);
 VAR_15[VAR_13++] = VAR_18;
}
