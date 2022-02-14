
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hpi_response {scalar_t__ type; scalar_t__ object; scalar_t__ function; } ;
struct hpi_message {scalar_t__ object; scalar_t__ function; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

u16 FUNC_1(struct hpi_message *VAR_3, struct hpi_response *VAR_4)
{
 if (VAR_4->type != VAR_2) {
  FUNC_0(VAR_0, "header type %d invalid\n", VAR_4->type);
  return VAR_1;
 }

 if (VAR_4->object != VAR_3->object) {
  FUNC_0(VAR_0, "header object %d invalid\n",
   VAR_4->object);
  return VAR_1;
 }

 if (VAR_4->function != VAR_3->function) {
  FUNC_0(VAR_0, "header function %d invalid\n",
   VAR_4->function);
  return VAR_1;
 }

 return 0;
}
