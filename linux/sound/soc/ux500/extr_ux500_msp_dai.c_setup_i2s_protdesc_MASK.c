
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_protdesc {int rx_fsync_pol; int frame_sync_ignore; int expansion_mode; int compression_mode; void* rx_half_word_swap; void* tx_half_word_swap; void* tx_data_delay; void* rx_data_delay; int tx_clk_pol; int rx_clk_pol; void* tx_elem_len_2; void* tx_elem_len_1; void* rx_elem_len_2; void* rx_elem_len_1; void* tx_frame_len_2; void* tx_frame_len_1; void* rx_frame_len_2; void* rx_frame_len_1; int tx_fsync_pol; void* tx_byte_order; void* rx_byte_order; void* tx_phase2_start_mode; void* rx_phase2_start_mode; void* tx_phase_mode; void* rx_phase_mode; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_1(struct msp_protdesc *VAR_14)
{
 VAR_14->rx_phase_mode = VAR_3;
 VAR_14->tx_phase_mode = VAR_3;
 VAR_14->rx_phase2_start_mode = VAR_10;
 VAR_14->tx_phase2_start_mode = VAR_10;
 VAR_14->rx_byte_order = VAR_0;
 VAR_14->tx_byte_order = VAR_0;
 VAR_14->tx_fsync_pol = FUNC_0(VAR_9);
 VAR_14->rx_fsync_pol = VAR_9 << VAR_13;

 VAR_14->rx_frame_len_1 = VAR_7;
 VAR_14->rx_frame_len_2 = VAR_7;
 VAR_14->tx_frame_len_1 = VAR_7;
 VAR_14->tx_frame_len_2 = VAR_7;
 VAR_14->rx_elem_len_1 = VAR_4;
 VAR_14->rx_elem_len_2 = VAR_4;
 VAR_14->tx_elem_len_1 = VAR_4;
 VAR_14->tx_elem_len_2 = VAR_4;

 VAR_14->rx_clk_pol = VAR_11;
 VAR_14->tx_clk_pol = VAR_6;

 VAR_14->rx_data_delay = VAR_2;
 VAR_14->tx_data_delay = VAR_2;

 VAR_14->tx_half_word_swap = VAR_12;
 VAR_14->rx_half_word_swap = VAR_12;
 VAR_14->compression_mode = VAR_1;
 VAR_14->expansion_mode = VAR_5;
 VAR_14->frame_sync_ignore = VAR_8;

 return 0;
}
