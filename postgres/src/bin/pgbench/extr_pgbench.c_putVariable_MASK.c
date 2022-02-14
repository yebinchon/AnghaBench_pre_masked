
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct TYPE_5__ {char* svalue; TYPE_1__ value; } ;
typedef TYPE_2__ Variable ;
typedef int CState ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (int *,char const*,char*) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static bool
FUNC_3(CState *VAR_1, const char *VAR_2, char *VAR_3, const char *VAR_4)
{
 Variable *VAR_5;
 char *VAR_6;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (!VAR_5)
  return 0;


 VAR_6 = FUNC_2(VAR_4);

 if (VAR_5->svalue)
  FUNC_0(VAR_5->svalue);
 VAR_5->svalue = VAR_6;
 VAR_5->value.type = VAR_0;

 return 1;
}
