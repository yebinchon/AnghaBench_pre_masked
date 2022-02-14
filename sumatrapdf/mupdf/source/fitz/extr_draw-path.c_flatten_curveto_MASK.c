
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_3__ {float x; float y; } ;
struct TYPE_4__ {TYPE_1__ c; int flatness; int ctm; int rast; } ;
typedef TYPE_2__ flatten_arg ;


 int FUNC_0 (int *,int ,int ,int ,float,float,float,float,float,float,float,float,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, void *VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7)
{
 flatten_arg *VAR_8 = (flatten_arg *)VAR_1;

 FUNC_0(VAR_0, VAR_8->rast, VAR_8->ctm, VAR_8->flatness, VAR_8->c.x, VAR_8->c.y, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, 0);
 VAR_8->c.x = VAR_6;
 VAR_8->c.y = VAR_7;
}
