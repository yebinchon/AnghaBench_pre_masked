
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_18__ {scalar_t__ name; } ;
struct TYPE_25__ {TYPE_2__ name; } ;
struct TYPE_19__ {scalar_t__ name; } ;
struct TYPE_24__ {TYPE_3__ name; } ;
struct TYPE_17__ {scalar_t__ name; } ;
struct TYPE_23__ {TYPE_1__ name; } ;
struct TYPE_20__ {scalar_t__ name; } ;
struct TYPE_22__ {TYPE_4__ name; } ;
struct TYPE_21__ {scalar_t__ name; } ;
struct TYPE_16__ {scalar_t__ name; } ;
struct TYPE_15__ {int value_or_type; scalar_t__ name_or_val; } ;
struct TYPE_14__ {TYPE_5__ name; } ;
typedef TYPE_6__ SVal_LF_USHORT ;
typedef TYPE_7__ SVal_LF_ULONG ;
typedef TYPE_8__ SVal_LF_SHORT ;
typedef TYPE_9__ SVal_LF_LONG ;
typedef TYPE_10__ SVal_LF_CHAR ;
typedef TYPE_11__ SVal ;
typedef TYPE_12__ SCString ;


 int FUNC_0 (scalar_t__) ;





 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(SVal *VAR_0) {
 if (VAR_0->value_or_type < 132) {
  SCString *VAR_1;
  VAR_1 = (SCString *) VAR_0->name_or_val;
  FUNC_0(VAR_1->name);
  FUNC_0(VAR_0->name_or_val);
 } else {
  switch (VAR_0->value_or_type) {
  case 129:
  {
   SVal_LF_ULONG *VAR_2;
   VAR_2 = (SVal_LF_ULONG *) VAR_0->name_or_val;
   FUNC_0(VAR_2->name.name);
   FUNC_0(VAR_0->name_or_val);
   break;
  }
  case 131:
  {
   SVal_LF_LONG *VAR_3;
   VAR_3 = (SVal_LF_LONG *) VAR_0->name_or_val;
   FUNC_0(VAR_3->name.name);
   FUNC_0(VAR_0->name_or_val);
   break;
  }
  case 130:
  {
   SVal_LF_SHORT *VAR_4;
   VAR_4 = (SVal_LF_SHORT *) VAR_0->name_or_val;
   FUNC_0(VAR_4->name.name);
   FUNC_0(VAR_0->name_or_val);
   break;
  }
  case 128:
  {
   SVal_LF_USHORT *VAR_5;
   VAR_5 = (SVal_LF_USHORT *) VAR_0->name_or_val;
   FUNC_0(VAR_5->name.name);
   FUNC_0(VAR_0->name_or_val);
   break;
  }
  case 132:
  {
   SVal_LF_CHAR *VAR_6;
   VAR_6 = (SVal_LF_CHAR *) VAR_0->name_or_val;
   FUNC_0(VAR_6->name.name);
   FUNC_0(VAR_0->name_or_val);
   break;
  }
  default:
   FUNC_1("free_sval()::not supproted type\n");
   break;
  }
 }
}
