
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ is_big_endian; } ;
typedef TYPE_1__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
typedef int* xtensa_insnbuf ;
typedef int xtensa_format ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__,int* const) ;
 int FUNC_4 (scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_6 (xtensa_isa VAR_4,
    const xtensa_insnbuf VAR_5,
    unsigned char *VAR_6,
    int VAR_7)
{
  xtensa_isa_internal *VAR_8 = (xtensa_isa_internal *) VAR_4;
  int VAR_9 = FUNC_5 (VAR_4);
  int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
  xtensa_format VAR_15;

  if (VAR_7 == 0) {
   VAR_7 = VAR_9;
  }

  if (VAR_8->is_big_endian)
    {
      VAR_11 = VAR_9 - 1;
      VAR_12 = -1;
    }
  else
    {
      VAR_11 = 0;
      VAR_12 = 1;
    }



  VAR_15 = FUNC_3 (VAR_4, VAR_5);
  if (VAR_15 == VAR_0) {
   return VAR_0;
  }

  VAR_14 = FUNC_4 (VAR_4, VAR_15);
  if (VAR_14 == VAR_0) {
   return VAR_0;
  }

  if (VAR_14 > VAR_7)
    {
      VAR_2 = VAR_1;
      FUNC_2 (VAR_3, "output buffer too small for instruction");
      return VAR_0;
    }

  VAR_10 = VAR_11 + (VAR_14 * VAR_12);

  for (VAR_13 = VAR_11; VAR_13 != VAR_10; VAR_13 += VAR_12, ++VAR_6)
    {
      int VAR_16 = FUNC_1 (VAR_13);
      int VAR_17 = FUNC_0 (VAR_13);

      *VAR_6 = (VAR_5[VAR_16] >> VAR_17) & 0xff;
    }

  return VAR_14;
}
