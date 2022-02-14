
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;


typedef scalar_t__ uInt ;
typedef TYPE_2__* png_structp ;
typedef int png_infop ;
typedef int png_byte ;
struct TYPE_35__ {int next_out; scalar_t__ avail_out; } ;
struct TYPE_36__ {int mode; int buffer_size; scalar_t__ push_length; scalar_t__ color_type; scalar_t__ idat_size; int chunk_name; int row_buf; TYPE_1__ zstream; scalar_t__ irowbytes; int process_mode; } ;
typedef int PNG_CONST ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;
 int VAR_16 ;
 int FUNC_3 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_10 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_11 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_12 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_13 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_14 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_15 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_16 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_17 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_18 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_19 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_20 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_21 (TYPE_2__*,int ,scalar_t__) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_22 (int ,int ,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_23 (TYPE_2__*,int *,int) ;
 int FUNC_24 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_25 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_26 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_27 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_28 (TYPE_2__*,int ) ;
 int FUNC_29 (TYPE_2__*,int ) ;
 int FUNC_30 (TYPE_2__*) ;
 int FUNC_31 (TYPE_2__*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

void
FUNC_32(png_structp VAR_30, png_infop VAR_31)
{
   if (!(VAR_30->mode & VAR_3))
   {
      png_byte VAR_32[4];

      if (VAR_30->buffer_size < 8)
      {
         FUNC_30(VAR_30);
         return;
      }

      FUNC_23(VAR_30, VAR_32, 4);
      VAR_30->push_length = FUNC_2(VAR_30,VAR_32);
      FUNC_31(VAR_30);
      FUNC_0(VAR_30, VAR_30->chunk_name, 4);
      VAR_30->mode |= VAR_3;
   }

   if (!FUNC_22(VAR_30->chunk_name, VAR_9, 4))
     if(VAR_30->mode & VAR_0)
        VAR_30->mode |= VAR_2;

   if (!FUNC_22(VAR_30->chunk_name, VAR_11, 4))
   {
      if (VAR_30->push_length + 4 > VAR_30->buffer_size)
      {
         FUNC_30(VAR_30);
         return;
      }
      FUNC_4(VAR_30, VAR_31, VAR_30->push_length);
   }
   else if (!FUNC_22(VAR_30->chunk_name, VAR_10, 4))
   {
      if (VAR_30->push_length + 4 > VAR_30->buffer_size)
      {
         FUNC_30(VAR_30);
         return;
      }
      FUNC_3(VAR_30, VAR_31, VAR_30->push_length);

      VAR_30->process_mode = VAR_7;
      FUNC_28(VAR_30, VAR_31);
   }
   else if (!FUNC_22(VAR_30->chunk_name, VAR_12, 4))
   {
      if (VAR_30->push_length + 4 > VAR_30->buffer_size)
      {
         FUNC_30(VAR_30);
         return;
      }
      FUNC_5(VAR_30, VAR_31, VAR_30->push_length);
   }
   else if (!FUNC_22(VAR_30->chunk_name, VAR_9, 4))
   {




     if (!(VAR_30->mode & VAR_5))
       FUNC_1(VAR_30, "Missing IHDR before IDAT");
     else if (VAR_30->color_type == VAR_1 &&
         !(VAR_30->mode & VAR_6))
       FUNC_1(VAR_30, "Missing PLTE before IDAT");

      if (VAR_30->mode & VAR_4)
      {
         if (!(VAR_30->mode & VAR_2))
           if (VAR_30->push_length == 0)
              return;

         if (VAR_30->mode & VAR_0)
            FUNC_1(VAR_30, "Too many IDAT's found");
      }

      VAR_30->idat_size = VAR_30->push_length;
      VAR_30->mode |= VAR_4;
      VAR_30->process_mode = VAR_8;
      FUNC_29(VAR_30, VAR_31);
      VAR_30->zstream.avail_out = (uInt)VAR_30->irowbytes;
      VAR_30->zstream.next_out = VAR_30->row_buf;
      return;
   }
   else
   {
      if (VAR_30->push_length + 4 > VAR_30->buffer_size)
      {
         FUNC_30(VAR_30);
         return;
      }
      FUNC_26(VAR_30, VAR_31, VAR_30->push_length);
   }

   VAR_30->mode &= ~VAR_3;
}
