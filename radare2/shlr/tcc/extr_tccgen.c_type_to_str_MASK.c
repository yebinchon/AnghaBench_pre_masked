
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf1 ;
struct TYPE_5__ {int t; TYPE_1__* ref; } ;
struct TYPE_4__ {int v; TYPE_2__ type; struct TYPE_4__* next; } ;
typedef TYPE_1__ Sym ;
typedef TYPE_2__ CType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;

 int VAR_8 ;
 char const* FUNC_0 (int,int *) ;
 int FUNC_1 (char*,int,char const*) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (char*,int,char*,int ) ;

__attribute__((used)) static void FUNC_4(char *VAR_9, int VAR_10, CType *VAR_11, const char *VAR_12) {
 int VAR_13, VAR_14, VAR_15;
 Sym *VAR_16, *VAR_17;
 char VAR_18[256];
 const char *VAR_19;
 VAR_15 = VAR_11->t & VAR_6;
 VAR_13 = VAR_15 & VAR_3;
 VAR_9[0] = '\0';
 if (VAR_15 & VAR_5) {
  FUNC_1 (VAR_9, VAR_10, "const ");
 }
 if (VAR_15 & VAR_8) {
  FUNC_1 (VAR_9, VAR_10, "volatile ");
 }
 switch (VAR_13) {
 case 128:
  VAR_19 = "void";
  goto add_tstr;
 case 142:
  VAR_19 = "bool";
  goto add_tstr;
 case 134:
  if (VAR_15 & VAR_7) {
   VAR_19 = "uint8_t";
  } else {
   if (VAR_15 & VAR_4) {
    VAR_19 = "char";
   } else {
    VAR_19 = "int8_t";
   }
  }
  goto add_tstr;
 case 137:
  if (VAR_15 & VAR_7) {
   VAR_19 = "uint16_t";
  } else {
   VAR_19 = "int16_t";
  }
  goto add_tstr;
 case 136:
  if (VAR_15 & VAR_7) {
   VAR_19 = "uint32_t";
  } else {
   VAR_19 = "int32_t";
  }
  goto add_tstr;
 case 132:
  VAR_19 = "long";
  goto add_tstr;
 case 135:
  if (VAR_15 & VAR_7) {
   VAR_19 = "uint64_t";
  } else {
   VAR_19 = "int64_t";
  }
  goto add_tstr;
 case 139:
  VAR_19 = "float";
  goto add_tstr;
 case 141:
  VAR_19 = "double";
  goto add_tstr;
 case 133:
  VAR_19 = "long double";
add_tstr:
  FUNC_1 (VAR_9, VAR_10, VAR_19);
  if ((VAR_15 & VAR_7) && (VAR_13 != 134) &&
      (VAR_13 != 137) && (VAR_13 != 136) &&
      (VAR_13 != 135)) {
   FUNC_1 (VAR_9, VAR_10, "unsigned ");
  }
  break;
 case 140:
 case 130:
 case 129:
  if (VAR_13 == 130) {
   VAR_19 = "struct ";
  } else if (VAR_13 == 129) {
   VAR_19 = "union ";
  } else {
   VAR_19 = "enum ";
  }
  FUNC_1 (VAR_9, VAR_10, VAR_19);
  VAR_14 = VAR_11->ref->v & ~VAR_1;
  if (VAR_14 >= VAR_0) {
   FUNC_3 (VAR_9, VAR_10, "%u", VAR_14 - VAR_0);
  } else {
   FUNC_1 (VAR_9, VAR_10, FUNC_0 (VAR_14, ((void*)0)));
  }
  break;
 case 138:
  VAR_16 = VAR_11->ref;
  FUNC_4 (VAR_9, VAR_10, &VAR_16->type, VAR_12);
  FUNC_1 (VAR_9, VAR_10, "(");
  VAR_17 = VAR_16->next;
  while (VAR_17 != ((void*)0)) {
   FUNC_4 (VAR_18, sizeof(VAR_18), &VAR_17->type, ((void*)0));
   FUNC_1 (VAR_9, VAR_10, VAR_18);
   VAR_17 = VAR_17->next;
   if (VAR_17) {
    FUNC_1 (VAR_9, VAR_10, ", ");
   }
  }
  FUNC_1 (VAR_9, VAR_10, ")");
  goto no_var;
 case 131:
  VAR_16 = VAR_11->ref;
  if (VAR_15 & VAR_2) {
   FUNC_4 (VAR_9, VAR_10, &VAR_16->type, ((void*)0));
  } else {
   FUNC_2 (VAR_18, sizeof(VAR_18), "*");
   if (VAR_12) {
    FUNC_1 (VAR_18, sizeof(VAR_18), VAR_12);
   }
   FUNC_4 (VAR_9, VAR_10, &VAR_16->type, VAR_18);
  }
  goto no_var;
 }
 if (VAR_12) {
  FUNC_1 (VAR_9, VAR_10, " ");
  FUNC_1 (VAR_9, VAR_10, VAR_12);
 }
no_var:
 ;
}
