
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_structp ;
typedef int png_size_t ;
typedef int png_int_32 ;
typedef scalar_t__ png_byte ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,scalar_t__*,int ) ;

void
FUNC_4(png_structp VAR_3, png_int_32 VAR_4, png_int_32 VAR_5,
   int VAR_6)
{



   png_byte VAR_7[9];

   FUNC_0(1, "in png_write_oFFs\n");
   if (VAR_6 >= VAR_0)
      FUNC_2(VAR_3, "Unrecognized unit type for oFFs chunk");

   FUNC_1(VAR_7, VAR_4);
   FUNC_1(VAR_7 + 4, VAR_5);
   VAR_7[8] = (png_byte)VAR_6;

   FUNC_3(VAR_3, VAR_2, VAR_7, (png_size_t)9);
}
