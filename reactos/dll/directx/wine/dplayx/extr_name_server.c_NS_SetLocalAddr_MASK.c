
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* lpNSCache ;
struct TYPE_2__ {int lpLocalAddrHdr; } ;
typedef int LPVOID ;
typedef int LPCVOID ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3( LPVOID VAR_1, LPCVOID VAR_2, DWORD VAR_3 )
{
  lpNSCache VAR_4 = (lpNSCache)VAR_1;

  VAR_4->lpLocalAddrHdr = FUNC_2( FUNC_1(), VAR_0, VAR_3 );

  FUNC_0( VAR_4->lpLocalAddrHdr, VAR_2, VAR_3 );
}
