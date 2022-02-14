
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtd_info {int dummy; } ;
struct ar934x_nfc {int buf_index; int buf_size; int * buf; scalar_t__ swap_dma; } ;


 int FUNC_0 (int) ;
 struct ar934x_nfc* FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_0, const u8 *VAR_1, int VAR_2)
{
 struct ar934x_nfc *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 FUNC_0(VAR_3->buf_index + VAR_2 > VAR_3->buf_size);

 if (VAR_3->swap_dma) {
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
   VAR_3->buf[VAR_3->buf_index ^ 3] = VAR_1[VAR_4];
   VAR_3->buf_index++;
  }
 } else {
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
   VAR_3->buf[VAR_3->buf_index] = VAR_1[VAR_4];
   VAR_3->buf_index++;
  }
 }
}
