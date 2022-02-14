
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int depth; int red_mask; int green_mask; int blue_mask; int bits_per_pixel; int colormap_size; TYPE_1__* visual; int class; } ;
typedef TYPE_3__ XVisualInfo ;
typedef TYPE_3__ XPixmapFormatValues ;
struct TYPE_12__ {int no_translate_image; int compatible_arch; int depth; int bpp; TYPE_1__* visual; int blue_shift_l; int blue_shift_r; int green_shift_l; int green_shift_r; int red_shift_l; int red_shift_r; int host_be; int xserver_be; } ;
struct TYPE_14__ {int server_depth; TYPE_2__ xwin; void* owncolmap; int display; } ;
struct TYPE_11__ {int blue_mask; int green_mask; int red_mask; } ;
typedef TYPE_5__ RDPCLIENT ;
typedef void* BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ,int,TYPE_3__*,int*) ;
 TYPE_3__* FUNC_5 (int ,int*) ;
 unsigned int FUNC_6 (int) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static BOOL
FUNC_9(RDPCLIENT * VAR_7)
{
 XPixmapFormatValues *VAR_8;
 int VAR_9, VAR_10;
 XVisualInfo *VAR_11 = ((void*)0);
 XVisualInfo VAR_12;
 int VAR_13;
 unsigned VAR_14, VAR_15, VAR_16;

 VAR_14 = VAR_15 = VAR_16 = 0;

 if (VAR_7->server_depth == -1)
 {
  VAR_7->server_depth = FUNC_1(VAR_7->display, FUNC_0(VAR_7->display));
 }

 VAR_8 = FUNC_5(VAR_7->display, &VAR_9);
 if (VAR_8 == ((void*)0))
 {
  FUNC_8("Unable to get list of pixmap formats from display.\n");
  FUNC_2(VAR_7->display);
  return VAR_0;
 }


 VAR_12.class = VAR_3;
 VAR_11 = FUNC_4(VAR_7->display, VAR_4, &VAR_12, &VAR_10);
 VAR_7->xwin.visual = ((void*)0);
 VAR_7->xwin.no_translate_image = VAR_0;
 VAR_7->xwin.compatible_arch = VAR_0;
 if (VAR_11 != ((void*)0))
 {
  for (VAR_13 = 0; VAR_13 < VAR_10; ++VAR_13)
  {
   XVisualInfo *VAR_17 = &VAR_11[VAR_13];
   BOOL VAR_18 = VAR_0;
   int VAR_19;



   if (!VAR_7->xwin.xserver_be && (((VAR_17->depth == 15) &&

            (VAR_17->red_mask == 0x7c00) &&
            (VAR_17->green_mask == 0x3e0) &&
            (VAR_17->blue_mask == 0x1f)) ||
           ((VAR_17->depth == 16) &&

            (VAR_17->red_mask == 0xf800) &&
            (VAR_17->green_mask == 0x7e0) &&
            (VAR_17->blue_mask == 0x1f)) ||
           ((VAR_17->depth == 24) &&

            (VAR_17->red_mask == 0xff0000) &&
            (VAR_17->green_mask == 0xff00) &&
            (VAR_17->blue_mask == 0xff))))
   {
    VAR_7->xwin.visual = VAR_17->visual;
    VAR_7->xwin.depth = VAR_17->depth;
    VAR_7->xwin.compatible_arch = !VAR_7->xwin.host_be;
    VAR_7->xwin.no_translate_image = (VAR_17->depth == VAR_7->server_depth);
    if (VAR_7->xwin.no_translate_image)

     break;
   }
   else
   {
    VAR_7->xwin.compatible_arch = VAR_0;
   }

   if (VAR_17->depth > 24)
   {




    continue;
   }



   for (VAR_19 = 0; VAR_19 < VAR_9; ++VAR_19)
   {
    if (VAR_8[VAR_19].depth == VAR_17->depth)
    {
     if ((VAR_8[VAR_19].bits_per_pixel == 16) ||
         (VAR_8[VAR_19].bits_per_pixel == 24) ||
         (VAR_8[VAR_19].bits_per_pixel == 32))
     {
      VAR_18 = VAR_2;
     }
     break;
    }
   }




   if (VAR_18)
   {
    unsigned VAR_20 =
     FUNC_6(VAR_17->red_mask);
    unsigned VAR_21 =
     FUNC_6(VAR_17->green_mask);
    unsigned VAR_22 =
     FUNC_6(VAR_17->blue_mask);
    if ((VAR_20 >= VAR_14)
        && (VAR_21 >= VAR_16)
        && (VAR_22 >= VAR_15))
    {
     VAR_14 = VAR_20;
     VAR_16 = VAR_21;
     VAR_15 = VAR_22;
     VAR_7->xwin.visual = VAR_17->visual;
     VAR_7->xwin.depth = VAR_17->depth;
    }
   }
  }
  FUNC_3(VAR_11);
 }

 if (VAR_7->xwin.visual != ((void*)0))
 {
  VAR_7->owncolmap = VAR_0;
  FUNC_7(VAR_7->xwin.visual->red_mask, &VAR_7->xwin.red_shift_r, &VAR_7->xwin.red_shift_l);
  FUNC_7(VAR_7->xwin.visual->green_mask, &VAR_7->xwin.green_shift_r, &VAR_7->xwin.green_shift_l);
  FUNC_7(VAR_7->xwin.visual->blue_mask, &VAR_7->xwin.blue_shift_r, &VAR_7->xwin.blue_shift_l);
 }
 else
 {
  VAR_12.class = VAR_1;
  VAR_12.depth = 8;
  VAR_12.colormap_size = 256;
  VAR_11 =
   FUNC_4(VAR_7->display,
           VAR_4 | VAR_6 | VAR_5,
           &VAR_12, &VAR_10);
  if (VAR_11 == ((void*)0))
  {
   FUNC_8("No usable TrueColor or PseudoColor visuals on this display.\n");
   FUNC_2(VAR_7->display);
   FUNC_3(VAR_8);
   return VAR_0;
  }


  VAR_7->owncolmap = VAR_2;
  VAR_7->xwin.visual = VAR_11[0].visual;
  VAR_7->xwin.depth = VAR_11[0].depth;
 }

 VAR_7->xwin.bpp = 0;
 for (VAR_13 = 0; VAR_13 < VAR_9; ++VAR_13)
 {
  XPixmapFormatValues *VAR_23 = &VAR_8[VAR_13];
  if (VAR_23->depth == VAR_7->xwin.depth)
  {
   VAR_7->xwin.bpp = VAR_23->bits_per_pixel;

   if (VAR_7->xwin.no_translate_image)
   {
    switch (VAR_7->server_depth)
    {
     case 15:
     case 16:
      if (VAR_7->xwin.bpp != 16)
       VAR_7->xwin.no_translate_image = VAR_0;
      break;
     case 24:



      if (VAR_7->xwin.bpp != 24)
       VAR_7->xwin.no_translate_image = VAR_0;
      break;
     default:
      VAR_7->xwin.no_translate_image = VAR_0;
      break;
    }
   }




   break;
  }
 }
 FUNC_3(VAR_8);
 VAR_8 = ((void*)0);
 return VAR_2;
}
