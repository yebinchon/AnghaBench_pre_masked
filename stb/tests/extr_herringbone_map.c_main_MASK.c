
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int short_side_len; int num_h_tiles; int num_v_tiles; TYPE_2__** v_tiles; TYPE_1__** h_tiles; } ;
typedef TYPE_3__ stbhw_tileset ;
struct TYPE_8__ {unsigned char* pixels; } ;
struct TYPE_7__ {unsigned char* pixels; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,unsigned char*,int,int,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int *,unsigned char*,int,int,int) ;
 char* FUNC_8 () ;
 unsigned char* FUNC_9 (char*,int*,int*,int ,int) ;
 int FUNC_10 (char*,int,int,int,unsigned char*,int) ;
 int VAR_0 ;

int FUNC_11(int VAR_1, char **VAR_2)
{
   if (VAR_1 < 5) {
      FUNC_2(VAR_0, "Usage: herringbone_map {inputfile} {output-width} {output-height} {outputfile}\n");
      return 1;
   } else {
      char *VAR_3 = VAR_2[1];
      int VAR_4 = FUNC_0(VAR_2[2]);
      int VAR_5 = FUNC_0(VAR_2[3]);
      char *VAR_6 = VAR_2[4];

      unsigned char *VAR_7, *VAR_8;
      stbhw_tileset VAR_9;
      int VAR_10,VAR_11;

      VAR_7 = FUNC_9(VAR_3, &VAR_10, &VAR_11, 0, 3);
      if (VAR_7 == 0) {
         FUNC_2(VAR_0, "Couldn't open input file '%s'\n", VAR_3);
   FUNC_1(1);
      }

      if (!FUNC_5(&VAR_9, VAR_7, VAR_10*3, VAR_10, VAR_11)) {
         FUNC_2(VAR_0, "Error: %s\n", FUNC_8());
         return 1;
      }

      FUNC_3(VAR_7);
      VAR_8 = FUNC_4(VAR_4 * VAR_5 * 3);

      if (!FUNC_7(&VAR_9, ((void*)0), VAR_8, VAR_4*3, VAR_4, VAR_5)) {
         FUNC_2(VAR_0, "Error: %s\n", FUNC_8());
         return 1;
      }

      FUNC_10(VAR_2[4], VAR_4, VAR_5, 3, VAR_8, VAR_4*3);
      FUNC_3(VAR_8);

      FUNC_6(&VAR_9);
      return 0;
   }
}
