
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsp_obj {int prHPI_data; } ;


 scalar_t__ FUNC_0 (struct dsp_obj*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct dsp_obj *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = 0;

 if (FUNC_0(VAR_0, VAR_1))
  return 0;


 VAR_2 = FUNC_1(VAR_0->prHPI_data);
 return VAR_2;
}
