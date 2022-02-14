
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int size; } ;
struct TYPE_12__ {int value_or_type; scalar_t__ name_or_val; } ;
struct TYPE_8__ {int size; } ;
struct TYPE_11__ {TYPE_1__ name; } ;
struct TYPE_9__ {int size; } ;
struct TYPE_10__ {TYPE_2__ name; } ;
typedef TYPE_3__ SVal_LF_USHORT ;
typedef TYPE_4__ SVal_LF_ULONG ;
typedef TYPE_5__ SVal ;
typedef TYPE_6__ SCString ;


 int VAR_0 ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(SVal *VAR_1, int *VAR_2) {
 if (VAR_1->value_or_type < VAR_0) {
  SCString *VAR_3 = (SCString *) VAR_1->name_or_val;
  *VAR_2 = VAR_3->size;
 } else {
  switch (VAR_1->value_or_type) {
  case 129:
  {
   SVal_LF_ULONG *VAR_4;
   VAR_4 = (SVal_LF_ULONG *) VAR_1->name_or_val;
   *VAR_2 = VAR_4->name.size;
   break;
  }
  case 128:
  {
   SVal_LF_USHORT *VAR_5;
   VAR_5 = (SVal_LF_USHORT *) VAR_1->name_or_val;
   *VAR_2 = VAR_5->name.size;
   break;
  }
  default:
   *VAR_2 = 0;
   FUNC_0("get_sval_name_len: Skipping unsupported type (%d)\n", VAR_1->value_or_type);
   break;
  }
 }
}
