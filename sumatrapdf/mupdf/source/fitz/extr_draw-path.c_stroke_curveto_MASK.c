
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float x; float y; } ;
struct TYPE_5__ {TYPE_1__ cur; } ;
typedef TYPE_2__ sctx ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_2__*,float,float,float,float,float,float,float,float,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, void *VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7)
{
 sctx *VAR_8 = (sctx *)VAR_1;

 FUNC_0(VAR_0, VAR_8, VAR_8->cur.x, VAR_8->cur.y, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, 0);
 VAR_8->cur.x = VAR_6;
 VAR_8->cur.y = VAR_7;
}
