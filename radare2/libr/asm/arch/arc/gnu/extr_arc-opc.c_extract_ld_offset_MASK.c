
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arc_operand_value {int dummy; } ;
struct arc_operand {int flags; } ;
typedef int arc_insn ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t* VAR_3 ;
 int * VAR_4 ;
 long FUNC_1 (int*,int *,int,struct arc_operand_value const**,int*) ;
 int * VAR_5 ;

__attribute__((used)) static long
FUNC_2 (arc_insn *VAR_6,
     const struct arc_operand *VAR_7,
     int VAR_8,
     const struct arc_operand_value **VAR_9,
     int *VAR_10)
{
  int VAR_11 = VAR_6[0] & FUNC_0(-1);
  int VAR_12 = 0;

  if (VAR_11)
    {
      VAR_12 = VAR_6[0] & 511;
      if ((VAR_7->flags & VAR_0) && (VAR_12 & 256)) {
       VAR_12 -= 512;
      }
      if (VAR_12) {
       VAR_5[VAR_1] = VAR_2;
      }

      return VAR_12;
    }

  return FUNC_1 (VAR_6, &VAR_4[VAR_3['c']],
        VAR_8, VAR_9, VAR_10);
}
