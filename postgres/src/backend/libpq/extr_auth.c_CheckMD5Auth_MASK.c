
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int user_name; } ;
typedef TYPE_1__ Port ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char*,char*,int,char**) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 char* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,char*,int) ;

__attribute__((used)) static int
FUNC_8(Port *VAR_7, char *VAR_8, char **VAR_9)
{
 char VAR_10[4];
 char *VAR_11;
 int VAR_12;

 if (VAR_1)
  FUNC_0(VAR_3,
    (FUNC_1(VAR_2),
     FUNC_2("MD5 authentication is not supported when \"db_user_namespace\" is enabled")));


 if (!FUNC_5(VAR_10, 4))
 {
  FUNC_0(VAR_4,
    (FUNC_2("could not generate random MD5 salt")));
  return VAR_6;
 }

 FUNC_7(VAR_7, VAR_0, VAR_10, 4);

 VAR_11 = FUNC_6(VAR_7);
 if (VAR_11 == ((void*)0))
  return VAR_5;

 if (VAR_8)
  VAR_12 = FUNC_3(VAR_7->user_name, VAR_8, VAR_11,
          VAR_10, 4, VAR_9);
 else
  VAR_12 = VAR_6;

 FUNC_4(VAR_11);

 return VAR_12;
}
