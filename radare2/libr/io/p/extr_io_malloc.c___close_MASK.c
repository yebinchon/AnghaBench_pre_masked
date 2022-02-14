
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {struct TYPE_5__* buf; } ;
typedef TYPE_1__ RIOMalloc ;
typedef TYPE_2__ RIODesc ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(RIODesc *VAR_0) {
 RIOMalloc *VAR_1;
 if (!VAR_0 || !VAR_0->data) {
  return -1;
 }
 VAR_1 = VAR_0->data;
 FUNC_0 (VAR_1->buf);
 FUNC_0 (VAR_0->data);
 return 0;
}
