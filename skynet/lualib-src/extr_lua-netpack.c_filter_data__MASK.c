
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_2__ {int size; void* buffer; } ;
struct uncomplete {int read; int header; TYPE_1__ pack; struct uncomplete* next; } ;
struct queue {struct uncomplete** hash; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct uncomplete* FUNC_1 (struct queue*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (int *,int ) ;
 struct queue* FUNC_6 (int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*,void**,int) ;
 int FUNC_9 (int *,int,void**,int,int) ;
 int FUNC_10 (int *,int,void**,int) ;
 int FUNC_11 (void**) ;
 struct uncomplete* FUNC_12 (int *,int) ;
 int FUNC_13 (struct uncomplete*) ;
 void* FUNC_14 (int) ;

__attribute__((used)) static int
FUNC_15(lua_State *VAR_2, int VAR_3, uint8_t * VAR_4, int VAR_5) {
 struct queue *VAR_6 = FUNC_6(VAR_2,1);
 struct uncomplete * VAR_7 = FUNC_1(VAR_6, VAR_3);
 if (VAR_7) {

  if (VAR_7->read < 0) {

   FUNC_0(VAR_7->read == -1);
   int VAR_8 = *VAR_4;
   VAR_8 |= VAR_7->header << 8 ;
   ++VAR_4;
   --VAR_5;
   VAR_7->pack.size = VAR_8;
   VAR_7->pack.buffer = FUNC_14(VAR_8);
   VAR_7->read = 0;
  }
  int VAR_9 = VAR_7->pack.size - VAR_7->read;
  if (VAR_5 < VAR_9) {
   FUNC_8(VAR_7->pack.buffer + VAR_7->read, VAR_4, VAR_5);
   VAR_7->read += VAR_5;
   int VAR_10 = FUNC_2(VAR_3);
   VAR_7->next = VAR_6->hash[VAR_10];
   VAR_6->hash[VAR_10] = VAR_7;
   return 1;
  }
  FUNC_8(VAR_7->pack.buffer + VAR_7->read, VAR_4, VAR_9);
  VAR_4 += VAR_9;
  VAR_5 -= VAR_9;
  if (VAR_5 == 0) {
   FUNC_5(VAR_2, FUNC_7(VAR_0));
   FUNC_3(VAR_2, VAR_3);
   FUNC_4(VAR_2, VAR_7->pack.buffer);
   FUNC_3(VAR_2, VAR_7->pack.size);
   FUNC_13(VAR_7);
   return 5;
  }

  FUNC_9(VAR_2, VAR_3, VAR_7->pack.buffer, VAR_7->pack.size, 0);
  FUNC_13(VAR_7);
  FUNC_10(VAR_2, VAR_3, VAR_4, VAR_5);
  FUNC_5(VAR_2, FUNC_7(VAR_1));
  return 2;
 } else {
  if (VAR_5 == 1) {
   struct uncomplete * VAR_11 = FUNC_12(VAR_2, VAR_3);
   VAR_11->read = -1;
   VAR_11->header = *VAR_4;
   return 1;
  }
  int VAR_12 = FUNC_11(VAR_4);
  VAR_4+=2;
  VAR_5-=2;

  if (VAR_5 < VAR_12) {
   struct uncomplete * VAR_13 = FUNC_12(VAR_2, VAR_3);
   VAR_13->read = VAR_5;
   VAR_13->pack.size = VAR_12;
   VAR_13->pack.buffer = FUNC_14(VAR_12);
   FUNC_8(VAR_13->pack.buffer, VAR_4, VAR_5);
   return 1;
  }
  if (VAR_5 == VAR_12) {

   FUNC_5(VAR_2, FUNC_7(VAR_0));
   FUNC_3(VAR_2, VAR_3);
   void * VAR_14 = FUNC_14(VAR_12);
   FUNC_8(VAR_14, VAR_4, VAR_5);
   FUNC_4(VAR_2, VAR_14);
   FUNC_3(VAR_2, VAR_5);
   return 5;
  }

  FUNC_9(VAR_2, VAR_3, VAR_4, VAR_12, 1);
  VAR_4 += VAR_12;
  VAR_5 -= VAR_12;
  FUNC_10(VAR_2, VAR_3, VAR_4, VAR_5);
  FUNC_5(VAR_2, FUNC_7(VAR_1));
  return 2;
 }
}
