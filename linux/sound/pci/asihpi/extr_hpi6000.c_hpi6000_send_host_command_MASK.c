
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct hpi_hw_obj {struct dsp_obj* ado; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;
struct dsp_obj {int prHPI_control; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct hpi_adapter_obj*,int ) ;
 int FUNC_2 (struct dsp_obj*,int ) ;
 int FUNC_3 (struct dsp_obj*,int ,scalar_t__) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static short FUNC_5(struct hpi_adapter_obj *VAR_2,
 u16 VAR_3, u32 VAR_4)
{
 struct hpi_hw_obj *VAR_5 = VAR_2->priv;
 struct dsp_obj *VAR_6 = &VAR_5->ado[VAR_3];
 u32 VAR_7 = VAR_1;


 do {
  FUNC_3(VAR_6, FUNC_0(VAR_4), VAR_4);

  FUNC_2(VAR_6, FUNC_0(VAR_4));
 } while (FUNC_1(VAR_2, VAR_0) && --VAR_7);


 FUNC_4(0x00040004, VAR_6->prHPI_control);

 if (VAR_7)
  return 0;
 else
  return 1;
}
