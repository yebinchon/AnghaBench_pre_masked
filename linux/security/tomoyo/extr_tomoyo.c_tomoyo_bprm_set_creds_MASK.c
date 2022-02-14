
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_binprm {int filename; scalar_t__ called_set_creds; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct linux_binprm *VAR_1)
{




 if (VAR_1->called_set_creds)
  return 0;




 if (!VAR_0)
  FUNC_0(VAR_1->filename);
 return 0;
}
