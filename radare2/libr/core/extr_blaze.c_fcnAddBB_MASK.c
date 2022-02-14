
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bbs; int ends; int size; int score; } ;
typedef TYPE_1__ fcn_t ;
struct TYPE_7__ {scalar_t__ type; scalar_t__ start; scalar_t__ end; scalar_t__ score; } ;
typedef TYPE_2__ bb_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static bool FUNC_2 (fcn_t *VAR_1, bb_t* VAR_2) {
 if (!VAR_1) {
  FUNC_0 ("No function given to add a basic block\n");
  return 0;
 }
 VAR_1->score += VAR_2->score;
 VAR_1->size += VAR_2->end - VAR_2->start;
 if (VAR_2->type == VAR_0) {
  VAR_1->ends++;
 }
 if (!VAR_1->bbs) {
  FUNC_0 ("Block list not initialized\n");
  return 0;
 }
 FUNC_1 (VAR_1->bbs, VAR_2);
 return 1;
}
