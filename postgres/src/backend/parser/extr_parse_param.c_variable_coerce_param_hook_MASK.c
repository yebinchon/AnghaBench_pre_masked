
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_7__ {int* numParams; scalar_t__** paramTypes; } ;
typedef TYPE_1__ VarParamState ;
struct TYPE_9__ {scalar_t__ paramkind; scalar_t__ paramtype; int paramid; int location; int paramtypmod; int paramcollid; } ;
struct TYPE_8__ {scalar_t__ p_ref_hook_state; } ;
typedef TYPE_2__ ParseState ;
typedef TYPE_3__ Param ;
typedef scalar_t__ Oid ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static Node *
FUNC_7(ParseState *VAR_5, Param *VAR_6,
         Oid VAR_7, int32 VAR_8,
         int VAR_9)
{
 if (VAR_6->paramkind == VAR_3 && VAR_6->paramtype == VAR_4)
 {




  VarParamState *VAR_10 = (VarParamState *) VAR_5->p_ref_hook_state;
  Oid *VAR_11 = *VAR_10->paramTypes;
  int VAR_12 = VAR_6->paramid;

  if (VAR_12 <= 0 ||
   VAR_12 > *VAR_10->numParams)
   FUNC_0(VAR_2,
     (FUNC_1(VAR_1),
      FUNC_3("there is no parameter $%d", VAR_12),
      FUNC_6(VAR_5, VAR_6->location)));

  if (VAR_11[VAR_12 - 1] == VAR_4)
  {

   VAR_11[VAR_12 - 1] = VAR_7;
  }
  else if (VAR_11[VAR_12 - 1] == VAR_7)
  {

  }
  else
  {

   FUNC_0(VAR_2,
     (FUNC_1(VAR_0),
      FUNC_3("inconsistent types deduced for parameter $%d",
       VAR_12),
      FUNC_2("%s versus %s",
          FUNC_4(VAR_11[VAR_12 - 1]),
          FUNC_4(VAR_7)),
      FUNC_6(VAR_5, VAR_6->location)));
  }

  VAR_6->paramtype = VAR_7;
  VAR_6->paramtypmod = -1;






  VAR_6->paramcollid = FUNC_5(VAR_6->paramtype);


  if (VAR_9 >= 0 &&
   (VAR_6->location < 0 || VAR_9 < VAR_6->location))
   VAR_6->location = VAR_9;

  return (Node *) VAR_6;
 }


 return ((void*)0);
}
