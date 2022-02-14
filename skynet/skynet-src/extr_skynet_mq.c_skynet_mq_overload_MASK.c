
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message_queue {int overload; } ;



int
FUNC_0(struct message_queue *VAR_0) {
 if (VAR_0->overload) {
  int VAR_1 = VAR_0->overload;
  VAR_0->overload = 0;
  return VAR_1;
 }
 return 0;
}
