
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ aarch64_opnd_qualifier_t ;
typedef scalar_t__* aarch64_opnd_qualifier_seq_t ;
struct TYPE_5__ {TYPE_2__* operands; int opcode; } ;
typedef TYPE_1__ aarch64_inst ;
struct TYPE_6__ {scalar_t__ qualifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_2__*,scalar_t__ const*) ;
 int FUNC_4 (scalar_t__ const*) ;
 scalar_t__ FUNC_5 (scalar_t__ const*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,scalar_t__ const) ;

int
FUNC_7 (const aarch64_inst *VAR_5,
    const aarch64_opnd_qualifier_seq_t *VAR_6,
    int VAR_7, aarch64_opnd_qualifier_t *VAR_8)
{
  int VAR_9 = 0;
  int VAR_10, VAR_11;
  const aarch64_opnd_qualifier_t *VAR_12;

  VAR_11 = FUNC_2 (VAR_5->opcode);
  if (VAR_11 == 0)
    {
      FUNC_0 ("SUCCEED: no operand");
      return 1;
    }

  if (VAR_7 < 0 || VAR_7 >= VAR_11)
    VAR_7 = VAR_11 - 1;


  for (VAR_10 = 0; VAR_10 < VAR_1; ++VAR_10, ++VAR_6)
    {
      int VAR_13;
      VAR_12 = *VAR_6;


      VAR_9 = 1;

      FUNC_0 ("%d", VAR_10);







      if (FUNC_5 (VAR_12) == VAR_3)
 {
   FUNC_1 (VAR_10 == 0, "SUCCEED: empty qualifier list");
   if (VAR_10)
     VAR_9 = 0;
   break;
 }

      for (VAR_13 = 0; VAR_13 < VAR_11 && VAR_13 <= VAR_7; ++VAR_13, ++VAR_12)
 {
   if (VAR_5->operands[VAR_13].qualifier == VAR_2)
     {






       continue;
     }
   else if (*VAR_12 != VAR_5->operands[VAR_13].qualifier)
     {



       if (FUNC_6 (VAR_5->operands + VAR_13, *VAR_12))
  continue;
       else
  {
    VAR_9 = 0;
    break;
  }
     }
   else
     continue;
 }


      if (VAR_9 == 1)
 break;
    }

  if (VAR_9 == 1)
    {

      int VAR_14;
      VAR_12 = *VAR_6;

      FUNC_0 ("complete qualifiers using list %d", VAR_10);





      for (VAR_14 = 0; VAR_14 <= VAR_7; ++VAR_14, ++VAR_12)
 VAR_8[VAR_14] = *VAR_12;
      for (; VAR_14 < VAR_0; ++VAR_14)
 VAR_8[VAR_14] = VAR_2;

      FUNC_0 ("SUCCESS");
      return 1;
    }

  FUNC_0 ("FAIL");
  return 0;
}
