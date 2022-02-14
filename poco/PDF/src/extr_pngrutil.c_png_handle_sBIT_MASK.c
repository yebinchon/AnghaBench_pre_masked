
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef int png_size_t ;
typedef TYPE_2__* png_infop ;
typedef void* png_byte ;
struct TYPE_14__ {void* alpha; void* blue; void* green; void* red; void* gray; } ;
struct TYPE_13__ {int valid; } ;
struct TYPE_12__ {int mode; int color_type; TYPE_6__ sig_bit; scalar_t__ channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,void**,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,TYPE_6__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;

void
FUNC_6(png_structp VAR_6, png_infop VAR_7, png_uint_32 VAR_8)
{
   png_size_t VAR_9;
   png_byte VAR_10[4];

   FUNC_2(1, "in png_handle_sBIT\n");

   VAR_10[0] = VAR_10[1] = VAR_10[2] = VAR_10[3] = 0;

   if (!(VAR_6->mode & VAR_3))
      FUNC_3(VAR_6, "Missing IHDR before sBIT");
   else if (VAR_6->mode & VAR_2)
   {
      FUNC_5(VAR_6, "Invalid sBIT after IDAT");
      FUNC_0(VAR_6, VAR_8);
      return;
   }
   else if (VAR_6->mode & VAR_4)
   {

      FUNC_5(VAR_6, "Out of place sBIT chunk");
   }
   if (VAR_7 != ((void*)0) && (VAR_7->valid & VAR_5))
   {
      FUNC_5(VAR_6, "Duplicate sBIT chunk");
      FUNC_0(VAR_6, VAR_8);
      return;
   }

   if (VAR_6->color_type == VAR_1)
      VAR_9 = 3;
   else
      VAR_9 = (png_size_t)VAR_6->channels;

   if (VAR_8 != VAR_9 || VAR_8 > 4)
   {
      FUNC_5(VAR_6, "Incorrect sBIT chunk length");
      FUNC_0(VAR_6, VAR_8);
      return;
   }

   FUNC_1(VAR_6, VAR_10, VAR_9);
   if (FUNC_0(VAR_6, 0))
      return;

   if (VAR_6->color_type & VAR_0)
   {
      VAR_6->sig_bit.red = VAR_10[0];
      VAR_6->sig_bit.green = VAR_10[1];
      VAR_6->sig_bit.blue = VAR_10[2];
      VAR_6->sig_bit.alpha = VAR_10[3];
   }
   else
   {
      VAR_6->sig_bit.gray = VAR_10[0];
      VAR_6->sig_bit.red = VAR_10[0];
      VAR_6->sig_bit.green = VAR_10[0];
      VAR_6->sig_bit.blue = VAR_10[0];
      VAR_6->sig_bit.alpha = VAR_10[1];
   }
   FUNC_4(VAR_6, VAR_7, &(VAR_6->sig_bit));
}
