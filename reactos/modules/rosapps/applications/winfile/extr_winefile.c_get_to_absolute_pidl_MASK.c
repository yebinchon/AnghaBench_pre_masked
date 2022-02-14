
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {scalar_t__ etype; scalar_t__ pidl; struct TYPE_4__* up; } ;
typedef int * LPITEMIDLIST ;
typedef int HWND ;
typedef TYPE_1__ Entry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (scalar_t__) ;
 int * FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int * FUNC_3 (int *,int ) ;

__attribute__((used)) static LPITEMIDLIST FUNC_4(Entry* VAR_3, HWND VAR_4)
{
 if (VAR_3->up && VAR_3->up->etype==VAR_0) {
  LPITEMIDLIST VAR_5 = ((void*)0);

  while (VAR_3->up) {
   VAR_5 = FUNC_1(FUNC_0(VAR_3->pidl), VAR_5);
   VAR_3 = VAR_3->up;
  }

  return VAR_5;
 } else if (VAR_3->etype == VAR_1) {
  WCHAR VAR_6[VAR_2];

  FUNC_2(VAR_3, VAR_6);

  return FUNC_3(VAR_6, VAR_4);
 } else if (VAR_3->pidl)
  return FUNC_0(VAR_3->pidl);

 return ((void*)0);
}
