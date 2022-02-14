
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_native_resource {char const* name; void* data; } ;
struct ra {int num_native_resources; int native_resources; } ;


 int FUNC_0 (struct ra*,int ,int ,struct ra_native_resource) ;

void FUNC_1(struct ra *VAR_0, const char *VAR_1, void *VAR_2)
{
    struct ra_native_resource VAR_3 = {
        .name = VAR_1,
        .data = VAR_2,
    };
    FUNC_0(VAR_0, VAR_0->native_resources, VAR_0->num_native_resources, VAR_3);
}
