
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef void* u16 ;
struct hpi_response {scalar_t__ error; } ;
struct hpi_message {void* obj_index; void* adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,void*,void*) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u16 VAR_2, u16 VAR_3, u32 *VAR_4)
{
 struct hpi_message VAR_5;
 struct hpi_response VAR_6;

 FUNC_1(&VAR_5, &VAR_6, VAR_1,
  VAR_0);
 VAR_5.adapter_index = VAR_2;
 VAR_5.obj_index = VAR_3;

 FUNC_2(&VAR_5, &VAR_6);

 if (VAR_6.error == 0)
  *VAR_4 =
   FUNC_0(VAR_1, VAR_2,
   VAR_3);
 else
  *VAR_4 = 0;

 return VAR_6.error;
}
