
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dsp_obj {int prHPI_address; int pa_parent_adapter; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct dsp_obj *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = VAR_1;

 do {
  FUNC_1(VAR_3, VAR_2->prHPI_address);
 } while (FUNC_0(VAR_2->pa_parent_adapter,
   VAR_0)
  && --VAR_4);

 if (VAR_4)
  return 0;

 return 1;
}
