
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* io; } ;
struct TYPE_11__ {TYPE_3__ iob; } ;
struct TYPE_10__ {int bfvm; } ;
struct TYPE_8__ {TYPE_1__* desc; } ;
struct TYPE_7__ {TYPE_4__* data; } ;
typedef TYPE_4__ RIOBdescbg ;
typedef TYPE_5__ RDebug ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(RDebug *VAR_0) {
 RIOBdescbg *VAR_1 = VAR_0->iob.io->desc->data;
 int VAR_2, VAR_3 = 0;
 for (;;) {
  VAR_2 = FUNC_1 (VAR_1->bfvm);
  if (VAR_3 != 0 && VAR_2 != VAR_3) {
   break;
  }
  if (FUNC_0 (VAR_1->bfvm)) {
   break;
  }
  FUNC_2 (VAR_1->bfvm, 0);
  VAR_3 = VAR_2;
 }
 return 1;
}
