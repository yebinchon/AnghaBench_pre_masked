
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct closure {int trm; int * path; int * ctx; } ;
struct TYPE_7__ {int y; int x; } ;
typedef TYPE_1__ fz_point ;
typedef int fz_path ;
typedef int fz_context ;
struct TYPE_8__ {int y; int x; } ;
typedef TYPE_2__ FT_Vector ;


 int FUNC_0 (int *,int *,int ,int ,int ,int ,int ,int ) ;
 TYPE_1__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(const FT_Vector *VAR_0, const FT_Vector *VAR_1, const FT_Vector *VAR_2, void *VAR_3)
{
 struct closure *VAR_4 = (struct closure *)VAR_3;
 fz_context *VAR_5 = VAR_4->ctx;
 fz_path *VAR_6 = VAR_4->path;
 fz_point VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_1(VAR_0->x, VAR_0->y, VAR_4->trm);
 VAR_8 = FUNC_1(VAR_1->x, VAR_1->y, VAR_4->trm);
 VAR_9 = FUNC_1(VAR_2->x, VAR_2->y, VAR_4->trm);

 FUNC_0(VAR_5, VAR_6, VAR_7.x, VAR_7.y, VAR_8.x, VAR_8.y, VAR_9.x, VAR_9.y);
 return 0;
}
