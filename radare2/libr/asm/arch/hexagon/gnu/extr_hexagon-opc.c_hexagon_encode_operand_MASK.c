
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ptrdiff_t ;
struct TYPE_5__ {int flags; char enc_letter; int shift_count; unsigned int bits; char* fmt; } ;
typedef TYPE_1__ hexagon_operand ;
struct TYPE_6__ {char* enc; int attributes; } ;
typedef TYPE_2__ hexagon_opcode ;
typedef int hexagon_insn ;




 int VAR_0 ;
 long FUNC_0 (unsigned long) ;
 long FUNC_1 (unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long FUNC_2 (long,int) ;
 int FUNC_3 (char) ;
 char FUNC_4 (char) ;
 char FUNC_5 (char) ;
 int VAR_7 ;
 long FUNC_6 (long*,unsigned int,int) ;
 int FUNC_7 (char*,char*,int,int,...) ;
 size_t FUNC_8 (char*) ;

int
FUNC_9
(const hexagon_operand *VAR_8, hexagon_insn *VAR_9,
 const hexagon_opcode *VAR_10, long VAR_11, long *VAR_12, int VAR_13, int VAR_14,
 char **VAR_15)
{
  char VAR_16;
  int VAR_17 = 0;
  int VAR_18 = 0;
  size_t VAR_19 = FUNC_8 (VAR_10->enc);
  unsigned VAR_20;
  long VAR_21, VAR_22;
  unsigned long VAR_23, VAR_24;
  long VAR_25, VAR_26;
  union
    {
      long s;
      unsigned long u;
    } VAR_27;
  int VAR_28;
  ptrdiff_t VAR_29;
  static char VAR_30 [500];

  VAR_27.s = VAR_11;

  VAR_13 = VAR_13 && VAR_12;
  VAR_28 = (VAR_8->flags & VAR_5);

  VAR_16 = VAR_8->enc_letter;


  if (VAR_0 && VAR_14)
    switch (VAR_10->attributes
            & (129 | 128))
      {
      case 129:
        VAR_16 = FUNC_4 (VAR_16);
        break;

      case 128:
        VAR_16 = FUNC_5 (VAR_16);
        break;
      }

  if (VAR_8->shift_count)
    {

      if (VAR_27.s & (~(~0L << VAR_8->shift_count)))
        {
          if (VAR_15)
            {
              FUNC_7 (VAR_30, "low %d bits of immediate %ld must be zero",
                       VAR_8->shift_count, VAR_27.s);
              *VAR_15 = VAR_30;
            }
          return VAR_0;
        }
    }

  if (VAR_8->flags & VAR_2)
    VAR_27.s = FUNC_1 (VAR_27.u);
  else if (VAR_8->flags & VAR_1)
    VAR_27.s = FUNC_0 (VAR_27.u);
  else if (VAR_8->flags & VAR_6)
    VAR_27.s = FUNC_2 (VAR_27.s, VAR_8->flags & VAR_4);



  VAR_20 = VAR_8->bits + VAR_8->shift_count;
  VAR_22 = ~(~0L << (VAR_20 - 1));
  VAR_21 = (~0L << (VAR_20 - 1)) + ((VAR_8->flags & VAR_3)? 1: 0);
  VAR_24 = ~(~0UL << VAR_20);
  VAR_23 = 0UL;

  VAR_26 = VAR_27.s;
  VAR_25 = FUNC_6 (&VAR_26, VAR_20, VAR_28);

  if (VAR_13)
    {
      VAR_28 = (VAR_26 < 0);

      *VAR_12 = VAR_25;
      VAR_27.s = VAR_26;
    }


  if (VAR_28)
    {
      if (VAR_27.s < VAR_21 || (VAR_22 > 0 && VAR_27.s > VAR_22))
 {
   if (VAR_15)
     {
       FUNC_7 (VAR_30, "value %ld out of range: %ld-%ld", VAR_27.s, VAR_21, VAR_22);
       *VAR_15 = VAR_30;
     }
   return VAR_0;
 }
    }
  else
    {
      if (VAR_27.u < VAR_23 || (VAR_24 > 0 && VAR_27.u > VAR_24))
 {
   if (VAR_15)
     {
       FUNC_7 (VAR_30, "value %lu out of range: %lu-%lu", VAR_27.u, VAR_23, VAR_24);
       *VAR_15 = VAR_30;
     }
   return VAR_0;
 }
    }


  if (!VAR_13)
    VAR_27.s >>= VAR_8->shift_count;


  for (VAR_29 = VAR_19 - 1; VAR_29 >= 0; VAR_29--)
    if (!FUNC_3 (VAR_10->enc [VAR_29]))
      {
        if (VAR_10->enc [VAR_29] == VAR_16)
          {

            (*VAR_9) &= ~(1 << VAR_17);

            (*VAR_9) |= (VAR_27.s & 1) << VAR_17;
            VAR_27.s >>= 1;
            VAR_18++;
          }
        VAR_17++;
      }


  if (VAR_18 != VAR_8->bits)
    {
      if (VAR_15)
        {
          FUNC_7 (VAR_30, "did not encode expected number of bits: %d != %d\n"
                   "enc = %s\n  operand = %s",
                   VAR_18, VAR_8->bits, VAR_10->enc, VAR_8->fmt);
          *VAR_15 = VAR_30;
        }
      return VAR_0;
    }

  return VAR_7;
}
