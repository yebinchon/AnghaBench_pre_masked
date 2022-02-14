
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ux500_msp {scalar_t__ registers; scalar_t__ def_elem_len; } ;
struct msp_protdesc {int tx_elem_len_1; int tx_elem_len_2; int frame_sync_ignore; int compression_mode; int tx_half_word_swap; int tx_fsync_pol; int tx_byte_order; int tx_data_delay; int tx_frame_len_2; int tx_frame_len_1; int tx_phase2_start_mode; int tx_phase_mode; } ;
typedef enum msp_data_size { ____Placeholder_msp_data_size } msp_data_size ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_12 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_13(struct ux500_msp *VAR_1,
   struct msp_protdesc *VAR_2,
   enum msp_data_size VAR_3)
{
 u32 VAR_4 = 0;

 VAR_4 |= FUNC_6(VAR_2->tx_phase_mode);
 VAR_4 |= FUNC_8(VAR_2->tx_phase2_start_mode);
 VAR_4 |= FUNC_4(VAR_2->tx_frame_len_1);
 VAR_4 |= FUNC_7(VAR_2->tx_frame_len_2);
 if (VAR_1->def_elem_len) {
  VAR_4 |= FUNC_3(VAR_2->tx_elem_len_1);
  VAR_4 |= FUNC_5(VAR_2->tx_elem_len_2);
 } else {
  VAR_4 |= FUNC_3(VAR_3);
  VAR_4 |= FUNC_5(VAR_3);
 }
 VAR_4 |= FUNC_0(VAR_2->tx_data_delay);
 VAR_4 |= FUNC_10(VAR_2->tx_byte_order);
 VAR_4 |= FUNC_2(VAR_2->tx_fsync_pol);
 VAR_4 |= FUNC_1(VAR_2->tx_half_word_swap);
 VAR_4 |= FUNC_9(VAR_2->compression_mode);
 VAR_4 |= FUNC_11(VAR_2->frame_sync_ignore);

 FUNC_12(VAR_4, VAR_1->registers + VAR_0);
}
