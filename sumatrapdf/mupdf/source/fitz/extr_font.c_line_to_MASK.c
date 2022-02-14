
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct closure {int trm; int * path; int * ctx; } ;
struct TYPE_5__ {int y; int x; } ;
typedef TYPE_1__ fz_point ;
typedef int fz_path ;
typedef int fz_context ;
struct TYPE_6__ {int y; int x; } ;
typedef TYPE_2__ FT_Vector ;


 int FUNC_0 (int *,int *,int ,int ) ;
 TYPE_1__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(const FT_Vector *VAR_0, void *VAR_1)
{
 struct closure *VAR_2 = (struct closure *)VAR_1;
 fz_context *VAR_3 = VAR_2->ctx;
 fz_path *VAR_4 = VAR_2->path;
 fz_point VAR_5;

 VAR_5 = FUNC_1(VAR_0->x, VAR_0->y, VAR_2->trm);
 FUNC_0(VAR_3, VAR_4, VAR_5.x, VAR_5.y);
 return 0;
}
