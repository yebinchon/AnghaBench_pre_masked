
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {int rbuf; } ;
typedef TYPE_1__ Rihex ;
typedef TYPE_2__ RIODesc ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(RIODesc *VAR_0) {
 if (!VAR_0 || !VAR_0->data) {
  return -1;
 }
 Rihex *VAR_1 = VAR_0->data;
 FUNC_1 (VAR_1->rbuf);
 FUNC_0 (VAR_1);
 VAR_0->data = ((void*)0);
 return 0;
}
