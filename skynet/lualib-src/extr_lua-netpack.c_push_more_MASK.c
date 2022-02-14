
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int size; int buffer; } ;
struct uncomplete {int read; TYPE_1__ pack; int header; } ;
typedef int lua_State ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *,int,int *,int,int) ;
 int FUNC_2 (int *) ;
 struct uncomplete* FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(lua_State *VAR_0, int VAR_1, uint8_t *VAR_2, int VAR_3) {
 if (VAR_3 == 1) {
  struct uncomplete * VAR_4 = FUNC_3(VAR_0, VAR_1);
  VAR_4->read = -1;
  VAR_4->header = *VAR_2;
  return;
 }
 int VAR_5 = FUNC_2(VAR_2);
 VAR_2 += 2;
 VAR_3 -= 2;

 if (VAR_3 < VAR_5) {
  struct uncomplete * VAR_6 = FUNC_3(VAR_0, VAR_1);
  VAR_6->read = VAR_3;
  VAR_6->pack.size = VAR_5;
  VAR_6->pack.buffer = FUNC_4(VAR_5);
  FUNC_0(VAR_6->pack.buffer, VAR_2, VAR_3);
  return;
 }
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5, 1);

 VAR_2 += VAR_5;
 VAR_3 -= VAR_5;
 if (VAR_3 > 0) {
  FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3);
 }
}
