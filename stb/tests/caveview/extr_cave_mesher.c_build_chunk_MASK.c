
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int* blocktype; int* lighting; unsigned char* tex2; unsigned char* vheight; int block_geometry; int block_color_face; int block_tex1_face; } ;
typedef TYPE_2__ stbvox_input_description ;
struct TYPE_17__ {int * geometry; } ;
struct TYPE_20__ {TYPE_1__ input; } ;
struct TYPE_19__ {int cx; int cy; int*** sv_blocktype; int*** sv_lighting; TYPE_4__ mm; int num_quads; int bounds; int transform; int face_buffer; int build_buffer; } ;
typedef TYPE_3__ raw_mesh ;
typedef int fast_chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int,int ***,int***,int***) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (float,int,int,int,int) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 TYPE_2__* FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*,int ,int,int ,int ) ;
 int FUNC_14 (TYPE_4__*,int ) ;
 int FUNC_15 (TYPE_4__*,int ,int ,int,int,int,int) ;
 int FUNC_16 (TYPE_4__*,int,int) ;
 int FUNC_17 (TYPE_4__*,int,int,int ) ;

void FUNC_18(int VAR_6, int VAR_7, fast_chunk *VAR_8[4][4], raw_mesh *VAR_9)
{
   int VAR_10,VAR_11,VAR_12;
   stbvox_input_description *VAR_13;






   unsigned char VAR_14[34][34][18];


   FUNC_1((VAR_6 & 1) == 0);
   FUNC_1((VAR_7 & 1) == 0);

   VAR_9->cx = VAR_6;
   VAR_9->cy = VAR_7;

   FUNC_16(&VAR_9->mm, 34*18, 18);

   FUNC_1(VAR_9->mm.input.geometry == ((void*)0));

   VAR_13 = FUNC_8(&VAR_9->mm);
   VAR_13->block_tex1_face = VAR_5;
   VAR_13->block_color_face = VAR_3;
   VAR_13->block_geometry = VAR_4;

   FUNC_12(&VAR_9->mm);
   FUNC_13(&VAR_9->mm, 0, 0, VAR_9->build_buffer, VAR_0);
   FUNC_13(&VAR_9->mm, 0, 1, VAR_9->face_buffer , VAR_1);

   VAR_13->blocktype = &VAR_9->sv_blocktype[1][1][1];
   VAR_13->lighting = &VAR_9->sv_lighting[1][1][1];


   for (VAR_10=0; VAR_10 < 34; ++VAR_10) {
      for (VAR_11=0; VAR_11 < 34; ++VAR_11) {
         VAR_9->sv_blocktype[VAR_10][VAR_11][16] = 0;
         VAR_9->sv_lighting [VAR_10][VAR_11][16] = 255;
         VAR_9->sv_blocktype[VAR_10][VAR_11][17] = 0;
         VAR_9->sv_lighting [VAR_10][VAR_11][17] = 255;
      }
   }


   for (VAR_10=0; VAR_10 < 34; ++VAR_10) {
      for (VAR_11=0; VAR_11 < 34; ++VAR_11) {
         int VAR_15 = VAR_6*16 + VAR_10 - 1;
         int VAR_16 = VAR_7*16 + VAR_11 - 1;
         float VAR_17 = (float) FUNC_5(VAR_15*VAR_15 + VAR_16*VAR_16);
         float VAR_18 = (float) FUNC_4(VAR_17 / 16), VAR_19, VAR_20;
         VAR_17 = (float) FUNC_5((VAR_15-80)*(VAR_15-80) + (VAR_16-50)*(VAR_16-50));
         VAR_19 = (float) FUNC_4(VAR_17 / 11);
         for (VAR_12=0; VAR_12 < 18; ++VAR_12) {
            VAR_20 = (float) FUNC_4(VAR_12 * 3.141592 / 8);

            VAR_20 = VAR_18*VAR_19*VAR_20;
            VAR_14[VAR_10][VAR_11][VAR_12] = 63 & (int) FUNC_6(VAR_20,-1,1, -20,83);
         }
      }
   }


   for (VAR_12=256-16; VAR_12 >= VAR_2; VAR_12 -= 16)
   {
      int VAR_21 = VAR_12;
      int VAR_22 = VAR_12+16;
      if (VAR_22 == 256) VAR_22 = 255;

      FUNC_2(VAR_6, VAR_7, VAR_12 >> 4, VAR_8, VAR_9->sv_blocktype, VAR_9->sv_lighting);

      VAR_13->blocktype = &VAR_9->sv_blocktype[1][1][1-VAR_12];
      VAR_13->lighting = &VAR_9->sv_lighting[1][1][1-VAR_12];

      VAR_13->tex2 = &VAR_14[1][1][1-VAR_12];
      {
         FUNC_15(&VAR_9->mm, 0,0,VAR_21, 32,32,VAR_22);
         FUNC_14(&VAR_9->mm, 0);
         FUNC_11(&VAR_9->mm);
      }


      for (VAR_10=0; VAR_10 < 34; ++VAR_10) {
         for (VAR_11=0; VAR_11 < 34; ++VAR_11) {
            VAR_9->sv_blocktype[VAR_10][VAR_11][16] = VAR_9->sv_blocktype[VAR_10][VAR_11][0];
            VAR_9->sv_blocktype[VAR_10][VAR_11][17] = VAR_9->sv_blocktype[VAR_10][VAR_11][1];
            VAR_9->sv_lighting [VAR_10][VAR_11][16] = VAR_9->sv_lighting [VAR_10][VAR_11][0];
            VAR_9->sv_lighting [VAR_10][VAR_11][17] = VAR_9->sv_lighting [VAR_10][VAR_11][1];
         }
      }
   }

   FUNC_17(&VAR_9->mm, VAR_6*16, VAR_7*16, 0);
   FUNC_10(&VAR_9->mm, VAR_9->transform);

   FUNC_15(&VAR_9->mm, 0,0,0, 32,32,255);
   FUNC_7(&VAR_9->mm, VAR_9->bounds);

   VAR_9->num_quads = FUNC_9(&VAR_9->mm, 0);
}
