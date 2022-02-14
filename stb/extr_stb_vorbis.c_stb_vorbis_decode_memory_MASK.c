
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_5__ {int channels; int sample_rate; } ;
typedef TYPE_1__ stb_vorbis ;


 int FUNC_0 (short*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (short*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,short*,int) ;
 TYPE_1__* FUNC_5 (int const*,int,int*,int *) ;

int FUNC_6(const uint8 *VAR_0, int VAR_1, int *VAR_2, int *VAR_3, short **VAR_4)
{
   int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
   short *VAR_10;
   stb_vorbis *VAR_11 = FUNC_5(VAR_0, VAR_1, &VAR_9, ((void*)0));
   if (VAR_11 == ((void*)0)) return -1;
   VAR_8 = VAR_11->channels * 4096;
   *VAR_2 = VAR_11->channels;
   if (VAR_3)
      *VAR_3 = VAR_11->sample_rate;
   VAR_6 = VAR_5 = 0;
   VAR_7 = VAR_8;
   VAR_10 = (short *) FUNC_1(VAR_7 * sizeof(*VAR_10));
   if (VAR_10 == ((void*)0)) {
      FUNC_3(VAR_11);
      return -2;
   }
   for (;;) {
      int VAR_12 = FUNC_4(VAR_11, VAR_11->channels, VAR_10+VAR_6, VAR_7-VAR_6);
      if (VAR_12 == 0) break;
      VAR_5 += VAR_12;
      VAR_6 += VAR_12 * VAR_11->channels;
      if (VAR_6 + VAR_8 > VAR_7) {
         short *VAR_13;
         VAR_7 *= 2;
         VAR_13 = (short *) FUNC_2(VAR_10, VAR_7 * sizeof(*VAR_10));
         if (VAR_13 == ((void*)0)) {
            FUNC_0(VAR_10);
            FUNC_3(VAR_11);
            return -2;
         }
         VAR_10 = VAR_13;
      }
   }
   *VAR_4 = VAR_10;
   FUNC_3(VAR_11);
   return VAR_5;
}
