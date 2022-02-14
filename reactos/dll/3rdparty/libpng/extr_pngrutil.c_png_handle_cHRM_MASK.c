
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ whitex; scalar_t__ whitey; scalar_t__ redx; scalar_t__ redy; scalar_t__ greenx; scalar_t__ greeny; scalar_t__ bluex; scalar_t__ bluey; } ;
typedef TYPE_1__ png_xy ;
typedef int png_uint_32 ;
typedef TYPE_2__* png_structrp ;
typedef int png_inforp ;
typedef int png_byte ;
struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {int mode; TYPE_8__ colorspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_8__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int *,int) ;
 int FUNC_6 (int,char*) ;
 void* FUNC_7 (int *,int *) ;

void
FUNC_8(png_structrp VAR_6, png_inforp VAR_7, png_uint_32 VAR_8)
{
   png_byte VAR_9[32];
   png_xy VAR_10;

   FUNC_6(1, "in png_handle_cHRM");

   if ((VAR_6->mode & VAR_4) == 0)
      FUNC_1(VAR_6, "missing IHDR");

   else if ((VAR_6->mode & (VAR_3|VAR_5)) != 0)
   {
      FUNC_4(VAR_6, VAR_8);
      FUNC_0(VAR_6, "out of place");
      return;
   }

   if (VAR_8 != 32)
   {
      FUNC_4(VAR_6, VAR_8);
      FUNC_0(VAR_6, "invalid");
      return;
   }

   FUNC_5(VAR_6, VAR_9, 32);

   if (FUNC_4(VAR_6, 0) != 0)
      return;

   VAR_10.whitex = FUNC_7(((void*)0), VAR_9);
   VAR_10.whitey = FUNC_7(((void*)0), VAR_9 + 4);
   VAR_10.redx = FUNC_7(((void*)0), VAR_9 + 8);
   VAR_10.redy = FUNC_7(((void*)0), VAR_9 + 12);
   VAR_10.greenx = FUNC_7(((void*)0), VAR_9 + 16);
   VAR_10.greeny = FUNC_7(((void*)0), VAR_9 + 20);
   VAR_10.bluex = FUNC_7(((void*)0), VAR_9 + 24);
   VAR_10.bluey = FUNC_7(((void*)0), VAR_9 + 28);

   if (VAR_10.whitex == VAR_2 ||
       VAR_10.whitey == VAR_2 ||
       VAR_10.redx == VAR_2 ||
       VAR_10.redy == VAR_2 ||
       VAR_10.greenx == VAR_2 ||
       VAR_10.greeny == VAR_2 ||
       VAR_10.bluex == VAR_2 ||
       VAR_10.bluey == VAR_2)
   {
      FUNC_0(VAR_6, "invalid values");
      return;
   }


   if ((VAR_6->colorspace.flags & VAR_1) != 0)
      return;

   if ((VAR_6->colorspace.flags & VAR_0) != 0)
   {
      VAR_6->colorspace.flags |= VAR_1;
      FUNC_3(VAR_6, VAR_7);
      FUNC_0(VAR_6, "duplicate");
      return;
   }

   VAR_6->colorspace.flags |= VAR_0;
   (void)FUNC_2(VAR_6, &VAR_6->colorspace, &VAR_10,
       1 );
   FUNC_3(VAR_6, VAR_7);
}
