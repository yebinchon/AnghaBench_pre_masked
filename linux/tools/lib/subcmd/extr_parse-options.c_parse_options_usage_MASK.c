
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ type; char const short_name; char* long_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (char,int ) ;
 int FUNC_2 (struct option const*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char*,char const*) ;

int FUNC_4(const char * const *VAR_3,
   const struct option *VAR_4,
   const char *VAR_5, bool VAR_6)
{
 if (!VAR_3)
  goto opt;

 FUNC_0(VAR_2, "\n Usage: %s\n", *VAR_3++);
 while (*VAR_3 && **VAR_3)
  FUNC_0(VAR_2, "    or: %s\n", *VAR_3++);
 while (*VAR_3) {
  FUNC_0(VAR_2, "%s%s\n",
    **VAR_3 ? "    " : "",
    *VAR_3);
  VAR_3++;
 }
 FUNC_1('\n', VAR_2);

opt:
 for ( ; VAR_4->type != VAR_0; VAR_4++) {
  if (VAR_6) {
   if (VAR_4->short_name == *VAR_5) {
    FUNC_2(VAR_4, 0);
    break;
   }
   continue;
  }

  if (VAR_4->long_name == ((void*)0))
   continue;

  if (FUNC_3(VAR_4->long_name, VAR_5))
   FUNC_2(VAR_4, 0);
  if (FUNC_3("no-", VAR_5) &&
      FUNC_3(VAR_4->long_name, VAR_5 + 3))
   FUNC_2(VAR_4, 0);
 }

 return VAR_1;
}
