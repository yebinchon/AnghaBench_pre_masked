
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dw_i2s_dev {int i2s_base; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct dw_i2s_dev *VAR_1, u32 VAR_2,
        int VAR_3)
{
 u32 VAR_4, VAR_5;

 if (VAR_2 == VAR_0) {
  for (VAR_4 = 0; VAR_4 < (VAR_3 / 2); VAR_4++) {
   VAR_5 = FUNC_1(VAR_1->i2s_base, FUNC_0(VAR_4));
   FUNC_2(VAR_1->i2s_base, FUNC_0(VAR_4), VAR_5 | 0x30);
  }
 } else {
  for (VAR_4 = 0; VAR_4 < (VAR_3 / 2); VAR_4++) {
   VAR_5 = FUNC_1(VAR_1->i2s_base, FUNC_0(VAR_4));
   FUNC_2(VAR_1->i2s_base, FUNC_0(VAR_4), VAR_5 | 0x03);
  }
 }
}
