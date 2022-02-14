
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ run_all; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,char*,int,char const**) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int,char const**,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(int VAR_4, const char **VAR_5)
{
 FUNC_2(&VAR_3, "main,", VAR_4, VAR_5);
 VAR_4 = FUNC_3(VAR_4, VAR_5, VAR_2, VAR_0, 0);
 if (VAR_4)
  goto err;

 if (VAR_3)
  return FUNC_1();

 if (FUNC_0(((void*)0)))
  goto err;

 return 0;

err:
 FUNC_4(VAR_1, VAR_2);
 return -1;
}
