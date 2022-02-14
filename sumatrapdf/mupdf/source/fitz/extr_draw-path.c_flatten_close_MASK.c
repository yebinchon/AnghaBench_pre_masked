
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {int y; int x; } ;
struct TYPE_5__ {int y; int x; } ;
struct TYPE_6__ {TYPE_1__ b; TYPE_2__ c; int ctm; int rast; } ;
typedef TYPE_3__ flatten_arg ;


 int FUNC_0 (int *,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, void *VAR_1)
{
 flatten_arg *VAR_2 = (flatten_arg *)VAR_1;

 FUNC_0(VAR_0, VAR_2->rast, VAR_2->ctm, VAR_2->c.x, VAR_2->c.y, VAR_2->b.x, VAR_2->b.y);
 VAR_2->c.x = VAR_2->b.x;
 VAR_2->c.y = VAR_2->b.y;
}
