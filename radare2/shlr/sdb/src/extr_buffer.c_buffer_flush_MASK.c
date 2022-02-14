
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p; int x; int fd; int op; } ;
typedef TYPE_1__ buffer ;


 int FUNC_0 (int ,int ,int ,int) ;

int FUNC_1(buffer *VAR_0) {
 int VAR_1 = VAR_0->p;
 if (!VAR_1) {
  return 1;
 }
 VAR_0->p = 0;
 return FUNC_0 (VAR_0->op, VAR_0->fd, VAR_0->x, VAR_1);
}
