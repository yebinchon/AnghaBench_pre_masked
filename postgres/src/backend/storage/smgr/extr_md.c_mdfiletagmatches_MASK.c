
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dbNode; } ;
struct TYPE_6__ {TYPE_1__ rnode; } ;
typedef TYPE_2__ FileTag ;



bool
FUNC_0(const FileTag *VAR_0, const FileTag *VAR_1)
{






 return VAR_0->rnode.dbNode == VAR_1->rnode.dbNode;
}
