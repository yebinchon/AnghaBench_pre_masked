
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* hba; int user_name; } ;
struct TYPE_6__ {scalar_t__ auth_method; } ;
typedef TYPE_2__ Port ;
typedef scalar_t__ PasswordType ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char*,char**) ;
 int FUNC_2 (TYPE_2__*,char*,char**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (int ,char**) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_6(Port *VAR_6, char **VAR_7)
{
 int VAR_8;
 char *VAR_9;
 PasswordType VAR_10;

 FUNC_0(VAR_6->hba->auth_method == VAR_5 ||
     VAR_6->hba->auth_method == VAR_4);


 VAR_9 = FUNC_4(VAR_6->user_name, VAR_7);
 if (!VAR_9)
  VAR_10 = VAR_1;
 else
  VAR_10 = FUNC_3(VAR_9);
 if (VAR_6->hba->auth_method == VAR_4 && VAR_10 == VAR_0)
  VAR_8 = FUNC_1(VAR_6, VAR_9, VAR_7);
 else
  VAR_8 = FUNC_2(VAR_6, VAR_9, VAR_7);

 if (VAR_9)
  FUNC_5(VAR_9);





 if (!VAR_9)
 {
  FUNC_0(VAR_8 != VAR_3);
  return VAR_2;
 }
 return VAR_8;
}
