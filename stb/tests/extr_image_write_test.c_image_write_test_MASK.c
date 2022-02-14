
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int,int,unsigned char*) ;
 int FUNC_2 (char*,int,int,int,float*) ;
 int FUNC_3 (char*,int,int,int,unsigned char*,int) ;
 int FUNC_4 (char*,int,int,int,unsigned char*,int) ;
 int FUNC_5 (char*,int,int,int,unsigned char*) ;

void FUNC_6(void)
{


   unsigned char VAR_1[6*5*3];
   float VAR_2[6*5*3];
   int VAR_3;

   for (VAR_3 = 0; VAR_3 < 6*5; VAR_3++) {
      int VAR_4 = VAR_0[VAR_3] == '*';
      VAR_1[VAR_3*3 + 0] = VAR_4 ? 255 : 0;
      VAR_1[VAR_3*3 + 1] = 0;
      VAR_1[VAR_3*3 + 2] = VAR_4 ? 0 : 255;

      VAR_2[VAR_3*3 + 0] = VAR_4 ? 1.0f : 0.0f;
      VAR_2[VAR_3*3 + 1] = 0.0f;
      VAR_2[VAR_3*3 + 2] = VAR_4 ? 0.0f : 1.0f;
   }

   FUNC_4("output/wr6x5_regular.png", 6, 5, 3, VAR_1, 6*3);
   FUNC_1("output/wr6x5_regular.bmp", 6, 5, 3, VAR_1);
   FUNC_5("output/wr6x5_regular.tga", 6, 5, 3, VAR_1);
   FUNC_3("output/wr6x5_regular.jpg", 6, 5, 3, VAR_1, 95);
   FUNC_2("output/wr6x5_regular.hdr", 6, 5, 3, VAR_2);

   FUNC_0(1);

   FUNC_4("output/wr6x5_flip.png", 6, 5, 3, VAR_1, 6*3);
   FUNC_1("output/wr6x5_flip.bmp", 6, 5, 3, VAR_1);
   FUNC_5("output/wr6x5_flip.tga", 6, 5, 3, VAR_1);
   FUNC_3("output/wr6x5_flip.jpg", 6, 5, 3, VAR_1, 95);
   FUNC_2("output/wr6x5_flip.hdr", 6, 5, 3, VAR_2);
}
