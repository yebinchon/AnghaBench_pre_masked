
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vsock_sock {TYPE_1__* owner; scalar_t__ trusted; } ;
struct TYPE_2__ {int uid; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct vsock_sock *VAR_0, u32 VAR_1)
{
 return VAR_0->trusted ||
        FUNC_0(VAR_1, VAR_0->owner->uid);
}
