
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_1__ RGraphNode ;
typedef TYPE_2__ RANode ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1) {
 RGraphNode *VAR_2 = (RGraphNode *)VAR_0;
 RGraphNode *VAR_3 = (RGraphNode *)VAR_1;
 RANode *VAR_4 = (RANode*) VAR_2->data;
 RANode *VAR_5 = (RANode*) VAR_3->data;
 if (VAR_5->y < VAR_4->y) {
  return -1;
 }
 if (VAR_5->y > VAR_4->y) {
  return 1;
 }
 if (VAR_4->x < VAR_5->x) {
  return 1;
 }
 if (VAR_4->x > VAR_5->x) {
  return -1;
 }
 return 0;
}
