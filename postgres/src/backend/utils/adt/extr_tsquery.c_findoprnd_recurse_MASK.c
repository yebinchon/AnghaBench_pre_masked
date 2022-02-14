
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {scalar_t__ oper; int left; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ qoperator; } ;
typedef TYPE_1__ QueryOperator ;
typedef TYPE_2__ QueryItem ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(QueryItem *VAR_8, uint32 *VAR_9, int VAR_10, bool *VAR_11)
{

 FUNC_1();

 if (*VAR_9 >= VAR_10)
  FUNC_2(VAR_0, "malformed tsquery: operand not found");

 if (VAR_8[*VAR_9].type == VAR_6)
 {
  (*VAR_9)++;
 }
 else if (VAR_8[*VAR_9].type == VAR_7)
 {
  *VAR_11 = 1;
  (*VAR_9)++;
 }
 else
 {
  FUNC_0(VAR_8[*VAR_9].type == VAR_5);

  if (VAR_8[*VAR_9].qoperator.oper == VAR_2)
  {
   VAR_8[*VAR_9].qoperator.left = 1;
   (*VAR_9)++;


   FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11);
  }
  else
  {
   QueryOperator *VAR_12 = &VAR_8[*VAR_9].qoperator;
   int VAR_13 = *VAR_9;

   FUNC_0(VAR_12->oper == VAR_1 ||
       VAR_12->oper == VAR_3 ||
       VAR_12->oper == VAR_4);

   (*VAR_9)++;


   FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11);

   VAR_12->left = *VAR_9 - VAR_13;


   FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11);
  }
 }
}
