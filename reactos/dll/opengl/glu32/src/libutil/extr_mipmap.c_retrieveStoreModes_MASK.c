
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pack_swap_bytes; int pack_lsb_first; int pack_skip_pixels; int pack_skip_rows; int pack_row_length; int pack_alignment; int unpack_swap_bytes; int unpack_lsb_first; int unpack_skip_pixels; int unpack_skip_rows; int unpack_row_length; int unpack_alignment; } ;
typedef TYPE_1__ PixelStorageModes ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(PixelStorageModes *VAR_12)
{
    FUNC_0(VAR_6, &VAR_12->unpack_alignment);
    FUNC_0(VAR_8, &VAR_12->unpack_row_length);
    FUNC_0(VAR_10, &VAR_12->unpack_skip_rows);
    FUNC_0(VAR_9, &VAR_12->unpack_skip_pixels);
    FUNC_0(VAR_7, &VAR_12->unpack_lsb_first);
    FUNC_0(VAR_11, &VAR_12->unpack_swap_bytes);

    FUNC_0(VAR_0, &VAR_12->pack_alignment);
    FUNC_0(VAR_2, &VAR_12->pack_row_length);
    FUNC_0(VAR_4, &VAR_12->pack_skip_rows);
    FUNC_0(VAR_3, &VAR_12->pack_skip_pixels);
    FUNC_0(VAR_1, &VAR_12->pack_lsb_first);
    FUNC_0(VAR_5, &VAR_12->pack_swap_bytes);
}
