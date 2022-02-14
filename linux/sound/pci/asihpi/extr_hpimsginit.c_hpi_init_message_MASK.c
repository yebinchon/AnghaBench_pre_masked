
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct hpi_message {size_t size; size_t object; size_t function; int adapter_index; scalar_t__ version; int type; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (size_t,size_t) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct hpi_message*,int ,size_t) ;
 size_t* VAR_5 ;

__attribute__((used)) static void FUNC_2(struct hpi_message *VAR_6, u16 VAR_7,
 u16 VAR_8)
{
 u16 VAR_9;

 if ((VAR_7 > 0) && (VAR_7 <= VAR_1)) {
  VAR_7 = FUNC_0(VAR_7, VAR_1 + 1);
  VAR_9 = VAR_5[VAR_7];
 } else {
  VAR_9 = sizeof(*VAR_6);
 }

 FUNC_1(VAR_6, 0, VAR_9);
 VAR_6->size = VAR_9;

 if (VAR_4)
  VAR_6->type = VAR_3;
 else
  VAR_6->type = VAR_2;
 VAR_6->object = VAR_7;
 VAR_6->function = VAR_8;
 VAR_6->version = 0;
 VAR_6->adapter_index = VAR_0;

}
