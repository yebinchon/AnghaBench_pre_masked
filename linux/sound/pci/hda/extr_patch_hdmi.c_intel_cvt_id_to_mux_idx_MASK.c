
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec {int num_cvts; scalar_t__* cvt_nids; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hdmi_spec *VAR_1,
   hda_nid_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_cvts; VAR_3++)
  if (VAR_1->cvt_nids[VAR_3] == VAR_2)
   return VAR_3;
 return -VAR_0;
}
