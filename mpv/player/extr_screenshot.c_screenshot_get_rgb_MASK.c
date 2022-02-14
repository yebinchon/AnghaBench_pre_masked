
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image {int dummy; } ;
struct MPContext {int log; int global; } ;


 int VAR_0 ;
 struct mp_image* FUNC_0 (struct mp_image*,int ,int ,int ) ;
 struct mp_image* FUNC_1 (struct MPContext*,int,int) ;
 int FUNC_2 (struct mp_image*) ;

__attribute__((used)) static struct mp_image *FUNC_3(struct MPContext *VAR_1, int VAR_2)
{
    struct mp_image *VAR_3 = FUNC_1(VAR_1, VAR_2, 0);
    if (!VAR_3)
        return ((void*)0);
    struct mp_image *VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_1->global,
                                         VAR_1->log);
    FUNC_2(VAR_3);
    return VAR_4;
}
