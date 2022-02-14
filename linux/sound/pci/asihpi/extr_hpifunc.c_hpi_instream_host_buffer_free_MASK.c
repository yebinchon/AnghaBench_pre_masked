
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hpi_response {int error; } ;
struct hpi_message {int obj_index; int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u32 VAR_3)
{

 struct hpi_message VAR_4;
 struct hpi_response VAR_5;

 FUNC_1(&VAR_4, &VAR_5, VAR_2,
  VAR_1);
 if (FUNC_0(VAR_3, &VAR_4.adapter_index, &VAR_4.obj_index))
  return VAR_0;
 FUNC_2(&VAR_4, &VAR_5);
 return VAR_5.error;
}
