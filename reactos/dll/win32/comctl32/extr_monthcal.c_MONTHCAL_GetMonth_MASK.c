
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wMonth; int wDay; int wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int INT ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_2(SYSTEMTIME *VAR_1, INT VAR_2)
{
  INT VAR_3, VAR_4 = VAR_1->wMonth + VAR_2;

  VAR_1->wYear += VAR_4 > 0 ? (VAR_4 - 1) / 12 : VAR_4 / 12 - 1;
  VAR_1->wMonth = VAR_4 > 0 ? (VAR_4 - 1) % 12 + 1 : 12 + VAR_4 % 12;

  VAR_3 = FUNC_1(VAR_1->wMonth, VAR_1->wYear);
  if(VAR_1->wDay > VAR_3) VAR_1->wDay = VAR_3;
  FUNC_0(VAR_1, VAR_0);
}
