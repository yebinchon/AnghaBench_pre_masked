
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bluey; int bluex; int greeny; int greenx; int redy; int redx; int whitey; int whitex; } ;
typedef TYPE_1__ png_xy ;
typedef int png_structrp ;
typedef int png_byte ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int *,int) ;

void
FUNC_3(png_structrp VAR_1, const png_xy *VAR_2)
{
   png_byte VAR_3[32];

   FUNC_0(1, "in png_write_cHRM");


   FUNC_1(VAR_3, VAR_2->whitex);
   FUNC_1(VAR_3 + 4, VAR_2->whitey);

   FUNC_1(VAR_3 + 8, VAR_2->redx);
   FUNC_1(VAR_3 + 12, VAR_2->redy);

   FUNC_1(VAR_3 + 16, VAR_2->greenx);
   FUNC_1(VAR_3 + 20, VAR_2->greeny);

   FUNC_1(VAR_3 + 24, VAR_2->bluex);
   FUNC_1(VAR_3 + 28, VAR_2->bluey);

   FUNC_2(VAR_1, VAR_0, VAR_3, 32);
}
