
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_response {scalar_t__ error; } ;
struct hpi_message {scalar_t__ type; int object; scalar_t__ adapter_index; int function; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct hpi_message*) ;
 int FUNC_1 (struct hpi_response*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;





 scalar_t__ VAR_7 ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*,void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hpi_response*,int,int ,int ) ;
 int FUNC_5 (struct hpi_message*,struct hpi_response*) ;
 int FUNC_6 (struct hpi_message*,struct hpi_response*,void*) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (struct hpi_message*,struct hpi_response*) ;
 int FUNC_8 (struct hpi_message*,struct hpi_response*,void*) ;
 int FUNC_9 (struct hpi_message*,struct hpi_response*,void*) ;

void FUNC_10(struct hpi_message *VAR_9, struct hpi_response *VAR_10,
 void *VAR_11)
{

 if (VAR_8)
  FUNC_0(VAR_0, VAR_9);

 if (VAR_9->type != VAR_7) {
  FUNC_4(VAR_10, VAR_9->object, VAR_9->function,
   VAR_5);
  return;
 }

 if (VAR_9->adapter_index >= VAR_6
  && VAR_9->adapter_index != VAR_1) {
  FUNC_4(VAR_10, VAR_9->object, VAR_9->function,
   VAR_3);
  return;
 }

 switch (VAR_9->object) {
 case 128:
  FUNC_9(VAR_9, VAR_10, VAR_11);
  break;

 case 132:
  FUNC_2(VAR_9, VAR_10, VAR_11);
  break;

 case 130:
  FUNC_7(VAR_9, VAR_10);
  break;

 case 129:
  FUNC_8(VAR_9, VAR_10, VAR_11);
  break;

 case 131:
  FUNC_6(VAR_9, VAR_10, VAR_11);
  break;

 default:
  FUNC_5(VAR_9, VAR_10);
  break;
 }

 if (VAR_8)
  FUNC_1(VAR_10);

 if (VAR_10->error >= VAR_4) {
  FUNC_3(VAR_2);
  VAR_8 = 0;
 }
}
