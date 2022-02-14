
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* io; } ;
struct TYPE_12__ {TYPE_3__ iob; } ;
struct TYPE_11__ {int bfvm; } ;
struct TYPE_9__ {TYPE_1__* desc; } ;
struct TYPE_8__ {TYPE_4__* data; } ;
typedef TYPE_4__ RIOBdescbg ;
typedef TYPE_5__ RDebug ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static bool FUNC_2(RDebug *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
 if (!FUNC_1 (VAR_0)) {
  return 0;
 }
 RIOBdescbg *VAR_4 = VAR_0->iob.io->desc->data;
 if (VAR_4) {
  FUNC_0 (VAR_4->bfvm);
 }
 return 1;
}
