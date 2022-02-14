
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct closure {int trm; int * path; int * ctx; } ;
struct TYPE_6__ {int y; int x; } ;
typedef TYPE_1__ fz_point ;
typedef int fz_path ;
typedef int fz_context ;
struct TYPE_7__ {int y; int x; } ;
typedef TYPE_2__ FT_Vector ;


 int FUNC_0 (int *,int *,int ,int ,int ,int ) ;
 TYPE_1__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(const FT_Vector *VAR_0, const FT_Vector *VAR_1, void *VAR_2)
{
 struct closure *VAR_3 = (struct closure *)VAR_2;
 fz_context *VAR_4 = VAR_3->ctx;
 fz_path *VAR_5 = VAR_3->path;
 fz_point VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_0->x, VAR_0->y, VAR_3->trm);
 VAR_7 = FUNC_1(VAR_1->x, VAR_1->y, VAR_3->trm);

 FUNC_0(VAR_4, VAR_5, VAR_6.x, VAR_6.y, VAR_7.x, VAR_7.y);
 return 0;
}
