
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;
struct TYPE_3__ {unsigned int rlim; unsigned long max; } ;
struct TYPE_4__ {char const* info; int error; struct aa_label* peer; TYPE_1__ rlim; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct aa_profile*,int *,int ) ;
 TYPE_2__* FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct aa_profile *VAR_5, unsigned int VAR_6,
     unsigned long VAR_7, struct aa_label *VAR_8,
     const char *VAR_9, int VAR_10)
{
 FUNC_0(VAR_4, VAR_1, VAR_2);

 FUNC_2(&VAR_4)->rlim.rlim = VAR_6;
 FUNC_2(&VAR_4)->rlim.max = VAR_7;
 FUNC_2(&VAR_4)->peer = VAR_8;
 FUNC_2(&VAR_4)->info = VAR_9;
 FUNC_2(&VAR_4)->error = VAR_10;

 return FUNC_1(VAR_0, VAR_5, &VAR_4, VAR_3);
}
