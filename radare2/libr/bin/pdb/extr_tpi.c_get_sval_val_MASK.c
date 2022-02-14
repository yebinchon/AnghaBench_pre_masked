
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {int value_or_type; scalar_t__ name_or_val; } ;
struct TYPE_16__ {int value; } ;
struct TYPE_15__ {int value; } ;
struct TYPE_14__ {int value; } ;
struct TYPE_13__ {int value; } ;
struct TYPE_12__ {int value; } ;
struct TYPE_11__ {int value; } ;
struct TYPE_10__ {int value; } ;
typedef TYPE_1__ SVal_LF_USHORT ;
typedef TYPE_2__ SVal_LF_UQUADWORD ;
typedef TYPE_3__ SVal_LF_ULONG ;
typedef TYPE_4__ SVal_LF_SHORT ;
typedef TYPE_5__ SVal_LF_QUADWORD ;
typedef TYPE_6__ SVal_LF_LONG ;
typedef TYPE_7__ SVal_LF_CHAR ;
typedef TYPE_8__ SVal ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(SVal *VAR_0, int *VAR_1) {
 if (VAR_0->value_or_type < 134) {
  *VAR_1 = VAR_0->value_or_type;
 } else {
  switch (VAR_0->value_or_type) {
  case 129:
  {
   SVal_LF_UQUADWORD *VAR_2;
   VAR_2 = (SVal_LF_UQUADWORD *) VAR_0->name_or_val;
   *VAR_1 = VAR_2->value;
   break;
  }
  case 132:
  {
   SVal_LF_QUADWORD *VAR_3;
   VAR_3 = (SVal_LF_QUADWORD *) VAR_0->name_or_val;
   *VAR_1 = VAR_3->value;
   break;
  }
  case 130:
  {
   SVal_LF_ULONG *VAR_4;
   VAR_4 = (SVal_LF_ULONG *) VAR_0->name_or_val;
   *VAR_1 = VAR_4->value;
   break;
  }
  case 133:
  {
   SVal_LF_LONG *VAR_5;
   VAR_5 = (SVal_LF_LONG *) VAR_0->name_or_val;
   *VAR_1 = VAR_5->value;
   break;
  }
  case 128:
  {
   SVal_LF_USHORT *VAR_6;
   VAR_6 = (SVal_LF_USHORT *) VAR_0->name_or_val;
   *VAR_1 = VAR_6->value;
   break;
  }
  case 131:
  {
   SVal_LF_SHORT *VAR_7;
   VAR_7 = (SVal_LF_SHORT *) VAR_0->name_or_val;
   *VAR_1 = VAR_7->value;
   break;
  }
  case 134:
  {
   SVal_LF_CHAR *VAR_8;
   VAR_8 = (SVal_LF_CHAR *) VAR_0->name_or_val;
   *VAR_1 = VAR_8->value;
   break;
  }

  default:
   *VAR_1 = 0;
   FUNC_0("get_sval_val: Skipping unsupported type (%d)\n", VAR_0->value_or_type);
   break;
  }
 }
}
