
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_4__ {int lpfnCallback; void* uEnumFlags; void* uFlags; int pidl; void* uID; } ;
typedef int LPFNFMCALLBACK ;
typedef TYPE_1__* LPFMINFO ;
typedef int LPCITEMIDLIST ;
typedef int HMENU ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static LPFMINFO FUNC_4(
 HMENU VAR_0,
 UINT VAR_1,
 LPCITEMIDLIST VAR_2,
 UINT VAR_3,
 UINT VAR_4,
 LPFNFMCALLBACK VAR_5)
{
 LPFMINFO VAR_6;

 FUNC_3("\n");

 VAR_6 = FUNC_0(VAR_0);

 FUNC_2(VAR_6->pidl);

 VAR_6->uID = VAR_1;
 VAR_6->pidl = FUNC_1(VAR_2);
 VAR_6->uFlags = VAR_3;
 VAR_6->uEnumFlags = VAR_4;
 VAR_6->lpfnCallback = VAR_5;

 return VAR_6;
}
