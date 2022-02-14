
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct hpi_hw_obj {struct dsp_obj* ado; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;
struct dsp_obj {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hpi_adapter_obj*,int ) ;
 int FUNC_1 (struct dsp_obj*,int,int*,int) ;

__attribute__((used)) static u16 FUNC_2(struct hpi_adapter_obj *VAR_2,
 u16 VAR_3, u32 VAR_4, u32 *VAR_5, u32 VAR_6)
{
 struct hpi_hw_obj *VAR_7 = VAR_2->priv;
 struct dsp_obj *VAR_8 = &VAR_7->ado[VAR_3];
 u32 VAR_9 = VAR_1;
 int VAR_10 = 16;
 u32 VAR_11 = VAR_4;
 int VAR_12 = VAR_6;
 int VAR_13;
 u32 *VAR_14 = VAR_5;
 u32 VAR_15 = 0;

 while (VAR_12) {
  if (VAR_12 > VAR_10)
   VAR_13 = VAR_10;
  else
   VAR_13 = VAR_12;

  VAR_9 = VAR_1;
  do {
   FUNC_1(VAR_8, VAR_11, VAR_14,
    VAR_13);
  } while (FUNC_0(VAR_2, VAR_0)
   && --VAR_9);
  if (!VAR_9)
   break;

  VAR_14 += VAR_13;
  VAR_11 += sizeof(u32) * VAR_13;
  VAR_12 -= VAR_13;
  VAR_15++;
 }

 if (VAR_9)
  return 0;
 else
  return 1;
}
