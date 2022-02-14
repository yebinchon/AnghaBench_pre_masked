
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hpi_message_header {int version; scalar_t__ function; scalar_t__ object; int type; scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hpi_message_header*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hpi_message_header *VAR_2, u16 VAR_3,
 u16 VAR_4, u16 VAR_5)
{
 FUNC_0(VAR_2, 0, VAR_3);
 if ((VAR_4 > 0) && (VAR_4 <= VAR_0)) {
  VAR_2->size = VAR_3;
  VAR_2->type = VAR_1;
  VAR_2->object = VAR_4;
  VAR_2->function = VAR_5;
  VAR_2->version = 1;

 }
}
