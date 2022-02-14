
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct hpi_hw_obj {int pCI2040HPI_error_count; scalar_t__ dw2040_HPICSR; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (long,scalar_t__) ;

__attribute__((used)) static short FUNC_2(struct hpi_adapter_obj *VAR_3,
 u16 VAR_4)
{
 u32 VAR_5;

 struct hpi_hw_obj *VAR_6 = VAR_3->priv;


 VAR_5 = FUNC_0(VAR_6->dw2040_HPICSR + VAR_0);
 if (VAR_5) {

  FUNC_1(0L, VAR_6->dw2040_HPICSR + VAR_0);
  VAR_6->pCI2040HPI_error_count++;
  if (VAR_4 == 1)
   VAR_1++;
  else
   VAR_2++;
  return 1;
 } else
  return 0;
}
