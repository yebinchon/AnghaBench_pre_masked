
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* diff; } ;
struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_2__ RAnalFunction ;



__attribute__((used)) static int FUNC_0(const RAnalFunction *VAR_0, const RAnalFunction *VAR_1) {
 return VAR_0 && VAR_1 && VAR_0->diff->type && VAR_1->diff->type && VAR_0->diff->type > VAR_1->diff->type;
}
