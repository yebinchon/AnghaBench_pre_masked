
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ png_uint_32 ;
typedef int png_structp ;
typedef int png_size_t ;
typedef int png_byte ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,int ,int *,int ) ;

void
FUNC_3(png_structp VAR_2, double VAR_3)
{



   png_uint_32 VAR_4;
   png_byte VAR_5[4];

   FUNC_0(1, "in png_write_gAMA\n");

   VAR_4 = (png_uint_32)(VAR_3 * 100000.0 + 0.5);
   FUNC_1(VAR_5, VAR_4);
   FUNC_2(VAR_2, VAR_1, VAR_5, (png_size_t)4);
}
