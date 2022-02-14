
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int argtypes; int nargs; } ;
typedef TYPE_1__* SPIPlanPtr ;
typedef int Portal ;
typedef scalar_t__ ParamListInfo ;
typedef int Datum ;


 int FUNC_0 (char const*,TYPE_1__*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ,int ,int *,char const*) ;
 int FUNC_2 (scalar_t__) ;

Portal
FUNC_3(const char *VAR_0, SPIPlanPtr VAR_1,
    Datum *VAR_2, const char *VAR_3,
    bool VAR_4)
{
 Portal VAR_5;
 ParamListInfo VAR_6;


 VAR_6 = FUNC_1(VAR_1->nargs, VAR_1->argtypes,
          VAR_2, VAR_3);

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_6, VAR_4);


 if (VAR_6)
  FUNC_2(VAR_6);

 return VAR_5;
}
