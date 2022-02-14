
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct feat_fd {TYPE_1__* ph; } ;
struct TYPE_2__ {scalar_t__ needs_swap; } ;


 int FUNC_0 (struct feat_fd*,int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct feat_fd *VAR_0, u32 *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1, sizeof(*VAR_1));
 if (VAR_2)
  return VAR_2;

 if (VAR_0->ph->needs_swap)
  *VAR_1 = FUNC_1(*VAR_1);
 return 0;
}
