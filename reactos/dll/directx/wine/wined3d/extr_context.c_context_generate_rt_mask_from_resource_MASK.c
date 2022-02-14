
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_resource {scalar_t__ type; } ;
typedef unsigned int DWORD ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct wined3d_resource*) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static inline DWORD FUNC_4(struct wined3d_resource *VAR_1)
{
    if (VAR_1->type != VAR_0)
    {
        FUNC_0("Not implemented for %s resources.\n", FUNC_1(VAR_1->type));
        return 0;
    }

    return (1u << 31) | FUNC_3(FUNC_2(VAR_1));
}
