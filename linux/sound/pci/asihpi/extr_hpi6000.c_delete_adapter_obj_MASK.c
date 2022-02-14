
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_hw_obj {scalar_t__ dw2040_HPICSR; int p_cache; } ;
struct hpi_adapter_obj {scalar_t__ has_control_cache; struct hpi_hw_obj* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct hpi_hw_obj*) ;

__attribute__((used)) static void FUNC_3(struct hpi_adapter_obj *VAR_1)
{
 struct hpi_hw_obj *VAR_2 = VAR_1->priv;

 if (VAR_1->has_control_cache)
  FUNC_0(VAR_2->p_cache);


 FUNC_1(0x0003000F, VAR_2->dw2040_HPICSR + VAR_0);

 FUNC_2(VAR_2);
}
