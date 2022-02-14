
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hpi_response {int error; } ;
struct hpi_message {int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_2(u16 VAR_2)
{
 struct hpi_message VAR_3;
 struct hpi_response VAR_4;
 FUNC_0(&VAR_3, &VAR_4, VAR_1,
  VAR_0);
 VAR_3.adapter_index = VAR_2;

 FUNC_1(&VAR_3, &VAR_4);

 return VAR_4.error;

}
