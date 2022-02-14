
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int tei_entity; } ;
struct TYPE_8__ {int Connection; } ;
struct TYPE_7__ {int toi_class; int const toi_type; TYPE_6__ toi_entity; int toi_id; } ;
typedef int TDI_STATUS ;
typedef TYPE_1__ TDIObjectID ;
typedef void* PVOID ;
typedef int PTDI_REQUEST ;
typedef TYPE_2__* PADDRESS_FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 void* FUNC_1 (TYPE_6__) ;





 int FUNC_2 (void*,void*,int ) ;
 int FUNC_3 (void*,void*,int ) ;
 int FUNC_4 (TYPE_1__*,void*,void*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,void*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

TDI_STATUS FUNC_6
(PTDI_REQUEST VAR_5,
 TDIObjectID *VAR_6,
 PVOID VAR_7,
 UINT VAR_8)
{
    PVOID VAR_9;

    switch (VAR_6->toi_class)
    {
        case 132:
        {
            switch (VAR_6->toi_type)
            {
                case 131:
                {
                    if ((VAR_9 = FUNC_1(VAR_6->toi_entity)))
                        return FUNC_4(VAR_6, VAR_9, VAR_7, VAR_8);
                    else
                        return VAR_3;
                }
                case 130:
                {
                    PADDRESS_FILE VAR_10 = FUNC_1(VAR_6->toi_entity);
                    if (VAR_10 == ((void*)0))
                        return VAR_3;
                    return FUNC_5(VAR_6, VAR_10->Connection, VAR_7, VAR_8);
                }
                case 129:
                {
                    switch (VAR_6->toi_id)
                    {
                        case 128:
                            if (VAR_6->toi_type != 129)
                                return VAR_3;

                            if (VAR_6->toi_entity.tei_entity == VAR_0)
                                if ((VAR_9 = FUNC_1(VAR_6->toi_entity)))
                                    return FUNC_2(VAR_9, VAR_7,
                                        VAR_8);
                                else
                                    return VAR_3;
                            else if (VAR_6->toi_entity.tei_entity == VAR_1
                                || VAR_6->toi_entity.tei_entity == VAR_2)
                                if ((VAR_9 = FUNC_1(VAR_6->toi_entity)))
                                    return FUNC_3(VAR_9, VAR_7, VAR_8);
                                else
                                    return VAR_3;
                            else
                                return VAR_3;

                        default:
                            return VAR_4;
                    }
                }
                default:
                    FUNC_0("TCPIP: IOCTL_TCP_SET_INFORMATION_EX - Unrecognized information type for INFO_CLASS_PROTOCOL: %#x.\n", VAR_6->toi_type);
                    return VAR_3;
            }
            break;
        }
        default:
            FUNC_0("TCPIP: IOCTL_TCP_SET_INFORMATION_EX - Unrecognized information class %#x.\n", VAR_6->toi_class);
            return VAR_4;
    }
}
