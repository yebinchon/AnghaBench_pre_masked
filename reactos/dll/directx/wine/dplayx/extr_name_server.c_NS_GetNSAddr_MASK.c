
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_3__* lpNSCache ;
struct TYPE_5__ {TYPE_1__* lpQHFirst; } ;
struct TYPE_6__ {int * lpRemoteAddrHdr; int * lpLocalAddrHdr; scalar_t__ bNsIsLocal; TYPE_2__ first; } ;
struct TYPE_4__ {int * lpNSAddrHdr; } ;
typedef int * LPVOID ;


 int FUNC_0 (char*) ;

LPVOID FUNC_1( LPVOID VAR_0 )
{
  lpNSCache VAR_1 = (lpNSCache)VAR_0;

  FUNC_0( ":quick stub\n" );
  if ( VAR_1->first.lpQHFirst )
    return VAR_1->first.lpQHFirst->lpNSAddrHdr;

  return ((void*)0);





}
