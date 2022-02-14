
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int* need_recheck; } ;
struct TYPE_7__ {int oper; int left; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__ qoperator; } ;
typedef int QueryOperand ;
typedef TYPE_2__ QueryItem ;
typedef int GinTernaryValue ;
typedef TYPE_3__ GinChkVal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int *,int *) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static GinTernaryValue
FUNC_3(GinChkVal *VAR_5, QueryItem *VAR_6, bool VAR_7)
{
 GinTernaryValue VAR_8,
    VAR_9,
    VAR_10;


 FUNC_0();

 if (VAR_6->type == VAR_4)
  return
   FUNC_1(VAR_5,
          (QueryOperand *) VAR_6,
          ((void*)0) );

 switch (VAR_6->qoperator.oper)
 {
  case 130:

   if (VAR_7)
    return VAR_2;
   VAR_10 = FUNC_3(VAR_5, VAR_6 + 1, VAR_7);
   if (VAR_10 == VAR_2)
    return VAR_10;
   return !VAR_10;

  case 128:





   *(VAR_5->need_recheck) = 1;

   VAR_7 = 1;



  case 131:
   VAR_8 = FUNC_3(VAR_5, VAR_6 + VAR_6->qoperator.left,
           VAR_7);
   if (VAR_8 == VAR_1)
    return VAR_1;
   VAR_9 = FUNC_3(VAR_5, VAR_6 + 1, VAR_7);
   if (VAR_9 == VAR_1)
    return VAR_1;
   if (VAR_8 == VAR_3 && VAR_9 == VAR_3)
    return VAR_3;
   else
    return VAR_2;

  case 129:
   VAR_8 = FUNC_3(VAR_5, VAR_6 + VAR_6->qoperator.left,
           VAR_7);
   if (VAR_8 == VAR_3)
    return VAR_3;
   VAR_9 = FUNC_3(VAR_5, VAR_6 + 1, VAR_7);
   if (VAR_9 == VAR_3)
    return VAR_3;
   if (VAR_8 == VAR_1 && VAR_9 == VAR_1)
    return VAR_1;
   else
    return VAR_2;

  default:
   FUNC_2(VAR_0, "unrecognized operator: %d", VAR_6->qoperator.oper);
 }


 return 0;
}
