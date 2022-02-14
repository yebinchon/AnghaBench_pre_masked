
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


struct TYPE_9__ {int inputcollid; } ;
typedef TYPE_1__ WindowFunc ;
struct TYPE_16__ {int inputcollid; } ;
struct TYPE_15__ {int inputcollid; } ;
struct TYPE_14__ {int inputcollid; } ;
struct TYPE_13__ {int inputcollid; } ;
struct TYPE_12__ {int inputcollid; } ;
struct TYPE_11__ {int inputcollid; } ;
struct TYPE_10__ {int inputcollid; } ;
typedef TYPE_2__ ScalarArrayOpExpr ;
typedef TYPE_3__ OpExpr ;
typedef int Oid ;
typedef TYPE_4__ NullIfExpr ;
typedef int Node ;
typedef TYPE_5__ MinMaxExpr ;
typedef TYPE_6__ FuncExpr ;
typedef TYPE_7__ DistinctExpr ;
typedef TYPE_8__ Aggref ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;

Oid
FUNC_1(const Node *VAR_1)
{
 Oid VAR_2;

 if (!VAR_1)
  return VAR_0;

 switch (FUNC_0(VAR_1))
 {
  case 135:
   VAR_2 = ((const Aggref *) VAR_1)->inputcollid;
   break;
  case 128:
   VAR_2 = ((const WindowFunc *) VAR_1)->inputcollid;
   break;
  case 133:
   VAR_2 = ((const FuncExpr *) VAR_1)->inputcollid;
   break;
  case 130:
   VAR_2 = ((const OpExpr *) VAR_1)->inputcollid;
   break;
  case 134:
   VAR_2 = ((const DistinctExpr *) VAR_1)->inputcollid;
   break;
  case 131:
   VAR_2 = ((const NullIfExpr *) VAR_1)->inputcollid;
   break;
  case 129:
   VAR_2 = ((const ScalarArrayOpExpr *) VAR_1)->inputcollid;
   break;
  case 132:
   VAR_2 = ((const MinMaxExpr *) VAR_1)->inputcollid;
   break;
  default:
   VAR_2 = VAR_0;
   break;
 }
 return VAR_2;
}
