
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hpi_hw_obj {int prHSR; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct hpi_adapter_obj *VAR_3,
 u32 VAR_4)
{
 struct hpi_hw_obj *VAR_5 = VAR_3->priv;
 u32 VAR_6 = 0;

 VAR_6 = FUNC_0(VAR_5->prHSR);
 if (VAR_6 & VAR_0) {

  FUNC_1(VAR_0, VAR_5->prHSR);
  return VAR_1;
 }

 return VAR_2;
}
