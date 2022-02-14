
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


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,int ,int *,TYPE_3__**,int *) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,int,int,int) ;

int FUNC_6( int VAR_8, char **VAR_9 ) {
  PDNS_RECORD VAR_10, VAR_11;
  DWORD VAR_12;

  FUNC_3 (FUNC_2( "||||", VAR_5 ) == VAR_1);
  FUNC_3 (FUNC_2( "a.b.c", VAR_6 ) == VAR_0);
  FUNC_3 (FUNC_2( "1234", VAR_6 ) == VAR_7);
  FUNC_3 (FUNC_2( "fubar", VAR_5 ) == VAR_7);
  FUNC_3 (FUNC_0 ("www.reactos.com", VAR_3, VAR_2,
      ((void*)0), &VAR_10, ((void*)0)) == VAR_7);
  VAR_11 = VAR_10;
  while( VAR_11 ) {
    if( VAR_11->wType == VAR_3 ) {
      VAR_12 = FUNC_4( VAR_11->Data.A.IpAddress );
      FUNC_5( "www.reactos.com == %d.%d.%d.%d\n",
       (int)(VAR_12 >> 24) & 0xff,
       (int)(VAR_12 >> 16) & 0xff,
       (int)(VAR_12 >> 8) & 0xff,
       (int)VAR_12 & 0xff );
    }
    VAR_11 = VAR_11->pNext;
  }
  FUNC_1( VAR_10, VAR_4 );

  return 0;
}
