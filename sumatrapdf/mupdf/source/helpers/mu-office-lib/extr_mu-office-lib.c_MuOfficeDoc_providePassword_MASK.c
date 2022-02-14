
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int password_sem; int password; } ;
typedef TYPE_1__ MuOfficeDoc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char const*) ;
 size_t FUNC_3 (char const*) ;

int FUNC_4(MuOfficeDoc *VAR_2, const char *VAR_3)
{
 size_t VAR_4;

 if (VAR_2->password)
  return VAR_1;
 if (!VAR_3)
  VAR_3 = "";

 VAR_4 = FUNC_3(VAR_3);
 VAR_2->password = FUNC_0(VAR_4+1);
 FUNC_2(VAR_2->password, VAR_3);
 FUNC_1(&VAR_2->password_sem);

 return VAR_0;
}
