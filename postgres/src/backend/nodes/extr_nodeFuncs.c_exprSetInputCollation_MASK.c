
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {void* inputcollid; } ;
typedef TYPE_1__ WindowFunc ;
struct TYPE_16__ {void* inputcollid; } ;
struct TYPE_15__ {void* inputcollid; } ;
struct TYPE_14__ {void* inputcollid; } ;
struct TYPE_13__ {void* inputcollid; } ;
struct TYPE_12__ {void* inputcollid; } ;
struct TYPE_11__ {void* inputcollid; } ;
struct TYPE_10__ {void* inputcollid; } ;
typedef TYPE_2__ ScalarArrayOpExpr ;
typedef TYPE_3__ OpExpr ;
typedef void* Oid ;
typedef TYPE_4__ NullIfExpr ;
typedef int Node ;
typedef TYPE_5__ MinMaxExpr ;
typedef TYPE_6__ FuncExpr ;
typedef TYPE_7__ DistinctExpr ;
typedef TYPE_8__ Aggref ;
 int FUNC_0 (int *) ;

void
FUNC_1(Node *VAR_0, Oid VAR_1)
{
 switch (FUNC_0(VAR_0))
 {
  case 135:
   ((Aggref *) VAR_0)->inputcollid = VAR_1;
   break;
  case 128:
   ((WindowFunc *) VAR_0)->inputcollid = VAR_1;
   break;
  case 133:
   ((FuncExpr *) VAR_0)->inputcollid = VAR_1;
   break;
  case 130:
   ((OpExpr *) VAR_0)->inputcollid = VAR_1;
   break;
  case 134:
   ((DistinctExpr *) VAR_0)->inputcollid = VAR_1;
   break;
  case 131:
   ((NullIfExpr *) VAR_0)->inputcollid = VAR_1;
   break;
  case 129:
   ((ScalarArrayOpExpr *) VAR_0)->inputcollid = VAR_1;
   break;
  case 132:
   ((MinMaxExpr *) VAR_0)->inputcollid = VAR_1;
   break;
  default:
   break;
 }
}
