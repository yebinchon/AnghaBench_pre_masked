
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_vorbis ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 scalar_t__ FUNC_2 (short*,short*,int) ;
 int FUNC_3 (int *,int,short*,int) ;
 int FUNC_4 (int *,unsigned int) ;
 int VAR_1 ;

int FUNC_5(stb_vorbis *VAR_2, unsigned int VAR_3, short *VAR_4, unsigned int VAR_5)
{
   int VAR_6;
   short VAR_7[VAR_0*2];
   FUNC_0(VAR_3 <= VAR_5);

   if (!FUNC_4(VAR_2, VAR_3)) {
      FUNC_1(VAR_1, "Seek to %u returned error from stb_vorbis\n", VAR_3);
      return 0;
   }

   VAR_6 = FUNC_3(VAR_2, 2, VAR_7, VAR_0*2);

   if (VAR_6 > (int) (VAR_5 - VAR_3)) {
      FUNC_1(VAR_1, "Seek to %u allowed decoding %d samples when only %d should have been valid.\n",
            VAR_3, VAR_6, (int) (VAR_5 - VAR_3));
      return 0;
   }

   if (VAR_6 < VAR_0 && VAR_6 < (int) (VAR_5 - VAR_3)) {
      FUNC_1(VAR_1, "Seek to %u only decoded %d samples of %d attempted when at least %d should have been valid.\n",
         VAR_3, VAR_6, VAR_0, VAR_5 - VAR_3);
      return 0;
   }

   if (0 != FUNC_2(VAR_7, VAR_4 + VAR_3*2, VAR_6*2)) {
      int VAR_8;
      for (VAR_8=0; VAR_8 < VAR_0*2; ++VAR_8) {
         if (VAR_7[VAR_8] != VAR_4[VAR_8]) {
            FUNC_1(VAR_1, "Seek to %u produced incorrect samples starting at sample %u (short #%d in buffer).\n",
                    VAR_3, VAR_3 + (VAR_8/2), VAR_8);
            break;
         }
      }
      FUNC_0(VAR_8 != VAR_0*2);
      return 0;
   }

   return 1;
}
