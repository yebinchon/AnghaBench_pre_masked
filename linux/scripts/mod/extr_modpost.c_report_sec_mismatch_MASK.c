
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sectioncheck {int mismatch; int symbol_white_list; } ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char const**,char const**) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (char*,char const*,char const*,unsigned long long,char const*,char const*,char const*,char const*,char const*,char const*,char const*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_2,
    const struct sectioncheck *VAR_3,
    const char *VAR_4,
    unsigned long long VAR_5,
    const char *VAR_6,
    int VAR_7,
    const char *VAR_8, const char *VAR_9,
    int VAR_10)
{
 const char *VAR_11, *VAR_12;
 const char *VAR_13, *VAR_14;
 char *VAR_15;
 char *VAR_16;

 VAR_0++;

 FUNC_3(VAR_7, &VAR_11, &VAR_12);
 FUNC_3(VAR_10, &VAR_13, &VAR_14);

 FUNC_6("%s(%s+0x%llx): Section mismatch in reference from the %s %s%s "
      "to the %s %s:%s%s\n",
      VAR_2, VAR_4, VAR_5, VAR_11, VAR_6, VAR_12, VAR_13, VAR_8,
      VAR_9, VAR_14);

 switch (VAR_3->mismatch) {
 case 130:
  VAR_15 = FUNC_5(VAR_4);
  VAR_16 = FUNC_5(VAR_8);
  FUNC_1(VAR_1,
  "The function %s%s() references\n"
  "the %s %s%s%s.\n"
  "This is often because %s lacks a %s\n"
  "annotation or the annotation of %s is wrong.\n",
  VAR_15, VAR_6,
  VAR_13, VAR_16, VAR_9, VAR_14,
  VAR_6, VAR_16, VAR_9);
  FUNC_2(VAR_15);
  FUNC_2(VAR_16);
  break;
 case 134: {
  VAR_16 = FUNC_5(VAR_8);
  FUNC_1(VAR_1,
  "The variable %s references\n"
  "the %s %s%s%s\n"
  "If the reference is valid then annotate the\n"
  "variable with __init* or __refdata (see linux/init.h) "
  "or name the variable:\n",
  VAR_6, VAR_13, VAR_16, VAR_9, VAR_14);
  FUNC_4(VAR_3->symbol_white_list);
  FUNC_2(VAR_16);
  break;
 }
 case 131:
  VAR_16 = FUNC_5(VAR_8);
  FUNC_1(VAR_1,
  "The function %s() references a %s in an exit section.\n"
  "Often the %s %s%s has valid usage outside the exit section\n"
  "and the fix is to remove the %sannotation of %s.\n",
  VAR_6, VAR_13, VAR_13, VAR_9, VAR_14, VAR_16, VAR_9);
  FUNC_2(VAR_16);
  break;
 case 135: {
  VAR_16 = FUNC_5(VAR_8);
  FUNC_1(VAR_1,
  "The variable %s references\n"
  "the %s %s%s%s\n"
  "If the reference is valid then annotate the\n"
  "variable with __exit* (see linux/init.h) or "
  "name the variable:\n",
  VAR_6, VAR_13, VAR_16, VAR_9, VAR_14);
  FUNC_4(VAR_3->symbol_white_list);
  FUNC_2(VAR_16);
  break;
 }
 case 128:
 case 129:
  VAR_15 = FUNC_5(VAR_4);
  VAR_16 = FUNC_5(VAR_8);
  FUNC_1(VAR_1,
  "The %s %s%s%s references\n"
  "a %s %s%s%s.\n"
  "If %s is only used by %s then\n"
  "annotate %s with a matching annotation.\n",
  VAR_11, VAR_15, VAR_6, VAR_12,
  VAR_13, VAR_16, VAR_9, VAR_14,
  VAR_9, VAR_6, VAR_9);
  FUNC_2(VAR_15);
  FUNC_2(VAR_16);
  break;
 case 136:
  VAR_15 = FUNC_5(VAR_4);
  VAR_16 = FUNC_5(VAR_8);
  FUNC_1(VAR_1,
  "The %s %s%s%s references\n"
  "a %s %s%s%s.\n"
  "This is often seen when error handling "
  "in the init function\n"
  "uses functionality in the exit path.\n"
  "The fix is often to remove the %sannotation of\n"
  "%s%s so it may be used outside an exit section.\n",
  VAR_11, VAR_15, VAR_6, VAR_12,
  VAR_13, VAR_16, VAR_9, VAR_14,
  VAR_16, VAR_9, VAR_14);
  FUNC_2(VAR_15);
  FUNC_2(VAR_16);
  break;
 case 137:
  VAR_15 = FUNC_5(VAR_4);
  VAR_16 = FUNC_5(VAR_8);
  FUNC_1(VAR_1,
  "The %s %s%s%s references\n"
  "a %s %s%s%s.\n"
  "This is often seen when error handling "
  "in the exit function\n"
  "uses functionality in the init path.\n"
  "The fix is often to remove the %sannotation of\n"
  "%s%s so it may be used outside an init section.\n",
  VAR_11, VAR_15, VAR_6, VAR_12,
  VAR_13, VAR_16, VAR_9, VAR_14,
  VAR_16, VAR_9, VAR_14);
  FUNC_2(VAR_15);
  FUNC_2(VAR_16);
  break;
 case 133:
  VAR_16 = FUNC_5(VAR_8);
  FUNC_1(VAR_1,
  "The symbol %s is exported and annotated %s\n"
  "Fix this by removing the %sannotation of %s "
  "or drop the export.\n",
  VAR_9, VAR_16, VAR_16, VAR_9);
  FUNC_2(VAR_16);
  break;
 case 132:
  FUNC_0("There's a special handler for this mismatch type, "
        "we should never get here.");
  break;
 }
 FUNC_1(VAR_1, "\n");
}
