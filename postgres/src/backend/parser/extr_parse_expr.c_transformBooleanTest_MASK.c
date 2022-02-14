
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int booltesttype; int * arg; int location; } ;
typedef int ParseState ;
typedef int Node ;
typedef int Expr ;
typedef TYPE_1__ BooleanTest ;


 int VAR_0 ;






 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,char const*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int ,char*,int *,int *,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static Node *
FUNC_4(ParseState *VAR_3, BooleanTest *VAR_4)
{
 const char *VAR_5;

 if (VAR_2)
  FUNC_2(VAR_3, VAR_1, "IS",
         (Node *) VAR_4->arg, ((void*)0),
         VAR_4->location);

 switch (VAR_4->booltesttype)
 {
  case 129:
   VAR_5 = "IS TRUE";
   break;
  case 131:
   VAR_5 = "IS NOT TRUE";
   break;
  case 133:
   VAR_5 = "IS FALSE";
   break;
  case 132:
   VAR_5 = "IS NOT FALSE";
   break;
  case 128:
   VAR_5 = "IS UNKNOWN";
   break;
  case 130:
   VAR_5 = "IS NOT UNKNOWN";
   break;
  default:
   FUNC_1(VAR_0, "unrecognized booltesttype: %d",
     (int) VAR_4->booltesttype);
   VAR_5 = ((void*)0);
 }

 VAR_4->arg = (Expr *) FUNC_3(VAR_3, (Node *) VAR_4->arg);

 VAR_4->arg = (Expr *) FUNC_0(VAR_3,
          (Node *) VAR_4->arg,
          VAR_5);

 return (Node *) VAR_4;
}
