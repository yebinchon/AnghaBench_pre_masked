
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_rasterizer ;
struct TYPE_3__ {struct TYPE_3__* table; struct TYPE_3__* index; } ;
typedef TYPE_1__ fz_edgebuffer ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, fz_rasterizer *VAR_1)
{
 fz_edgebuffer *VAR_2 = (fz_edgebuffer *)VAR_1;

 if (VAR_2)
 {
  FUNC_0(VAR_0, VAR_2->index);
  FUNC_0(VAR_0, VAR_2->table);
 }
 FUNC_0(VAR_0, VAR_2);
}
