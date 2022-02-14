
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* buf; int bfvm; } ;
struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ RIODesc ;
typedef TYPE_2__ RIOBfdbg ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(RIODesc *VAR_0) {
 RIOBfdbg *VAR_1;
 if (!VAR_0 || !VAR_0->data) {
  return -1;
 }
 VAR_1 = VAR_0->data;
 FUNC_1 (VAR_1->bfvm);
 FUNC_0 (VAR_1->buf);
 FUNC_0 (VAR_0->data);
 return 0;
}
