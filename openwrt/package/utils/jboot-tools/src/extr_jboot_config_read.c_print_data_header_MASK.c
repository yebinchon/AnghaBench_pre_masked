
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct data_header {int id; int type; int unknown; int length; int* data; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct data_header *VAR_0)
{
 FUNC_0("id: 0x%02X "
        "type: 0x%02X "
        "unknown: 0x%04X "
        "length: 0x%04X\n"
        "data: ",
        VAR_0->id,
        VAR_0->type,
        VAR_0->unknown, VAR_0->length);

 for (uint16_t VAR_1 = 0; VAR_1 < VAR_0->length; VAR_1++)
  FUNC_0("%02X ", VAR_0->data[VAR_1]);

 FUNC_0("\n");

}
