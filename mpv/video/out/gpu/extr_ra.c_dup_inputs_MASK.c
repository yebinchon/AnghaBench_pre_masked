
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_renderpass_input {int name; } ;
typedef int inputs ;


 struct ra_renderpass_input* FUNC_0 (void*,void*,int) ;
 int FUNC_1 (struct ra_renderpass_input*,int ) ;

__attribute__((used)) static struct ra_renderpass_input *FUNC_2(void *VAR_0,
            const struct ra_renderpass_input *VAR_1, int VAR_2)
{
    struct ra_renderpass_input *VAR_3 =
        FUNC_0(VAR_0, (void *)VAR_1, VAR_2 * sizeof(VAR_1[0]));
    for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        VAR_3[VAR_4].name = FUNC_1(VAR_3, VAR_3[VAR_4].name);
    return VAR_3;
}
