
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum data_pattern { ____Placeholder_data_pattern } data_pattern ;
typedef scalar_t__* aarch64_opnd_qualifier_seq_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static enum data_pattern
FUNC_3 (const aarch64_opnd_qualifier_seq_t VAR_7)
{
  if (FUNC_2 (VAR_7[0]) == VAR_6)
    {


      if (VAR_7[0] == VAR_7[1]
   && FUNC_2 (VAR_7[2]) == VAR_6
   && (FUNC_0 (VAR_7[0])
       == FUNC_0 (VAR_7[1]))
   && (FUNC_0 (VAR_7[0])
       == FUNC_0 (VAR_7[2])))
 return VAR_2;



      if (FUNC_2 (VAR_7[1]) == VAR_6
   && FUNC_0 (VAR_7[0]) != 0
   && (FUNC_0 (VAR_7[0])
       == FUNC_0 (VAR_7[1]) << 1))
 return VAR_4;

      if (VAR_7[0] == VAR_7[1]
   && FUNC_2 (VAR_7[2]) == VAR_6
   && FUNC_0 (VAR_7[0]) != 0
   && (FUNC_0 (VAR_7[0])
       == FUNC_0 (VAR_7[2]) << 1)
   && (FUNC_0 (VAR_7[0])
       == FUNC_0 (VAR_7[1])))
 return VAR_5;
    }
  else if (FUNC_1 (VAR_7[0]) == VAR_6)
    {

      if (FUNC_2 (VAR_7[1]) == VAR_6
   && VAR_7[2] == VAR_0)
 return VAR_3;
    }

  return VAR_1;
}
