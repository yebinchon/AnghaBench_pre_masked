
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct hpi_response {size_t size; size_t object; size_t function; size_t error; scalar_t__ version; scalar_t__ specific_error; int type; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (struct hpi_response*,int ,int) ;
 size_t* VAR_2 ;

void FUNC_2(struct hpi_response *VAR_3, u16 VAR_4, u16 VAR_5,
 u16 VAR_6)
{
 u16 VAR_7;

 if ((VAR_4 > 0) && (VAR_4 <= VAR_0)) {
  VAR_4 = FUNC_0(VAR_4, VAR_0 + 1);
  VAR_7 = VAR_2[VAR_4];
 } else {
  VAR_7 = sizeof(*VAR_3);
 }

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->size = VAR_7;
 VAR_3->type = VAR_1;
 VAR_3->object = VAR_4;
 VAR_3->function = VAR_5;
 VAR_3->error = VAR_6;
 VAR_3->specific_error = 0;
 VAR_3->version = 0;
}
