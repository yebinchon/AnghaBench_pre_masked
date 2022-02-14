
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_response {int dummy; } ;
struct hpi_message {int function; } ;




 int FUNC_0 (struct hpi_message*,struct hpi_response*) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

__attribute__((used)) static void FUNC_3(struct hpi_message *VAR_0, struct hpi_response *VAR_1)
{
 switch (VAR_0->function) {
 case 128:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 129:
  FUNC_1(VAR_0, VAR_1);
  break;
 default:
  FUNC_0(VAR_0, VAR_1);
  break;
 }
}
