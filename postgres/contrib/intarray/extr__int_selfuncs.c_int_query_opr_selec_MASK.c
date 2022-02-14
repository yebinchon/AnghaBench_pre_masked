
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
typedef int float4 ;
struct TYPE_3__ {scalar_t__ type; int val; int left; } ;
typedef int Selectivity ;
typedef TYPE_1__ ITEM ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int*,int *,int,int,int ) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,scalar_t__) ;

__attribute__((used)) static Selectivity
FUNC_5(ITEM *VAR_5, Datum *VAR_6, float4 *VAR_7,
     int VAR_8, float4 VAR_9)
{
 Selectivity VAR_10;


 FUNC_3();

 if (VAR_5->type == VAR_3)
 {
  Datum *VAR_11;

  if (VAR_6 == ((void*)0))
   return (Selectivity) VAR_0;

  VAR_11 = (Datum *) FUNC_2(&VAR_5->val, VAR_6, VAR_8,
           sizeof(Datum), VAR_4);
  if (VAR_11)
  {




   VAR_10 = VAR_7[VAR_11 - VAR_6];
  }
  else
  {




   VAR_10 = FUNC_1(VAR_0, VAR_9 / 2);
  }
 }
 else if (VAR_5->type == VAR_2)
 {

  Selectivity VAR_12,
     VAR_13;

  VAR_12 = FUNC_5(VAR_5 - 1, VAR_6, VAR_7, VAR_8,
         VAR_9);
  switch (VAR_5->val)
  {
   case (int32) '!':
    VAR_10 = 1.0 - VAR_12;
    break;

   case (int32) '&':
    VAR_13 = FUNC_5(VAR_5 + VAR_5->left, VAR_6, VAR_7,
           VAR_8, VAR_9);
    VAR_10 = VAR_12 * VAR_13;
    break;

   case (int32) '|':
    VAR_13 = FUNC_5(VAR_5 + VAR_5->left, VAR_6, VAR_7,
           VAR_8, VAR_9);
    VAR_10 = VAR_12 + VAR_13 - VAR_12 * VAR_13;
    break;

   default:
    FUNC_4(VAR_1, "unrecognized operator: %d", VAR_5->val);
    VAR_10 = 0;
    break;
  }
 }
 else
 {
  FUNC_4(VAR_1, "unrecognized int query item type: %u", VAR_5->type);
  VAR_10 = 0;
 }


 FUNC_0(VAR_10);

 return VAR_10;
}
