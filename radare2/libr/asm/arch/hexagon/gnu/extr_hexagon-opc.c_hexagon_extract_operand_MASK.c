
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char enc_letter; unsigned int bits; int flags; int shift_count; } ;
typedef TYPE_1__ hexagon_operand ;
typedef int hexagon_insn ;
typedef scalar_t__ bfd_vma ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char) ;
 int VAR_5 ;
 int FUNC_3 (char*,char*,char,char*,unsigned int,unsigned int) ;

int
FUNC_4
(const hexagon_operand *VAR_6, hexagon_insn VAR_7,
 bfd_vma VAR_8, char *VAR_9, int *VAR_10,
 char **VAR_11)
{
  int VAR_12 = 0;
  char VAR_13 = VAR_6->enc_letter;
  char *VAR_14 = VAR_9;
  unsigned int VAR_15;
  hexagon_insn VAR_16;

  if (FUNC_0(VAR_7))
    VAR_16 = 1 << 15;
  else
    VAR_16 = 1 << 31;


  VAR_15 = 0;
  while (*VAR_14)
    {
      char VAR_17 = *VAR_14++;

      if (!FUNC_2(VAR_17))
        {
          if (VAR_17 == VAR_13)
            {
              VAR_12 = (VAR_12 << 1) + ((VAR_7 & VAR_16)? 1: 0);
              VAR_15++;
            }
          VAR_16 >>= 1;
        }
    }


  if (VAR_15 != VAR_6->bits)
    {
      if (VAR_11)
        {
          static char VAR_18[100];

          FUNC_3 (VAR_18, "operand %c wrong number of bits found in %s, %d != %d",
                   VAR_6->enc_letter, VAR_9, VAR_15, VAR_6->bits);
          *VAR_11 = VAR_18;
        }
      return VAR_0;
    }

  if (VAR_6->flags & VAR_2)
    {
      if (VAR_15 > 31) {

        return VAR_0;
      }

      if (VAR_12 & (1 << (VAR_15 - 1)))
        {
          VAR_12 <<= 32 - VAR_15;
          VAR_12 >>= 32 - VAR_15;
        }
    }

  VAR_12 <<= VAR_6->shift_count;

  if (VAR_6->flags & VAR_4)
    VAR_12 += VAR_8;

  if (VAR_6->flags & VAR_3)
    VAR_12 = FUNC_1 (VAR_12, VAR_6->flags & VAR_1);

  *VAR_10 = VAR_12;
  return VAR_5;
}
