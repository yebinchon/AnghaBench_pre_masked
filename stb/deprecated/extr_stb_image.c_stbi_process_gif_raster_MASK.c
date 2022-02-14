
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int prefix; int first; int suffix; } ;
typedef TYPE_1__ stbi_gif_lzw ;
struct TYPE_6__ {int* out; TYPE_1__* codes; } ;
typedef TYPE_2__ stbi_gif ;
typedef int stbi__uint8 ;
typedef int stbi__uint32 ;
typedef int stbi__uint16 ;
typedef int stbi__int32 ;
typedef int stbi__int16 ;
typedef int stbi ;


 int* FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static stbi__uint8 *FUNC_5(stbi *VAR_0, stbi_gif *VAR_1)
{
   stbi__uint8 VAR_2;
   stbi__int32 VAR_3, VAR_4;
   stbi__uint32 VAR_5;
   stbi__int32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
   stbi_gif_lzw *VAR_13;

   VAR_2 = FUNC_2(VAR_0);
   VAR_12 = 1 << VAR_2;
   VAR_5 = 1;
   VAR_6 = VAR_2 + 1;
   VAR_7 = (1 << VAR_6) - 1;
   VAR_10 = 0;
   VAR_11 = 0;
   for (VAR_4 = 0; VAR_4 < VAR_12; VAR_4++) {
      VAR_1->codes[VAR_4].prefix = -1;
      VAR_1->codes[VAR_4].first = (stbi__uint8) VAR_4;
      VAR_1->codes[VAR_4].suffix = (stbi__uint8) VAR_4;
   }


   VAR_8 = VAR_12+2;
   VAR_9 = -1;

   VAR_3 = 0;
   for(;;) {
      if (VAR_11 < VAR_6) {
         if (VAR_3 == 0) {
            VAR_3 = FUNC_1(VAR_0);
            if (VAR_3 == 0)
               return VAR_1->out;
         }
         --VAR_3;
         VAR_10 |= (stbi__int32) FUNC_1(VAR_0) << VAR_11;
         VAR_11 += 8;
      } else {
         stbi__int32 VAR_14 = VAR_10 & VAR_7;
         VAR_10 >>= VAR_6;
         VAR_11 -= VAR_6;

         if (VAR_14 == VAR_12) {
            VAR_6 = VAR_2 + 1;
            VAR_7 = (1 << VAR_6) - 1;
            VAR_8 = VAR_12 + 2;
            VAR_9 = -1;
            VAR_5 = 0;
         } else if (VAR_14 == VAR_12 + 1) {
            FUNC_3(VAR_0, VAR_3);
            while ((VAR_3 = FUNC_1(VAR_0)) > 0)
               FUNC_3(VAR_0,VAR_3);
            return VAR_1->out;
         } else if (VAR_14 <= VAR_8) {
            if (VAR_5) return FUNC_0("no clear code", "Corrupt GIF");

            if (VAR_9 >= 0) {
               VAR_13 = &VAR_1->codes[VAR_8++];
               if (VAR_8 > 4096) return FUNC_0("too many codes", "Corrupt GIF");
               VAR_13->prefix = (stbi__int16) VAR_9;
               VAR_13->first = VAR_1->codes[VAR_9].first;
               VAR_13->suffix = (VAR_14 == VAR_8) ? VAR_13->first : VAR_1->codes[VAR_14].first;
            } else if (VAR_14 == VAR_8)
               return FUNC_0("illegal code in raster", "Corrupt GIF");

            FUNC_4(VAR_1, (stbi__uint16) VAR_14);

            if ((VAR_8 & VAR_7) == 0 && VAR_8 <= 0x0FFF) {
               VAR_6++;
               VAR_7 = (1 << VAR_6) - 1;
            }

            VAR_9 = VAR_14;
         } else {
            return FUNC_0("illegal code in raster", "Corrupt GIF");
         }
      }
   }
}
