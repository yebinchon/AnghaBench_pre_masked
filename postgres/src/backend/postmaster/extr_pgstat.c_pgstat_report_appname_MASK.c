
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* st_appname; } ;
typedef TYPE_1__ PgBackendStatus ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__ volatile*) ;
 int FUNC_1 (TYPE_1__ volatile*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char const*,int ,scalar_t__) ;
 int FUNC_4 (char const*) ;

void
FUNC_5(const char *VAR_2)
{
 volatile PgBackendStatus *VAR_3 = VAR_0;
 int VAR_4;

 if (!VAR_3)
  return;


 VAR_4 = FUNC_3(VAR_2, FUNC_4(VAR_2), VAR_1 - 1);






 FUNC_0(VAR_3);

 FUNC_2((char *) VAR_3->st_appname, VAR_2, VAR_4);
 VAR_3->st_appname[VAR_4] = '\0';

 FUNC_1(VAR_3);
}
