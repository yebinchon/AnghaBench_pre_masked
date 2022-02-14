
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct hpi_hw_obj {struct dsp_obj* ado; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;
struct dsp_obj {int prHPI_control; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hpi_adapter_obj*,int ) ;
 int FUNC_2 (struct dsp_obj*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static short FUNC_4(struct hpi_adapter_obj *VAR_4, u16 VAR_5,
 u32 VAR_6)
{
 struct hpi_hw_obj *VAR_7 = VAR_4->priv;
 struct dsp_obj *VAR_8 = &VAR_7->ado[VAR_5];
 u32 VAR_9 = 0L;
 u32 VAR_10;
 u32 VAR_11 = 0L;


 VAR_10 = VAR_2;
 while (--VAR_10) {
  VAR_11 = FUNC_3(VAR_8->prHPI_control);
  if (VAR_11 & 0x04)
   break;
 }
 if (VAR_10 == 0)
  return VAR_1;


 VAR_10 = VAR_2;
 while (--VAR_10) {

  VAR_9 = FUNC_2(VAR_8, FUNC_0(VAR_3));
  if (VAR_9 == VAR_6)
   break;
  if ((VAR_9 & VAR_1)
   && !FUNC_1(VAR_4, VAR_0))
   break;


 }
 if (VAR_9 & VAR_1)


  VAR_9 = VAR_1;

 if (VAR_10 == 0)
  VAR_9 = VAR_1;
 return (short)VAR_9;
}
