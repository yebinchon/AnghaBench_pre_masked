
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_context {unsigned int* isStateDirty; } ;
typedef int DWORD ;
typedef unsigned int BYTE ;
typedef unsigned int BOOL ;


 int VAR_0 ;

__attribute__((used)) static inline BOOL FUNC_0(const struct wined3d_context *VAR_1, DWORD VAR_2)
{
    DWORD VAR_3 = VAR_2 / (sizeof(*VAR_1->isStateDirty) * VAR_0);
    BYTE VAR_4 = VAR_2 & ((sizeof(*VAR_1->isStateDirty) * VAR_0) - 1);
    return VAR_1->isStateDirty[VAR_3] & (1u << VAR_4);
}
