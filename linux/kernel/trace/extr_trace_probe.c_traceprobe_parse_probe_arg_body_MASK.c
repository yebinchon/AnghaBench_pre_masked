
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct probe_arg {scalar_t__ count; int offset; int dynamic; void* code; TYPE_1__* type; int fmt; int comm; } ;
struct fetch_insn {scalar_t__ op; int size; int param; struct fetch_insn* data; } ;
typedef int ssize_t ;
struct TYPE_3__ {int size; char* fmttype; char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (char*,TYPE_1__*,struct fetch_insn**) ;
 void* FUNC_1 (char*) ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct fetch_insn*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (char*,int ,scalar_t__*) ;
 int FUNC_7 (void*,struct fetch_insn*,int) ;
 int FUNC_8 (char*,TYPE_1__*,struct fetch_insn**,struct fetch_insn*,unsigned int,int) ;
 int FUNC_9 (int ,int,char*,char*,scalar_t__) ;
 char* FUNC_10 (char*,char) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*,char*,int) ;
 int FUNC_14 (int,int ) ;

__attribute__((used)) static int FUNC_15(char *VAR_30, ssize_t *VAR_31,
  struct probe_arg *VAR_32, unsigned int VAR_33, int VAR_34)
{
 struct fetch_insn *VAR_35, *VAR_36, *VAR_37 = ((void*)0);
 char *VAR_38, *VAR_39, *VAR_40;
 int VAR_41, VAR_42;

 VAR_42 = FUNC_12(VAR_30);
 if (VAR_42 > VAR_26) {
  FUNC_14(VAR_34, VAR_0);
  return -VAR_8;
 } else if (VAR_42 == 0) {
  FUNC_14(VAR_34, VAR_28);
  return -VAR_8;
 }

 VAR_32->comm = FUNC_5(VAR_30, VAR_25);
 if (!VAR_32->comm)
  return -VAR_9;

 VAR_38 = FUNC_10(VAR_30, ':');
 if (VAR_38) {
  *VAR_38 = '\0';
  VAR_39 = FUNC_10(++VAR_38, '[');
  if (VAR_39) {
   *VAR_39++ = '\0';
   VAR_40 = FUNC_10(VAR_39, ']');
   if (!VAR_40) {
    VAR_34 += VAR_39 + FUNC_12(VAR_39) - VAR_30;
    FUNC_14(VAR_34,
          VAR_1);
    return -VAR_8;
   } else if (VAR_40[1] != '\0') {
    FUNC_14(VAR_34 + VAR_40 + 1 - VAR_30,
          VAR_4);
    return -VAR_8;
   }
   *VAR_40 = '\0';
   if (FUNC_6(VAR_39, 0, &VAR_32->count) || !VAR_32->count) {
    FUNC_14(VAR_34 + VAR_39 - VAR_30,
          VAR_3);
    return -VAR_8;
   }
   if (VAR_32->count > VAR_27) {
    FUNC_14(VAR_34 + VAR_39 - VAR_30,
          VAR_2);
    return -VAR_8;
   }
  }
 }





 if (FUNC_11(VAR_30, "$comm") == 0 || FUNC_13(VAR_30, "\\\"", 2) == 0) {

  if (VAR_32->count || (VAR_38 && FUNC_11(VAR_38, "string")))
   return -VAR_8;
  VAR_32->type = FUNC_1("string");
 } else
  VAR_32->type = FUNC_1(VAR_38);
 if (!VAR_32->type) {
  FUNC_14(VAR_34 + (VAR_38 ? (VAR_38 - VAR_30) : 0), VAR_7);
  return -VAR_8;
 }
 VAR_32->offset = *VAR_31;
 *VAR_31 += VAR_32->type->size * (VAR_32->count ?: 1);

 if (VAR_32->count) {
  VAR_42 = FUNC_12(VAR_32->type->fmttype) + 6;
  VAR_32->fmt = FUNC_4(VAR_42, VAR_25);
  if (!VAR_32->fmt)
   return -VAR_9;
  FUNC_9(VAR_32->fmt, VAR_42, "%s[%d]", VAR_32->type->fmttype,
    VAR_32->count);
 }

 VAR_35 = VAR_37 = FUNC_2(VAR_10, sizeof(*VAR_35), VAR_25);
 if (!VAR_35)
  return -VAR_9;
 VAR_35[VAR_10 - 1].op = VAR_15;

 VAR_41 = FUNC_8(VAR_30, VAR_32->type, &VAR_35, &VAR_35[VAR_10 - 1],
         VAR_33, VAR_34);
 if (VAR_41)
  goto fail;


 if (!FUNC_11(VAR_32->type->name, "string") ||
     !FUNC_11(VAR_32->type->name, "ustring")) {
  if (VAR_35->op != VAR_14 && VAR_35->op != VAR_24 &&
      VAR_35->op != VAR_16 && VAR_35->op != VAR_12 &&
      VAR_35->op != VAR_13) {
   FUNC_14(VAR_34 + (VAR_38 ? (VAR_38 - VAR_30) : 0),
         VAR_6);
   VAR_41 = -VAR_8;
   goto fail;
  }
  if ((VAR_35->op == VAR_16 || VAR_35->op == VAR_12) ||
       VAR_32->count) {






   VAR_35++;
   if (VAR_35->op != VAR_18) {
    FUNC_14(VAR_34, VAR_29);
    VAR_41 = -VAR_8;
    goto fail;
   }
  }

  if (!FUNC_11(VAR_32->type->name, "ustring") ||
      VAR_35->op == VAR_24)
   VAR_35->op = VAR_23;
  else
   VAR_35->op = VAR_21;
  VAR_35->size = VAR_32->type->size;
  VAR_32->dynamic = 1;
 } else if (VAR_35->op == VAR_14) {
  VAR_35->op = VAR_19;
  VAR_35->size = VAR_32->type->size;
 } else if (VAR_35->op == VAR_24) {
  VAR_35->op = VAR_22;
  VAR_35->size = VAR_32->type->size;
 } else {
  VAR_35++;
  if (VAR_35->op != VAR_18) {
   FUNC_14(VAR_34, VAR_29);
   VAR_41 = -VAR_8;
   goto fail;
  }
  VAR_35->op = VAR_20;
  VAR_35->size = VAR_32->type->size;
 }
 VAR_36 = VAR_35;

 if (VAR_38 != ((void*)0)) {
  VAR_41 = FUNC_0(VAR_38, VAR_32->type, &VAR_35);
  if (VAR_41) {
   FUNC_14(VAR_34 + VAR_38 - VAR_30, VAR_5);
   goto fail;
  }
 }

 if (VAR_32->count) {
  if (VAR_36->op != VAR_19 &&
      VAR_36->op != VAR_21 &&
      VAR_36->op != VAR_23) {
   FUNC_14(VAR_34 + (VAR_38 ? (VAR_38 - VAR_30) : 0),
         VAR_6);
   VAR_41 = -VAR_8;
   goto fail;
  }
  VAR_35++;
  if (VAR_35->op != VAR_18) {
   FUNC_14(VAR_34, VAR_29);
   VAR_41 = -VAR_8;
   goto fail;
  }
  VAR_35->op = VAR_17;
  VAR_35->param = VAR_32->count;
 }
 VAR_35++;
 VAR_35->op = VAR_15;


 VAR_32->code = FUNC_2(VAR_35 - VAR_37 + 1, sizeof(*VAR_35), VAR_25);
 if (!VAR_32->code)
  VAR_41 = -VAR_9;
 else
  FUNC_7(VAR_32->code, VAR_37, sizeof(*VAR_35) * (VAR_35 - VAR_37 + 1));

fail:
 if (VAR_41) {
  for (VAR_35 = VAR_37; VAR_35 < VAR_37 + VAR_10; VAR_35++)
   if (VAR_35->op == VAR_11 ||
       VAR_35->op == VAR_13)
    FUNC_3(VAR_35->data);
 }
 FUNC_3(VAR_37);

 return VAR_41;
}
