
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct queue {char** queue; size_t tail; scalar_t__ head; int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*,int,int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void *
FUNC_8(void * VAR_2) {
 struct queue * VAR_3 = VAR_2;
 char VAR_4[1024];
 while (!FUNC_1(VAR_1)) {
  if (FUNC_2(VAR_4,sizeof(VAR_4),VAR_1) == ((void*)0)) {

   FUNC_0(1);
  }
  int VAR_5 = FUNC_7(VAR_4) -1;

  char * VAR_6 = FUNC_3(VAR_5+1);
  FUNC_4(VAR_6, VAR_4, VAR_5);
  VAR_6[VAR_5] = 0;

  FUNC_5(&VAR_3->lock);
  VAR_3->queue[VAR_3->tail] = VAR_6;

  if (++VAR_3->tail >= VAR_0) {
   VAR_3->tail = 0;
  }
  if (VAR_3->head == VAR_3->tail) {

   FUNC_0(1);
  }
  FUNC_6(&VAR_3->lock);
 }
 return ((void*)0);
}
