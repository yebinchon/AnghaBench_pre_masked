
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct dsp_obj {int prHPI_data; int prHPI_data_auto_inc; } ;


 scalar_t__ FUNC_0 (struct dsp_obj*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct dsp_obj *VAR_0, u32 VAR_1, u32 *VAR_2,
 u32 VAR_3)
{
 u16 VAR_4 = VAR_3 - 1;

 if (VAR_3 == 0)
  return;

 if (FUNC_0(VAR_0, VAR_1))
  return;

 FUNC_2(VAR_0->prHPI_data_auto_inc, VAR_2, VAR_4);



 *(VAR_2 + VAR_3 - 1) = FUNC_1(VAR_0->prHPI_data);
}
