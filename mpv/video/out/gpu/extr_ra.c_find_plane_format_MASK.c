
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_format {int dummy; } ;
struct ra {int dummy; } ;
typedef enum mp_component_type { ____Placeholder_mp_component_type } mp_component_type ;




 struct ra_format const* FUNC_0 (struct ra*,int,int) ;
 struct ra_format const* FUNC_1 (struct ra*,int,int) ;
 struct ra_format* FUNC_2 (struct ra*,int,int) ;

__attribute__((used)) static const struct ra_format *FUNC_3(struct ra *VAR_0, int VAR_1,
                                                 int VAR_2,
                                                 enum mp_component_type VAR_3)
{
    switch (VAR_3) {
    case 128: {
        const struct ra_format *VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
        if (VAR_4)
            return VAR_4;
        return FUNC_1(VAR_0, VAR_1, VAR_2);
    }
    case 129:
        return FUNC_0(VAR_0, VAR_1, VAR_2);
    default: return ((void*)0);
    }
}
