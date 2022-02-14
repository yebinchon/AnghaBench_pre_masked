
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int if_operstatus; int if_mtu; } ;
struct TYPE_8__ {TYPE_2__ ent; } ;
struct TYPE_6__ {int iae_mask; int iae_bcastaddr; int iae_addr; } ;
struct TYPE_9__ {TYPE_3__ if_info; TYPE_1__ ip_addr; } ;
typedef int NTSTATUS ;
typedef int IPHLPAddrType ;
typedef TYPE_4__ IFInfo ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;


 int VAR_1 ;



 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,TYPE_4__*) ;
 int FUNC_3 (int *,int ) ;

DWORD FUNC_4( char *VAR_3, DWORD VAR_4, IPHLPAddrType VAR_5 ) {
    IFInfo VAR_6;
    HANDLE VAR_7;
    NTSTATUS VAR_8 = VAR_2;
    DWORD VAR_9 = VAR_1;

    VAR_8 = FUNC_3( &VAR_7, VAR_0 );

    if( FUNC_0(VAR_8) ) {
        VAR_8 = FUNC_2( VAR_7, VAR_3, VAR_4, &VAR_6 );
        if( FUNC_0(VAR_8) ) {
            switch( VAR_5 ) {
            case 130: VAR_9 = VAR_6.ip_addr.iae_addr; break;
            case 129: VAR_9 = VAR_6.ip_addr.iae_bcastaddr; break;
            case 128: VAR_9 = VAR_6.ip_addr.iae_mask; break;
            case 132: VAR_9 = VAR_6.if_info.ent.if_mtu; break;
            case 131: VAR_9 = VAR_6.if_info.ent.if_operstatus; break;
            }
        }
        FUNC_1( VAR_7 );
    }

    return VAR_9;
}
