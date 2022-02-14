
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cred {int * security; } ;
typedef int gfp_t ;
struct TYPE_2__ {scalar_t__ lbs_cred; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int * FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct cred *VAR_2, gfp_t VAR_3)
{
 if (VAR_1.lbs_cred == 0) {
  VAR_2->security = ((void*)0);
  return 0;
 }

 VAR_2->security = FUNC_0(VAR_1.lbs_cred, VAR_3);
 if (VAR_2->security == ((void*)0))
  return -VAR_0;
 return 0;
}
