
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {scalar_t__ toi_type; int toi_id; } ;
typedef int TDI_STATUS ;
typedef TYPE_1__ TDIObjectID ;
typedef scalar_t__ PVOID ;
typedef int PCONNECTION_ENDPOINT ;
typedef int BOOLEAN ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ) ;

 int VAR_1 ;

TDI_STATUS FUNC_3(TDIObjectID *VAR_2,
                             PCONNECTION_ENDPOINT VAR_3,
                             PVOID VAR_4,
                             UINT VAR_5)
{
    FUNC_0(VAR_2->toi_type == VAR_0);
    switch (VAR_2->toi_id)
    {
        case 128:
        {
            BOOLEAN VAR_6;
            if (VAR_5 < sizeof(BOOLEAN))
                return VAR_1;
            VAR_6 = *(BOOLEAN*)VAR_4;
            return FUNC_2(VAR_3, VAR_6);
        }
        default:
            FUNC_1("TCPIP: Unknown connection info ID: %u.\n", VAR_2->toi_id);
    }

    return VAR_1;
}
