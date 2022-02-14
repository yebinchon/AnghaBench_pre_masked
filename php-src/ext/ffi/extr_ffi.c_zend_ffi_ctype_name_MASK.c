
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int tag_name; } ;
struct TYPE_12__ {int type; int length; } ;
struct TYPE_11__ {int ret_type; } ;
struct TYPE_10__ {int type; } ;
struct TYPE_9__ {int tag_name; } ;
struct TYPE_14__ {int kind; int attr; TYPE_5__ record; TYPE_4__ array; TYPE_3__ func; TYPE_2__ pointer; TYPE_1__ enumeration; } ;
typedef TYPE_6__ zend_ffi_type ;
typedef int zend_ffi_ctype_name_buf ;
typedef int str ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char const* FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,char const*,int) ;
 char* FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(zend_ffi_ctype_name_buf *VAR_4, const zend_ffi_type *VAR_5)
{
 const char *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 while (1) {
  switch (VAR_5->kind) {
   case 128:
    VAR_6 = "void";
    break;
   case 141:
    VAR_6 = "float";
    break;
   case 143:
    VAR_6 = "double";
    break;





   case 129:
    VAR_6 = "uint8_t";
    break;
   case 134:
    VAR_6 = "int8_t";
    break;
   case 132:
    VAR_6 = "uint16_t";
    break;
   case 137:
    VAR_6 = "int16_t";
    break;
   case 131:
    VAR_6 = "uint32_t";
    break;
   case 136:
    VAR_6 = "int32_t";
    break;
   case 130:
    VAR_6 = "uint64_t";
    break;
   case 135:
    VAR_6 = "int64_t";
    break;
   case 142:
    if (VAR_5->enumeration.tag_name) {
     FUNC_6(VAR_4, FUNC_3(VAR_5->enumeration.tag_name), FUNC_2(VAR_5->enumeration.tag_name));
    } else {
     FUNC_6(VAR_4, "<anonymous>", sizeof("<anonymous>")-1);
    }
    VAR_6 = "enum ";
    break;
   case 145:
    VAR_6 = "bool";
    break;
   case 144:
    VAR_6 = "char";
    break;
   case 138:
    if (!FUNC_6(VAR_4, "*", 1)) {
     return 0;
    }
    VAR_7 = 1;
    VAR_5 = FUNC_1(VAR_5->pointer.type);
    break;
   case 140:
    if (VAR_7) {
     VAR_7 = 0;
     if (!FUNC_6(VAR_4, "(", 1)
      || !FUNC_5(VAR_4, ")", 1)) {
      return 0;
     }
    }
    if (!FUNC_5(VAR_4, "(", 1)
     || !FUNC_5(VAR_4, ")", 1)) {
     return 0;
    }
    VAR_5 = FUNC_1(VAR_5->func.ret_type);
    break;
   case 146:
    if (VAR_7) {
     VAR_7 = 0;
     if (!FUNC_6(VAR_4, "(", 1)
      || !FUNC_5(VAR_4, ")", 1)) {
      return 0;
     }
    }
    if (!FUNC_5(VAR_4, "[", 1)) {
     return 0;
    }
    if (VAR_5->attr & VAR_3) {
     if (!FUNC_5(VAR_4, "*", 1)) {
      return 0;
     }
    } else if (!(VAR_5->attr & VAR_1)) {
     char VAR_8[VAR_0 + 1];
     char *VAR_9 = FUNC_7(VAR_8 + sizeof(VAR_8) - 1, VAR_5->array.length);

     if (!FUNC_5(VAR_4, VAR_9, FUNC_4(VAR_9))) {
      return 0;
     }
    }
    if (!FUNC_5(VAR_4, "]", 1)) {
     return 0;
    }
    VAR_5 = FUNC_1(VAR_5->array.type);
    break;
   case 133:
    if (VAR_5->attr & VAR_2) {
     if (VAR_5->record.tag_name) {
      FUNC_6(VAR_4, FUNC_3(VAR_5->record.tag_name), FUNC_2(VAR_5->record.tag_name));
     } else {
      FUNC_6(VAR_4, "<anonymous>", sizeof("<anonymous>")-1);
     }
     VAR_6 = "union ";
    } else {
     if (VAR_5->record.tag_name) {
      FUNC_6(VAR_4, FUNC_3(VAR_5->record.tag_name), FUNC_2(VAR_5->record.tag_name));
     } else {
      FUNC_6(VAR_4, "<anonymous>", sizeof("<anonymous>")-1);
     }
     VAR_6 = "struct ";
    }
    break;
   default:
    FUNC_0(0);
  }
  if (VAR_6) {
   break;
  }
 }






 return FUNC_6(VAR_4, VAR_6, FUNC_4(VAR_6));
}
