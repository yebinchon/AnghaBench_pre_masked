
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_trace_arg_ref {int user_access; struct probe_trace_arg_ref* next; } ;
struct probe_trace_arg {int * type; struct probe_trace_arg_ref* ref; } ;
typedef int sbuf ;
typedef int Dwarf_Die ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (char*,...) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (char*,int,char*,char,int,...) ;
 int FUNC_14 (int,char*,int) ;
 scalar_t__ FUNC_15 (char const*,char*) ;
 void* FUNC_16 (char const*) ;
 struct probe_trace_arg_ref* FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(Dwarf_Die *VAR_9,
     struct probe_trace_arg *VAR_10,
     const char *VAR_11, bool VAR_12)
{
 struct probe_trace_arg_ref **VAR_13 = &VAR_10->ref;
 Dwarf_Die VAR_14;
 char VAR_15[16];
 char VAR_16[VAR_8];
 int VAR_17, VAR_18, VAR_19;
 int VAR_20;
 char VAR_21;


 if (VAR_11 && FUNC_15(VAR_11, "string") != 0 && FUNC_15(VAR_11, "x") != 0 &&
     FUNC_15(VAR_11, "s") != 0 && FUNC_15(VAR_11, "u") != 0) {


  VAR_10->type = FUNC_16(VAR_11);
  return (VAR_10->type == ((void*)0)) ? -VAR_5 : 0;
 }

 VAR_17 = FUNC_5(VAR_9);
 if (VAR_17 > 0) {

  VAR_18 = FUNC_4(VAR_9);
  VAR_19 = FUNC_6(VAR_9);
  if (VAR_18 < 0 || VAR_19 < 0)
   return -VAR_4;
  VAR_20 = FUNC_13(VAR_15, 16, "b%d@%d/%zd", VAR_17, VAR_18,
    FUNC_0(VAR_19));
  goto formatted;
 }

 if (FUNC_2(VAR_9, &VAR_14) == ((void*)0)) {
  FUNC_11("Failed to get a type information of %s.\n",
      FUNC_7(VAR_9));
  return -VAR_4;
 }

 FUNC_9("%s type is %s.\n",
   FUNC_7(VAR_9), FUNC_7(&VAR_14));

 if (VAR_11 && (!FUNC_15(VAR_11, "string") || !FUNC_15(VAR_11, "ustring"))) {

  VAR_20 = FUNC_8(&VAR_14);
  if (VAR_20 != VAR_1 &&
      VAR_20 != VAR_0) {
   FUNC_11("Failed to cast into string: "
       "%s(%s) is not a pointer nor array.\n",
       FUNC_7(VAR_9), FUNC_7(&VAR_14));
   return -VAR_3;
  }
  if (FUNC_2(&VAR_14, &VAR_14) == ((void*)0)) {
   FUNC_11("Failed to get a type"
       " information.\n");
   return -VAR_4;
  }
  if (VAR_20 == VAR_1) {
   while (*VAR_13)
    VAR_13 = &(*VAR_13)->next;

   *VAR_13 = FUNC_17(sizeof(struct probe_trace_arg_ref));
   if (*VAR_13 == ((void*)0)) {
    FUNC_11("Out of memory error\n");
    return -VAR_5;
   }
   (*VAR_13)->user_access = VAR_12;
  }
  if (!FUNC_1(&VAR_14, "char") &&
      !FUNC_1(&VAR_14, "unsigned char")) {
   FUNC_11("Failed to cast into string: "
       "%s is not (unsigned) char *.\n",
       FUNC_7(VAR_9));
   return -VAR_3;
  }
  VAR_10->type = FUNC_16(VAR_11);
  return (VAR_10->type == ((void*)0)) ? -VAR_5 : 0;
 }

 if (VAR_11 && (FUNC_15(VAR_11, "u") == 0))
  VAR_21 = 'u';
 else if (VAR_11 && (FUNC_15(VAR_11, "s") == 0))
  VAR_21 = 's';
 else if (VAR_11 && (FUNC_15(VAR_11, "x") == 0) &&
   FUNC_12(VAR_7))
  VAR_21 = 'x';
 else
  VAR_21 = FUNC_3(&VAR_14) ? 's' :
    FUNC_12(VAR_7) ? 'x' : 'u';

 VAR_20 = FUNC_6(&VAR_14);
 if (VAR_20 <= 0)

  return 0;
 VAR_20 = FUNC_0(VAR_20);


 if (VAR_20 > VAR_6) {
  FUNC_10("%s exceeds max-bitwidth. Cut down to %d bits.\n",
   FUNC_7(&VAR_14), VAR_6);
  VAR_20 = VAR_6;
 }
 VAR_20 = FUNC_13(VAR_15, 16, "%c%d", VAR_21, VAR_20);

formatted:
 if (VAR_20 < 0 || VAR_20 >= 16) {
  if (VAR_20 >= 16)
   VAR_20 = -VAR_2;
  FUNC_11("Failed to convert variable type: %s\n",
      FUNC_14(-VAR_20, VAR_16, sizeof(VAR_16)));
  return VAR_20;
 }
 VAR_10->type = FUNC_16(VAR_15);
 if (VAR_10->type == ((void*)0))
  return -VAR_5;
 return 0;
}
