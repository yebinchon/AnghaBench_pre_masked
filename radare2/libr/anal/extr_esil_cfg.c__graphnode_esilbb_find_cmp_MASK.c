
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ off; scalar_t__ idx; } ;
struct TYPE_6__ {scalar_t__ off; scalar_t__ idx; } ;
struct TYPE_10__ {TYPE_2__ last; TYPE_1__ first; } ;
struct TYPE_9__ {scalar_t__ off; scalar_t__ idx; } ;
struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_3__ RGraphNode ;
typedef TYPE_4__ RAnalEsilEOffset ;
typedef TYPE_5__ RAnalEsilBB ;



__attribute__((used)) static int FUNC_0(void *VAR_0, void *VAR_1, void *VAR_2) {
 RAnalEsilEOffset *VAR_3 = (RAnalEsilEOffset *)VAR_0;
 RGraphNode *VAR_4 = (RGraphNode *)VAR_1;
 RAnalEsilBB *VAR_5 = (RAnalEsilBB *)VAR_4->data;

 if (VAR_3->off < VAR_5->first.off) {
  return -1;
 }
 if (VAR_3->off > VAR_5->last.off) {
  return 1;
 }
 if (VAR_3->idx < VAR_5->first.idx) {
  return -1;
 }
 if (VAR_3->idx > VAR_5->last.idx) {
  return 1;
 }
 return 0;
}
