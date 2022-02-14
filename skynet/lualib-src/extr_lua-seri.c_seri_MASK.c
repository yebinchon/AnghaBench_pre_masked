
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct block {int buffer; struct block* next; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int) ;
 int * FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(lua_State *VAR_1, struct block *VAR_2, int VAR_3) {
 uint8_t * VAR_4 = FUNC_3(VAR_3);
 uint8_t * VAR_5 = VAR_4;
 int VAR_6 = VAR_3;
 while(VAR_3>0) {
  if (VAR_3 >= VAR_0) {
   FUNC_2(VAR_5, VAR_2->buffer, VAR_0);
   VAR_5 += VAR_0;
   VAR_3 -= VAR_0;
   VAR_2 = VAR_2->next;
  } else {
   FUNC_2(VAR_5, VAR_2->buffer, VAR_3);
   break;
  }
 }

 FUNC_1(VAR_1, VAR_4);
 FUNC_0(VAR_1, VAR_6);
}
