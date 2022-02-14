
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_response {int dummy; } ;
struct hpi_message {int function; int adapter_index; } ;


 int FUNC_0 (int ,void*) ;



 int VAR_0 ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;
 int FUNC_3 (struct hpi_message*,struct hpi_response*,int ,int const) ;
 int FUNC_4 (struct hpi_message*,struct hpi_response*) ;

__attribute__((used)) static void FUNC_5(struct hpi_message *VAR_1, struct hpi_response *VAR_2,
 void *VAR_3)
{
 switch (VAR_1->function) {
 case 128:
  FUNC_2(VAR_1, VAR_2);
  break;
 case 130:
  FUNC_1(VAR_1, VAR_2);
  break;
 case 129:
  FUNC_0(VAR_1->adapter_index, VAR_3);
  {
   struct hpi_message VAR_4;
   struct hpi_response VAR_5;
   FUNC_3(&VAR_4, &VAR_5, VAR_0,
    130);
   VAR_4.adapter_index = VAR_1->adapter_index;
   FUNC_4(&VAR_4, &VAR_5);
  }
  FUNC_4(VAR_1, VAR_2);
  break;

 default:
  FUNC_4(VAR_1, VAR_2);
  break;
 }
}
