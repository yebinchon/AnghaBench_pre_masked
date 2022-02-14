
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mkid; } ;
typedef int STRRET ;
typedef int SHGDNF ;
typedef char* LPWSTR ;
typedef TYPE_1__* LPITEMIDLIST ;
typedef int IShellFolder ;
typedef int HRESULT ;


 int FUNC_0 (int *,TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,char*,int) ;

__attribute__((used)) static HRESULT FUNC_4(IShellFolder* VAR_0, LPITEMIDLIST VAR_1, LPWSTR VAR_2, int VAR_3, SHGDNF VAR_4)
{
 STRRET VAR_5;

 HRESULT VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_4, &VAR_5);

 if (FUNC_1(VAR_6)) {
  FUNC_3(&VAR_5, &VAR_1->mkid, VAR_2, VAR_3);
  FUNC_2(&VAR_5);
 } else
  VAR_2[0] = '\0';

 return VAR_6;
}
