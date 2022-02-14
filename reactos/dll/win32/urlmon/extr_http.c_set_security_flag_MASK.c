
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int flags ;
struct TYPE_4__ {int request; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
typedef TYPE_2__ HttpProtocol ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *,int) ;

__attribute__((used)) static inline BOOL FUNC_2(HttpProtocol *VAR_1, DWORD VAR_2)
{
    BOOL VAR_3;

    VAR_3 = FUNC_1(VAR_1->base.request, VAR_0, &VAR_2, sizeof(VAR_2));
    if(!VAR_3)
        FUNC_0("Failed to set security flags: %x\n", VAR_2);

    return VAR_3;
}
