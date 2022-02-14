
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ alloc_buffer_length_in_bytes; scalar_t__ alloc_buffer; } ;
struct TYPE_11__ {scalar_t__ temp_offset; int mode_count; int blocksize_1; int blocksize_0; TYPE_3__* mode_config; TYPE_1__ alloc; scalar_t__ eof; scalar_t__ channel_buffer_end; scalar_t__ channel_buffer_start; } ;
typedef TYPE_2__ vorb ;
struct TYPE_12__ {scalar_t__ blockflag; } ;
typedef TYPE_3__ Mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(vorb *VAR_4, int *VAR_5, int *VAR_6, int *VAR_7, int *VAR_8, int *VAR_9)
{
   Mode *VAR_10;
   int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
   VAR_4->channel_buffer_start = VAR_4->channel_buffer_end = 0;

  retry:
   if (VAR_4->eof) return VAR_1;
   if (!FUNC_6(VAR_4))
      return VAR_1;

   if (FUNC_4(VAR_4,1) != 0) {
      if (FUNC_0(VAR_4))
         return FUNC_2(VAR_4,VAR_3);
      while (VAR_0 != FUNC_3(VAR_4));
      goto retry;
   }

   if (VAR_4->alloc.alloc_buffer)
      FUNC_1(VAR_4->alloc.alloc_buffer_length_in_bytes == VAR_4->temp_offset);

   VAR_11 = FUNC_4(VAR_4, FUNC_5(VAR_4->mode_count-1));
   if (VAR_11 == VAR_0) return VAR_1;
   if (VAR_11 >= VAR_4->mode_count) return VAR_1;
   *VAR_9 = VAR_11;
   VAR_10 = VAR_4->mode_config + VAR_11;
   if (VAR_10->blockflag) {
      VAR_12 = VAR_4->blocksize_1;
      VAR_13 = FUNC_4(VAR_4,1);
      VAR_14 = FUNC_4(VAR_4,1);
   } else {
      VAR_13 = VAR_14 = 0;
      VAR_12 = VAR_4->blocksize_0;
   }



   VAR_15 = VAR_12 >> 1;
   if (VAR_10->blockflag && !VAR_13) {
      *VAR_5 = (VAR_12 - VAR_4->blocksize_0) >> 2;
      *VAR_6 = (VAR_12 + VAR_4->blocksize_0) >> 2;
   } else {
      *VAR_5 = 0;
      *VAR_6 = VAR_15;
   }
   if (VAR_10->blockflag && !VAR_14) {
      *VAR_7 = (VAR_12*3 - VAR_4->blocksize_0) >> 2;
      *VAR_8 = (VAR_12*3 + VAR_4->blocksize_0) >> 2;
   } else {
      *VAR_7 = VAR_15;
      *VAR_8 = VAR_12;
   }

   return VAR_2;
}
