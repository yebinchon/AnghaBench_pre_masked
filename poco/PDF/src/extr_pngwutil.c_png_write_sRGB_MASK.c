
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_structp ;
typedef int png_size_t ;
typedef scalar_t__ png_byte ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,scalar_t__*,int ) ;

void
FUNC_3(png_structp VAR_3, int VAR_4)
{



   png_byte VAR_5[1];

   FUNC_0(1, "in png_write_sRGB\n");
   if(VAR_4 >= VAR_1)
         FUNC_1(VAR_3,
            "Invalid sRGB rendering intent specified");
   VAR_5[0]=(png_byte)VAR_4;
   FUNC_2(VAR_3, VAR_2, VAR_5, (png_size_t)1);
}
