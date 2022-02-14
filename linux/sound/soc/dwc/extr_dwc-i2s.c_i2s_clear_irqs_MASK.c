
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dw_i2s_dev {int i2s_base; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct dw_i2s_dev *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = 0;

 if (VAR_2 == VAR_0) {
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
   FUNC_2(VAR_1->i2s_base, FUNC_1(VAR_3));
 } else {
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
   FUNC_2(VAR_1->i2s_base, FUNC_0(VAR_3));
 }
}
