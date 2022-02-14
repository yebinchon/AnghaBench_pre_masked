
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef int png_infop ;
struct TYPE_6__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;

void
FUNC_4(png_structp VAR_4, png_infop VAR_5, png_uint_32 VAR_6)
{
   FUNC_1(1, "in png_handle_IEND\n");

   if (!(VAR_4->mode & VAR_3) || !(VAR_4->mode & VAR_1))
   {
      FUNC_2(VAR_4, "No image in file");
   }

   VAR_4->mode |= (VAR_0 | VAR_2);

   if (VAR_6 != 0)
   {
      FUNC_3(VAR_4, "Incorrect IEND chunk length");
   }
   FUNC_0(VAR_4, VAR_6);

   VAR_5 =VAR_5;
}
