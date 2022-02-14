
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ConsControl {int tostore; int na; int v; } ;
struct TYPE_4__ {int fs; } ;
typedef TYPE_1__ LexState ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_2 (LexState *VAR_1, struct ConsControl *VAR_2) {

  FUNC_1(VAR_1, &VAR_2->v);
  FUNC_0(VAR_1->fs, VAR_2->na, VAR_0, "items in a constructor");
  VAR_2->na++;
  VAR_2->tostore++;
}
