
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int maps; int va; } ;
struct TYPE_15__ {TYPE_2__* print; int offset; TYPE_6__* io; int config; } ;
struct TYPE_14__ {int itv; } ;
struct TYPE_12__ {int (* get_size ) (int*) ;} ;
struct TYPE_13__ {TYPE_1__ consbind; } ;
typedef int SdbListIter ;
typedef TYPE_2__ RPrint ;
typedef TYPE_3__ RIOMap ;
typedef TYPE_4__ RCore ;


 int * FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 TYPE_3__* FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_6__*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int*) ;

__attribute__((used)) static bool FUNC_11 (RCore *VAR_0, int VAR_1) {
 RIOMap *VAR_2;
 int VAR_3 = -1;
 switch (VAR_1) {
 case 'g':
  if (VAR_0->io->va) {
   RIOMap *VAR_4 = FUNC_5 (VAR_0->io, VAR_0->offset);
   if (!VAR_4) {
    SdbListIter *VAR_5 = FUNC_2 (VAR_0->io->maps);
    if (VAR_5) {
     VAR_4 = FUNC_1 (VAR_5);
    }
   }
   if (VAR_4) {
    FUNC_4 (VAR_0, FUNC_7 (VAR_4->itv), 1);
   }
  } else {
   FUNC_4 (VAR_0, 0, 1);
  }
  FUNC_6 (VAR_0->io, VAR_0->offset, FUNC_9 (VAR_0->print));
  return 1;
 case 'G':
  VAR_2 = FUNC_5 (VAR_0->io, VAR_0->offset);
  if (!VAR_2) {
   SdbListIter *VAR_6 = FUNC_0 (VAR_0->io->maps);
   if (VAR_6) {
    VAR_2 = FUNC_1 (VAR_6);
   }
  }
  if (VAR_2) {
   RPrint *VAR_7 = VAR_0->print;
   int VAR_8;
   if (!VAR_7->consbind.get_size) {
    break;
   }
   (void)VAR_7->consbind.get_size (&VAR_8);
   int VAR_9 = FUNC_3 (VAR_0->config, "hex.cols");
   VAR_3 = FUNC_4 (VAR_0, FUNC_8 (VAR_2->itv) - (VAR_8 - 2) * VAR_9, 1);
  }
  if (VAR_3 != -1) {
   FUNC_6 (VAR_0->io, VAR_0->offset, FUNC_9 (VAR_0->print));
  }
  return 1;
 }
 return 0;
}
