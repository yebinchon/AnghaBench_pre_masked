
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int IpAddress; } ;
struct TYPE_7__ {TYPE_1__ A; } ;
struct TYPE_8__ {scalar_t__ wType; struct TYPE_8__* pNext; TYPE_2__ Data; } ;
typedef TYPE_3__* PDNS_RECORD ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,int ,int *,TYPE_3__**,int *) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int,int,int) ;

int FUNC_5( int VAR_4, char **VAR_5 ) {
  PDNS_RECORD VAR_6, VAR_7;
  DWORD VAR_8;

  FUNC_2 (FUNC_0 ("www.reactos.com", VAR_1, VAR_0,
      ((void*)0), &VAR_6, ((void*)0)) == VAR_3);
  VAR_7 = VAR_6;
  while( VAR_7 ) {
    if( VAR_7->wType == VAR_1 ) {
      VAR_8 = FUNC_3( VAR_7->Data.A.IpAddress );
      FUNC_4( "www.reactos.com == %d.%d.%d.%d\n",
       (int)(VAR_8 >> 24) & 0xff,
       (int)(VAR_8 >> 16) & 0xff,
       (int)(VAR_8 >> 8) & 0xff,
       (int)VAR_8 & 0xff );
    }
    VAR_7 = VAR_7->pNext;
  }
  FUNC_1( VAR_6, VAR_2 );

  return 0;
}
