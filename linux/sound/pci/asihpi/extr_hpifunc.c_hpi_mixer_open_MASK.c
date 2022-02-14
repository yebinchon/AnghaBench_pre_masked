
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct hpi_response {scalar_t__ error; } ;
struct hpi_message {scalar_t__ adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u16 VAR_2, u32 *VAR_3)
{
 struct hpi_message VAR_4;
 struct hpi_response VAR_5;
 FUNC_1(&VAR_4, &VAR_5, VAR_1, VAR_0);
 VAR_4.adapter_index = VAR_2;

 FUNC_2(&VAR_4, &VAR_5);

 if (VAR_5.error == 0)
  *VAR_3 =
   FUNC_0(VAR_1, VAR_2,
   0);
 else
  *VAR_3 = 0;
 return VAR_5.error;
}
