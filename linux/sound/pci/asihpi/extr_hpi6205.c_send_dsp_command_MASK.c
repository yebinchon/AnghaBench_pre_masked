
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hpi_hw_obj {int prHDCR; struct bus_master_interface* p_interface_buffer; } ;
struct bus_master_interface {int host_cmd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct hpi_hw_obj *VAR_1, int VAR_2)
{
 struct bus_master_interface *VAR_3 = VAR_1->p_interface_buffer;
 u32 VAR_4;

 VAR_3->host_cmd = VAR_2;
 FUNC_2();

 VAR_4 = FUNC_0(VAR_1->prHDCR);
 VAR_4 |= (u32)VAR_0;
 FUNC_1(VAR_4, VAR_1->prHDCR);
 VAR_4 &= ~(u32)VAR_0;
 FUNC_1(VAR_4, VAR_1->prHDCR);
}
