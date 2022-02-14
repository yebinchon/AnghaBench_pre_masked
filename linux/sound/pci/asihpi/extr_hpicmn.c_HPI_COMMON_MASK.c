
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_response {int error; } ;
struct hpi_message {int type; int object; } ;


 int VAR_0 ;


 int FUNC_0 (struct hpi_message*,struct hpi_response*) ;

void FUNC_1(struct hpi_message *VAR_1, struct hpi_response *VAR_2)
{
 switch (VAR_1->type) {
 case 128:
  switch (VAR_1->object) {
  case 129:
   FUNC_0(VAR_1, VAR_2);
   break;
  }
  break;

 default:
  VAR_2->error = VAR_0;
  break;
 }
}
