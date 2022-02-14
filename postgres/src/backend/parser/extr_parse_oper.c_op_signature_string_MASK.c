
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef int Oid ;
typedef int List ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static const char *
FUNC_5(List *VAR_0, char VAR_1, Oid VAR_2, Oid VAR_3)
{
 StringInfoData VAR_4;

 FUNC_4(&VAR_4);

 if (VAR_1 != 'l')
  FUNC_1(&VAR_4, "%s ", FUNC_3(VAR_2));

 FUNC_2(&VAR_4, FUNC_0(VAR_0));

 if (VAR_1 != 'r')
  FUNC_1(&VAR_4, " %s", FUNC_3(VAR_3));

 return VAR_4.data;
}
