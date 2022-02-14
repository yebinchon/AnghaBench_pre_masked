
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int channels; int sample_rate; } ;
typedef TYPE_1__ stb_vorbis ;


 int FUNC_0 (short*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (short*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,short*,int) ;
 TYPE_1__* FUNC_5 (char const*,int*,int *) ;

int FUNC_6(const char *VAR_0, int *VAR_1, int *VAR_2, short **VAR_3)
{
   int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
   short *VAR_9;
   stb_vorbis *VAR_10 = FUNC_5(VAR_0, &VAR_8, ((void*)0));
   if (VAR_10 == ((void*)0)) return -1;
   VAR_7 = VAR_10->channels * 4096;
   *VAR_1 = VAR_10->channels;
   if (VAR_2)
      *VAR_2 = VAR_10->sample_rate;
   VAR_5 = VAR_4 = 0;
   VAR_6 = VAR_7;
   VAR_9 = (short *) FUNC_1(VAR_6 * sizeof(*VAR_9));
   if (VAR_9 == ((void*)0)) {
      FUNC_3(VAR_10);
      return -2;
   }
   for (;;) {
      int VAR_11 = FUNC_4(VAR_10, VAR_10->channels, VAR_9+VAR_5, VAR_6-VAR_5);
      if (VAR_11 == 0) break;
      VAR_4 += VAR_11;
      VAR_5 += VAR_11 * VAR_10->channels;
      if (VAR_5 + VAR_7 > VAR_6) {
         short *VAR_12;
         VAR_6 *= 2;
         VAR_12 = (short *) FUNC_2(VAR_9, VAR_6 * sizeof(*VAR_9));
         if (VAR_12 == ((void*)0)) {
            FUNC_0(VAR_9);
            FUNC_3(VAR_10);
            return -2;
         }
         VAR_9 = VAR_12;
      }
   }
   *VAR_3 = VAR_9;
   FUNC_3(VAR_10);
   return VAR_4;
}
