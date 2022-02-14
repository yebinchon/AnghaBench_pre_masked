
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int tei_entity; int tei_instance; } ;
struct TYPE_11__ {int toi_class; int toi_type; TYPE_3__ toi_entity; int toi_id; } ;
typedef int TDI_STATUS ;
typedef TYPE_1__ TDIObjectID ;
typedef int PVOID ;
typedef int PUINT ;
typedef int PTDI_REQUEST ;
typedef int PNDIS_BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__) ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;




 int FUNC_2 (TYPE_3__,int ,int ) ;
 int FUNC_3 (TYPE_3__,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__,int ,int ) ;
 int FUNC_5 (TYPE_3__,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (TYPE_3__,int ,int ,int ) ;
 int FUNC_10 (TYPE_3__,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (int ,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

TDI_STATUS FUNC_14(
  PTDI_REQUEST VAR_14,
  TDIObjectID *VAR_15,
  PNDIS_BUFFER VAR_16,
  PUINT VAR_17,
  PVOID VAR_18)
{
    PVOID VAR_19;

    FUNC_13(VAR_5,
  ("InfoEx Req: %x %x %x!%04x:%d\n",
   VAR_15->toi_class,
   VAR_15->toi_type,
   VAR_15->toi_id,
   VAR_15->toi_entity.tei_entity,
   VAR_15->toi_entity.tei_instance));

    switch (VAR_15->toi_class)
    {
        case 133:
           switch (VAR_15->toi_id)
           {
              case 136:
                 if (VAR_15->toi_type != VAR_8)
                     return VAR_9;

                 return FUNC_12(VAR_16, VAR_17);

              case 135:
                 if (VAR_15->toi_type != VAR_8)
                     return VAR_9;

                 return FUNC_2(VAR_15->toi_entity, VAR_16, VAR_17);

              default:
                 return VAR_10;
           }

        case 132:
           if (VAR_15->toi_type == VAR_7)
           {
               if ((VAR_19 = FUNC_1(VAR_15->toi_entity)))
                    return FUNC_0(VAR_15, VAR_19, VAR_16, VAR_17);
               else
                    return VAR_9;
           }

           switch (VAR_15->toi_id)
           {
              case 134:
                 if (VAR_15->toi_type != VAR_8)
                     return VAR_9;

                 if (VAR_15->toi_entity.tei_entity == VAR_6)
                     if ((VAR_19 = FUNC_1(VAR_15->toi_entity)))
                         return FUNC_10(VAR_15->toi_entity, VAR_19, VAR_16, VAR_17);
                     else
                         return VAR_9;
                 else if (VAR_15->toi_entity.tei_entity == VAR_1 ||
                          VAR_15->toi_entity.tei_entity == VAR_3)
                     if ((VAR_19 = FUNC_1(VAR_15->toi_entity)))
                         return FUNC_9(VAR_15->toi_entity, VAR_19, VAR_16, VAR_17);
                     else
                         return VAR_9;
                 else if (VAR_15->toi_entity.tei_entity == VAR_0)
                     if ((VAR_19 = FUNC_1(VAR_15->toi_entity)))
                         return FUNC_3(VAR_15->toi_entity, VAR_19, VAR_16, VAR_17);
                     else
                         return VAR_9;
                 else
                     return VAR_9;

              case 130:
                 if (VAR_15->toi_type != VAR_8)
                     return VAR_9;

                 if (VAR_15->toi_entity.tei_entity == VAR_1 ||
                     VAR_15->toi_entity.tei_entity == VAR_3)
                    return FUNC_4(VAR_15->toi_entity, VAR_16, VAR_17);
                else if (VAR_15->toi_entity.tei_entity == VAR_4)
                     if ((VAR_19 = FUNC_1(VAR_15->toi_entity)))
                         return FUNC_6(VAR_19, VAR_16, VAR_17, VAR_13);
                     else
                         return VAR_9;
                else if (VAR_15->toi_entity.tei_entity == VAR_2)
                     if ((VAR_19 = FUNC_1(VAR_15->toi_entity)))
                         return FUNC_7(VAR_19, VAR_16, VAR_17, VAR_13);
                     else
                         return VAR_9;
                else
                    return VAR_9;

              case 129:
                 if (VAR_15->toi_type != VAR_8)
                     return VAR_9;

                 if (VAR_15->toi_entity.tei_entity == VAR_0)
                     if ((VAR_19 = FUNC_1(VAR_15->toi_entity)))
                         return FUNC_5(VAR_15->toi_entity, VAR_19,
                                                           VAR_16, VAR_17);
                     else
                         return VAR_9;
                 else if (VAR_15->toi_entity.tei_entity == VAR_3 ||
                          VAR_15->toi_entity.tei_entity == VAR_1)
                     if ((VAR_19 = FUNC_1(VAR_15->toi_entity)))
                         return FUNC_11(VAR_19, VAR_16, VAR_17);
                     else
                         return VAR_9;
                 else if (VAR_15->toi_entity.tei_entity == VAR_4)
                     if ((VAR_19 = FUNC_1(VAR_15->toi_entity)))
                         return FUNC_6(VAR_19, VAR_16, VAR_17, VAR_11);
                     else
                         return VAR_9;
                 else if (VAR_15->toi_entity.tei_entity == VAR_2)
                     if ((VAR_19 = FUNC_1(VAR_15->toi_entity)))
                         return FUNC_7(VAR_19, VAR_16, VAR_17, VAR_11);
                     else
                         return VAR_9;
                 else
                     return VAR_9;

              case 128:
                 if (VAR_15->toi_type != VAR_8)
                     return VAR_9;

                 if (VAR_15->toi_entity.tei_entity == VAR_4)
                     if ((VAR_19 = FUNC_1(VAR_15->toi_entity)))
                         return FUNC_6(VAR_19, VAR_16, VAR_17, VAR_12);
                     else
                         return VAR_9;
                 else if (VAR_15->toi_entity.tei_entity == VAR_2)
                     if ((VAR_19 = FUNC_1(VAR_15->toi_entity)))
                         return FUNC_7(VAR_19, VAR_16, VAR_17, VAR_12);
                     else
                         return VAR_9;
                 else
                     return VAR_9;
              default:
                 return VAR_10;
           }

        default:
           return VAR_10;
    }
}
