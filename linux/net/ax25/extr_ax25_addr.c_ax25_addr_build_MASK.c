
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ndigi; scalar_t__* repeated; int const* calls; } ;
typedef TYPE_1__ ax25_digi ;
typedef int ax25_address ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_0 (unsigned char*,int const*,int) ;

int FUNC_1(unsigned char *VAR_9, const ax25_address *VAR_10,
 const ax25_address *VAR_11, const ax25_digi *VAR_12, int VAR_13, int VAR_14)
{
 int VAR_15 = 0;
 int VAR_16 = 0;

 FUNC_0(VAR_9, VAR_11, VAR_0);
 VAR_9[6] &= ~(VAR_3 | VAR_1);
 VAR_9[6] |= VAR_8;

 if (VAR_13 == VAR_2) VAR_9[6] |= VAR_1;

 VAR_9 += VAR_0;
 VAR_15 += VAR_0;

 FUNC_0(VAR_9, VAR_10, VAR_0);
 VAR_9[6] &= ~(VAR_3 | VAR_1);
 VAR_9[6] &= ~VAR_8;

 if (VAR_14 == VAR_6)
  VAR_9[6] |= VAR_8;
 else
  VAR_9[6] |= VAR_4;

 if (VAR_13 == VAR_7) VAR_9[6] |= VAR_1;




 if (VAR_12 == ((void*)0) || VAR_12->ndigi == 0) {
  VAR_9[6] |= VAR_3;
  return 2 * VAR_0;
 }

 VAR_9 += VAR_0;
 VAR_15 += VAR_0;

 while (VAR_16 < VAR_12->ndigi) {
  FUNC_0(VAR_9, &VAR_12->calls[VAR_16], VAR_0);

  if (VAR_12->repeated[VAR_16])
   VAR_9[6] |= VAR_5;
  else
   VAR_9[6] &= ~VAR_5;

  VAR_9[6] &= ~VAR_3;
  VAR_9[6] |= VAR_8;

  VAR_9 += VAR_0;
  VAR_15 += VAR_0;
  VAR_16++;
 }

 VAR_9[-1] |= VAR_3;

 return VAR_15;
}
