
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_response {int error; } ;
struct hpi_message {int function; } ;


 int VAR_0 ;

 int FUNC_0 (struct hpi_message*,struct hpi_response*) ;

__attribute__((used)) static void FUNC_1(struct hpi_message *VAR_1, struct hpi_response *VAR_2)
{
 switch (VAR_1->function) {
 case 128:
  FUNC_0(VAR_1, VAR_2);
  break;
 default:
  VAR_2->error = VAR_0;
  break;
 }
}
