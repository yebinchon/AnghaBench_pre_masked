
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mkid; } ;
typedef int STRRET ;
typedef char* LPWSTR ;
typedef TYPE_1__* LPITEMIDLIST ;
typedef int IShellFolder ;
typedef int HRESULT ;


 int FUNC_0 (int *,TYPE_1__*,int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,char*,int) ;

__attribute__((used)) static HRESULT FUNC_4(IShellFolder* VAR_1, LPITEMIDLIST VAR_2, LPWSTR VAR_3, int VAR_4)
{
 STRRET VAR_5;


 HRESULT VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_0, &VAR_5);

 if (FUNC_1(VAR_6)) {
  FUNC_3(&VAR_5, &VAR_2->mkid, VAR_3, VAR_4);
  FUNC_2(&VAR_5);
 } else
  VAR_3[0] = '\0';

 return VAR_6;
}
