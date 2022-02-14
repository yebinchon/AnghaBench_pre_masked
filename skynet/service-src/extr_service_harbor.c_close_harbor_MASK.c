
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave {int * queue; scalar_t__ fd; int status; } ;
struct harbor {int ctx; struct slave* s; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct harbor *VAR_1, int VAR_2) {
 struct slave *VAR_3 = &VAR_1->s[VAR_2];
 VAR_3->status = VAR_0;
 if (VAR_3->fd) {
  FUNC_1(VAR_1->ctx, VAR_3->fd);
 }
 if (VAR_3->queue) {
  FUNC_0(VAR_3->queue);
  VAR_3->queue = ((void*)0);
 }
}
