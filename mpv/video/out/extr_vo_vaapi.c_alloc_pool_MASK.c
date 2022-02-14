
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool_alloc_ctx {int rt_format; int vaapi; } ;
struct mp_image {int dummy; } ;


 int VAR_0 ;
 struct mp_image* FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static struct mp_image *FUNC_1(void *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    struct pool_alloc_ctx *VAR_5 = VAR_1;
    if (VAR_2 != VAR_0)
        return ((void*)0);

    return FUNC_0(VAR_5->vaapi, VAR_5->rt_format, VAR_3, VAR_4);
}
