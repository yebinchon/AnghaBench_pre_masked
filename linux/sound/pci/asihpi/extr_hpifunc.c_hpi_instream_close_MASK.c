
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
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u32 VAR_5)
{
 struct hpi_message VAR_6;
 struct hpi_response VAR_7;

 FUNC_1(&VAR_6, &VAR_7, VAR_4,
  VAR_3);
 if (FUNC_0(VAR_5, &VAR_6.adapter_index, &VAR_6.obj_index))
  return VAR_0;
 FUNC_2(&VAR_6, &VAR_7);

 FUNC_1(&VAR_6, &VAR_7, VAR_4,
  VAR_2);
 FUNC_0(VAR_5, &VAR_6.adapter_index, &VAR_6.obj_index);
 FUNC_2(&VAR_6, &VAR_7);

 FUNC_1(&VAR_6, &VAR_7, VAR_4,
  VAR_1);
 FUNC_0(VAR_5, &VAR_6.adapter_index, &VAR_6.obj_index);
 FUNC_2(&VAR_6, &VAR_7);

 return VAR_7.error;
}
