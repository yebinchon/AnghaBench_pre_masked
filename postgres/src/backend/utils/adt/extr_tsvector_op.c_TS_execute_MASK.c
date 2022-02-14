
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_5__ {int oper; int left; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ qoperator; } ;
typedef int (* TSExecuteCallback ) (void*,int *,int *) ;
typedef int QueryOperand ;
typedef TYPE_2__ QueryItem ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,void*,int,int (*) (void*,int *,int *),int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int) ;

bool
FUNC_3(QueryItem *VAR_3, void *VAR_4, uint32 VAR_5,
     TSExecuteCallback VAR_6)
{

 FUNC_1();

 if (VAR_3->type == VAR_1)
  return VAR_6(VAR_4, (QueryOperand *) VAR_3,
        ((void*)0) );

 switch (VAR_3->qoperator.oper)
 {
  case 130:
   if (VAR_5 & VAR_2)
    return !FUNC_3(VAR_3 + 1, VAR_4, VAR_5, VAR_6);
   else
    return 1;

  case 131:
   if (FUNC_3(VAR_3 + VAR_3->qoperator.left, VAR_4, VAR_5, VAR_6))
    return FUNC_3(VAR_3 + 1, VAR_4, VAR_5, VAR_6);
   else
    return 0;

  case 129:
   if (FUNC_3(VAR_3 + VAR_3->qoperator.left, VAR_4, VAR_5, VAR_6))
    return 1;
   else
    return FUNC_3(VAR_3 + 1, VAR_4, VAR_5, VAR_6);

  case 128:
   return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, ((void*)0));

  default:
   FUNC_2(VAR_0, "unrecognized operator: %d", VAR_3->qoperator.oper);
 }


 return 0;
}
