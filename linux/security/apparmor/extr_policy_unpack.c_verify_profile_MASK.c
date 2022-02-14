
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; } ;
struct TYPE_4__ {TYPE_1__ trans; scalar_t__ dfa; } ;
struct aa_profile {TYPE_2__ file; } ;


 int VAR_0 ;
 int FUNC_0 (struct aa_profile*,int *,int *,char*,int *,int) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct aa_profile *VAR_1)
{
 if (VAR_1->file.dfa &&
     !FUNC_1(VAR_1->file.dfa,
          VAR_1->file.trans.size)) {
  FUNC_0(VAR_1, ((void*)0), ((void*)0), "Invalid named transition",
       ((void*)0), -VAR_0);
  return -VAR_0;
 }

 return 0;
}
