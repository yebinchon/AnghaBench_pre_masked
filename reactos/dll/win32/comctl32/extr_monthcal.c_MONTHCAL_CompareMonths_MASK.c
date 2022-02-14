
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int wDay; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int LONG ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static LONG FUNC_2(const SYSTEMTIME *VAR_1, const SYSTEMTIME *VAR_2)
{
  SYSTEMTIME VAR_3, VAR_4;

  VAR_3 = VAR_4 = VAR_0;
  FUNC_1(VAR_1, &VAR_3);
  FUNC_1(VAR_2, &VAR_4);
  VAR_3.wDay = VAR_4.wDay = 1;

  return FUNC_0(&VAR_3, &VAR_4);
}
