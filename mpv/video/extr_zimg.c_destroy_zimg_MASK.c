
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_zimg_context {int zimg_dst; int zimg_src; int * zimg_graph; int * zimg_tmp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mp_zimg_context *VAR_0)
{
    FUNC_1(VAR_0->zimg_tmp);
    VAR_0->zimg_tmp = ((void*)0);
    FUNC_2(VAR_0->zimg_graph);
    VAR_0->zimg_graph = ((void*)0);
    FUNC_0(&VAR_0->zimg_src);
    FUNC_0(&VAR_0->zimg_dst);
}
