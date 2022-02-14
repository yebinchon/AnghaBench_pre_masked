
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sample_reg {char* name; int mask; } ;
struct option {scalar_t__ value; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char,int ) ;
 int FUNC_4 (char*) ;
 struct sample_reg* VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (char*,char*,char*) ;

__attribute__((used)) static int
FUNC_10(const struct option *VAR_2, const char *VAR_3, int VAR_4, bool VAR_5)
{
 uint64_t *VAR_6 = (uint64_t *)VAR_2->value;
 const struct sample_reg *VAR_7;
 char *VAR_8, *VAR_9 = ((void*)0), *VAR_10;
 int VAR_11 = -1;
 uint64_t VAR_12;

 if (VAR_4)
  return 0;




 if (*VAR_6)
  return -1;

 if (VAR_5)
  VAR_12 = FUNC_0();
 else
  VAR_12 = FUNC_1();


 if (VAR_3) {

  VAR_8 = VAR_9 = FUNC_8(VAR_3);
  if (!VAR_8)
   return -1;

  for (;;) {
   VAR_10 = FUNC_6(VAR_8, ',');
   if (VAR_10)
    *VAR_10 = '\0';

   if (!FUNC_7(VAR_8, "?")) {
    FUNC_2(VAR_1, "available registers: ");
    for (VAR_7 = VAR_0; VAR_7->name; VAR_7++) {
     if (VAR_7->mask & VAR_12)
      FUNC_2(VAR_1, "%s ", VAR_7->name);
    }
    FUNC_3('\n', VAR_1);

    return -1;
   }
   for (VAR_7 = VAR_0; VAR_7->name; VAR_7++) {
    if ((VAR_7->mask & VAR_12) && !FUNC_5(VAR_8, VAR_7->name))
     break;
   }
   if (!VAR_7->name) {
    FUNC_9("Unknown register \"%s\", check man page or run \"perf record %s?\"\n",
         VAR_8, VAR_5 ? "-I" : "--user-regs=");
    goto error;
   }

   *VAR_6 |= VAR_7->mask;

   if (!VAR_10)
    break;

   VAR_8 = VAR_10 + 1;
  }
 }
 VAR_11 = 0;


 if (*VAR_6 == 0)
  *VAR_6 = VAR_12;
error:
 FUNC_4(VAR_9);
 return VAR_11;
}
