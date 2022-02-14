
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alloc_buffer_length_in_bytes; int alloc_buffer; } ;
typedef TYPE_1__ stb_vorbis_alloc ;
typedef int stb_vorbis ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (short*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,unsigned int,unsigned int,...) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (char*,int*,int*,short**) ;
 int * FUNC_6 (char*,int*,TYPE_1__*) ;
 int VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int* VAR_2 ;
 scalar_t__ FUNC_7 (int *,unsigned int,short*,unsigned int) ;

int FUNC_8(int VAR_3, char **VAR_4)
{
   int VAR_5, VAR_6;
   int VAR_7, VAR_8, VAR_9, VAR_10;
   short *VAR_11;

   if (VAR_3 == 1) {
      FUNC_0(VAR_0, "Usage: vorbseek {vorbisfile} [{vorbisfile]*]\n");
      FUNC_0(VAR_0, "Tests various seek offsets to make sure they're sample exact.\n");
      return 0;
   }
   for (VAR_8=1; VAR_8 < VAR_3; ++VAR_8) {
      unsigned int VAR_12=0, VAR_13 = 0;
      unsigned int VAR_14 = FUNC_5(VAR_4[VAR_8], &VAR_5, &VAR_6, &VAR_11);

      break;

      if (VAR_14 == 0xffffffff) {
         FUNC_0(VAR_0, "Error: couldn't open file or not vorbis file: %s\n", VAR_4[VAR_8]);
         goto fail;
      }

      if (VAR_5 != 2) {
         FUNC_0(VAR_0, "vorbseek testing only works with files with 2 channels, %s has %d\n", VAR_4[VAR_8], VAR_5);
         goto fail;
      }

      for (VAR_9=0; VAR_9 < 5; ++VAR_9) {
         int VAR_15;
         stb_vorbis *VAR_16 = FUNC_6(VAR_4[VAR_8], &VAR_15, ((void*)0));
         if (VAR_16 == ((void*)0)) {
            FUNC_0(VAR_0, "Couldn't re-open %s for test #%d\n", VAR_4[VAR_8], VAR_9);
            goto fail;
         }
         for (VAR_10=0; VAR_10 < 3; ++VAR_10) {
            unsigned int VAR_17 = VAR_10 == 0 ? 0 : VAR_10 == 1 ? VAR_14 - VAR_1[VAR_9]*VAR_2[VAR_9] : VAR_14/3;
            for (VAR_7=0; VAR_7 < VAR_1[VAR_9]; ++VAR_7) {
               unsigned int VAR_18 = VAR_17 + VAR_7*VAR_2[VAR_9];
               if (VAR_18 > VAR_14)
                  continue;
               VAR_12 += FUNC_7(VAR_16, VAR_18, VAR_11, VAR_14);
               VAR_13 += 1;
            }
         }
         FUNC_4(VAR_16);
      }
      FUNC_3("%d of %d seeks failed in %s (%d samples)\n", VAR_13-VAR_12, VAR_13, VAR_4[VAR_8], VAR_14);
      FUNC_1(VAR_11);
   }
   return 0;
  fail:
   return 1;
}
