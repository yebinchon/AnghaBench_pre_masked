
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ from; scalar_t__ to; } ;
typedef TYPE_1__ RGraphEdge ;



__attribute__((used)) static int FUNC_0(const RGraphEdge *VAR_0, const RGraphEdge *VAR_1) {
 return VAR_0->from == VAR_1->to && VAR_0->to == VAR_1->from? 0: 1;
}
