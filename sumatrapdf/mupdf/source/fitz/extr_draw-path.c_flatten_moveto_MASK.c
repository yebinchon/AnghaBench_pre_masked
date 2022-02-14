
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_5__ {float x; float y; } ;
struct TYPE_4__ {float x; float y; } ;
struct TYPE_6__ {int rast; TYPE_2__ b; TYPE_1__ c; int ctm; } ;
typedef TYPE_3__ flatten_arg ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ,float,float,float,float) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, void *VAR_1, float VAR_2, float VAR_3)
{
 flatten_arg *VAR_4 = (flatten_arg *)VAR_1;


 if (VAR_4->c.x != VAR_4->b.x || VAR_4->c.y != VAR_4->b.y)
  FUNC_1(VAR_0, VAR_4->rast, VAR_4->ctm, VAR_4->c.x, VAR_4->c.y, VAR_4->b.x, VAR_4->b.y);
 VAR_4->c.x = VAR_4->b.x = VAR_2;
 VAR_4->c.y = VAR_4->b.y = VAR_3;

 FUNC_0(VAR_0, VAR_4->rast);
}
