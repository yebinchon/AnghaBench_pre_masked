
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int user_name; } ;
typedef TYPE_1__ Port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,char**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char*,char**) ;
 char* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_5(Port *VAR_3, char **VAR_4)
{
 char *VAR_5;
 int VAR_6;
 char *VAR_7;

 FUNC_4(VAR_3, VAR_0, ((void*)0), 0);

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5 == ((void*)0))
  return VAR_1;

 VAR_7 = FUNC_0(VAR_3->user_name, VAR_4);
 if (VAR_7)
 {
  VAR_6 = FUNC_2(VAR_3->user_name, VAR_7, VAR_5,
         VAR_4);
 }
 else
  VAR_6 = VAR_2;

 if (VAR_7)
  FUNC_1(VAR_7);
 FUNC_1(VAR_5);

 return VAR_6;
}
