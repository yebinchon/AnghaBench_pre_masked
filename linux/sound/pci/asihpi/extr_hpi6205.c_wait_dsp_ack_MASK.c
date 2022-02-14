
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_hw_obj {struct bus_master_interface* p_interface_buffer; } ;
struct bus_master_interface {int dsp_ack; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct hpi_hw_obj *VAR_0, int VAR_1, int VAR_2)
{
 struct bus_master_interface *VAR_3 = VAR_0->p_interface_buffer;
 int VAR_4 = VAR_2 / 4;

 FUNC_1();
 while ((VAR_3->dsp_ack != VAR_1) && --VAR_4) {
  FUNC_0(4);
  FUNC_1();
 }


 return VAR_4 * 4;
}
