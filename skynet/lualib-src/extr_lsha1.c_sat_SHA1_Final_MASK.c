
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned char uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int* count; int* state; unsigned char* buffer; } ;
typedef TYPE_1__ SHA1_CTX ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_2(SHA1_CTX* VAR_1, uint8_t VAR_2[VAR_0])
{
 uint32_t VAR_3;
 uint8_t VAR_4[8];

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  VAR_4[VAR_3] = (unsigned char)((VAR_1->count[(VAR_3 >= 4 ? 0 : 1)]
   >> ((3-(VAR_3 & 3)) * 8) ) & 255);
 }
 FUNC_1(VAR_1, (uint8_t *)"\200", 1);
 while ((VAR_1->count[0] & 504) != 448) {
  FUNC_1(VAR_1, (uint8_t *)"\0", 1);
 }
 FUNC_1(VAR_1, VAR_4, 8);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2[VAR_3] = (uint8_t)
   ((VAR_1->state[VAR_3>>2] >> ((3-(VAR_3 & 3)) * 8) ) & 255);
 }


 VAR_3 = 0;
 FUNC_0(VAR_1->buffer, 0, 64);
 FUNC_0(VAR_1->state, 0, 20);
 FUNC_0(VAR_1->count, 0, 8);
 FUNC_0(VAR_4, 0, 8);
}
