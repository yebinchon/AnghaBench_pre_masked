
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int Var ;
struct TYPE_5__ {int rtekind; int functions; int funcordinality; int relid; } ;
struct TYPE_4__ {int * funcexpr; } ;
typedef TYPE_1__ RangeTblFunction ;
typedef TYPE_2__ RangeTblEntry ;
typedef int Oid ;
typedef int Node ;
typedef int Index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;


 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ,int,int ,int,int ,int ) ;
 int FUNC_8 (int ) ;

Var *
FUNC_9(RangeTblEntry *VAR_4,
    Index VAR_5,
    Index VAR_6,
    bool VAR_7)
{
 Var *VAR_8;
 Oid VAR_9;
 Node *VAR_10;

 switch (VAR_4->rtekind)
 {
  case 128:

   VAR_9 = FUNC_4(VAR_4->relid);
   if (!FUNC_0(VAR_9))
    FUNC_1(VAR_0, "could not find type OID for relation %u",
      VAR_4->relid);
   VAR_8 = FUNC_7(VAR_5,
        VAR_1,
        VAR_9,
        -1,
        VAR_2,
        VAR_6);
   break;

  case 129:






   if (VAR_4->funcordinality || FUNC_6(VAR_4->functions) != 1)
   {

    VAR_8 = FUNC_7(VAR_5,
         VAR_1,
         VAR_3,
         -1,
         VAR_2,
         VAR_6);
    break;
   }

   VAR_10 = ((RangeTblFunction *) FUNC_5(VAR_4->functions))->funcexpr;
   VAR_9 = FUNC_3(VAR_10);
   if (FUNC_8(VAR_9))
   {

    VAR_8 = FUNC_7(VAR_5,
         VAR_1,
         VAR_9,
         -1,
         VAR_2,
         VAR_6);
   }
   else if (VAR_7)
   {

    VAR_8 = FUNC_7(VAR_5,
         1,
         VAR_9,
         -1,
         FUNC_2(VAR_10),
         VAR_6);
   }
   else
   {

    VAR_8 = FUNC_7(VAR_5,
         VAR_1,
         VAR_3,
         -1,
         VAR_2,
         VAR_6);
   }
   break;

  default:







   VAR_8 = FUNC_7(VAR_5,
        VAR_1,
        VAR_3,
        -1,
        VAR_2,
        VAR_6);
   break;
 }

 return VAR_8;
}
