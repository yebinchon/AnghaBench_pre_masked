
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int n; scalar_t__ alpha; int * out; } ;
struct TYPE_4__ {int num_additive; TYPE_1__ super; } ;
typedef TYPE_2__ psd_band_writer ;
typedef int fz_output ;
typedef int fz_context ;
typedef int fz_band_writer ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int,int ) ;
 int FUNC_1 (int *,int *,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, fz_band_writer *VAR_2, int VAR_3, int VAR_4, int VAR_5, const unsigned char *VAR_6)
{
 psd_band_writer *VAR_7 = (psd_band_writer *)(void *)VAR_2;
 fz_output *VAR_8 = VAR_7->super.out;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;
 unsigned char VAR_16[256];
 unsigned char *VAR_17 = &VAR_16[sizeof(VAR_16)];
 unsigned char *VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21 = VAR_7->num_additive;

 if (!VAR_8)
  return;

 VAR_13 = VAR_7->super.w;
 VAR_14 = VAR_7->super.h;
 VAR_15 = VAR_7->super.n;

 VAR_12 = (VAR_4+VAR_5 >= VAR_14);
 if (VAR_12)
  VAR_5 = VAR_14 - VAR_4;

 VAR_19 = VAR_13 * (VAR_14 - VAR_5);
 VAR_20 = VAR_3 - VAR_13*VAR_15;
 VAR_18 = VAR_16;
 if (VAR_7->super.alpha)
 {
  const unsigned char *VAR_22 = &VAR_6[VAR_15-1];
  for (VAR_11 = 0; VAR_11 < VAR_15-1; VAR_11++)
  {
   for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
   {
    for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++)
    {
     int VAR_23 = *VAR_22;
     VAR_22 += VAR_15;
     *VAR_18++ = VAR_23 != 0 ? (*VAR_6 * 255 + 128)/VAR_23 : 0;
     VAR_6 += VAR_15;
     if (VAR_18 == VAR_17)
     {
      if (VAR_11 >= VAR_21)
       FUNC_2(VAR_16, sizeof(VAR_16));
      FUNC_1(VAR_1, VAR_8, VAR_16, sizeof(VAR_16));
      VAR_18 = VAR_16;
     }
    }
    VAR_6 += VAR_20;
    VAR_22 += VAR_20;
   }
   VAR_6 -= VAR_3 * VAR_5 - 1;
   VAR_22 -= VAR_3 * VAR_5;
   if (VAR_18 != VAR_16)
   {
    if (VAR_11 >= VAR_21)
     FUNC_2(VAR_16, sizeof(VAR_16));
    FUNC_1(VAR_1, VAR_8, VAR_16, VAR_18 - VAR_16);
    VAR_18 = VAR_16;
   }
   FUNC_0(VAR_1, VAR_8, VAR_19, VAR_0);
  }
  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  {
   for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++)
   {
    *VAR_18++ = *VAR_6;
    VAR_6 += VAR_15;
    if (VAR_18 == VAR_17)
    {
     FUNC_1(VAR_1, VAR_8, VAR_16, sizeof(VAR_16));
     VAR_18 = VAR_16;
    }
   }
   VAR_6 += VAR_20;
  }
  if (VAR_18 != VAR_16)
  {
   FUNC_1(VAR_1, VAR_8, VAR_16, VAR_18 - VAR_16);
   VAR_18 = VAR_16;
  }
  FUNC_0(VAR_1, VAR_8, VAR_19, VAR_0);
 }
 else
 {
  for (VAR_11 = 0; VAR_11 < VAR_15; VAR_11++)
  {
   for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
   {
    for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++)
    {
     *VAR_18++ = *VAR_6;
     VAR_6 += VAR_15;
     if (VAR_18 == VAR_17)
     {
      if (VAR_11 >= VAR_21)
       FUNC_2(VAR_16, sizeof(VAR_16));
      FUNC_1(VAR_1, VAR_8, VAR_16, sizeof(VAR_16));
      VAR_18 = VAR_16;
     }
    }
    VAR_6 += VAR_20;
   }
   VAR_6 -= VAR_3 * VAR_5 - 1;
   if (VAR_18 != VAR_16)
   {
    if (VAR_11 >= VAR_21)
     FUNC_2(VAR_16, sizeof(VAR_16));
    FUNC_1(VAR_1, VAR_8, VAR_16, VAR_18 - VAR_16);
    VAR_18 = VAR_16;
   }
   FUNC_0(VAR_1, VAR_8, VAR_19, VAR_0);
  }
 }
 FUNC_0(VAR_1, VAR_8, VAR_13 * (VAR_5 - VAR_14 * VAR_15), VAR_0);
}
