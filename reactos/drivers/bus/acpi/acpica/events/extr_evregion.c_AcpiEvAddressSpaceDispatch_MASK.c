
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int UINT64 ;
typedef scalar_t__ UINT32 ;
struct TYPE_19__ {int AccessLength; int Length; int Connection; } ;
struct TYPE_17__ {scalar_t__ (* Setup ) (TYPE_5__*,int ,TYPE_6__*,void**) ;scalar_t__ (* Handler ) (scalar_t__,scalar_t__,scalar_t__,int *,TYPE_6__*,void*) ;int HandlerFlags; TYPE_6__* Context; } ;
struct TYPE_16__ {scalar_t__ SpaceId; int Flags; TYPE_5__* Handler; scalar_t__ Address; int Node; } ;
struct TYPE_15__ {void* RegionContext; } ;
struct TYPE_14__ {scalar_t__ BitLength; scalar_t__ PinNumberIndex; int AccessLength; int ResourceLength; int ResourceBuffer; } ;
struct TYPE_18__ {TYPE_4__ AddressSpace; TYPE_3__ Region; TYPE_2__ Extra; TYPE_1__ Field; } ;
typedef scalar_t__ ACPI_STATUS ;
typedef scalar_t__ ACPI_PHYSICAL_ADDRESS ;
typedef TYPE_5__ ACPI_OPERAND_OBJECT ;
typedef TYPE_6__ ACPI_CONNECTION_INFO ;
typedef scalar_t__ (* ACPI_ADR_SPACE_SETUP ) (TYPE_5__*,int ,TYPE_6__*,void**) ;
typedef scalar_t__ (* ACPI_ADR_SPACE_HANDLER ) (scalar_t__,scalar_t__,scalar_t__,int *,TYPE_6__*,void*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_5__* FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int VAR_10 ;
 int FUNC_11 (scalar_t__) ;

ACPI_STATUS
FUNC_12 (
    ACPI_OPERAND_OBJECT *VAR_11,
    ACPI_OPERAND_OBJECT *VAR_12,
    UINT32 VAR_13,
    UINT32 VAR_14,
    UINT32 VAR_15,
    UINT64 *VAR_16)
{
    ACPI_STATUS VAR_17;
    ACPI_ADR_SPACE_HANDLER VAR_18;
    ACPI_ADR_SPACE_SETUP VAR_19;
    ACPI_OPERAND_OBJECT *VAR_20;
    ACPI_OPERAND_OBJECT *VAR_21;
    void *VAR_22 = ((void*)0);
    ACPI_CONNECTION_INFO *VAR_23;
    ACPI_PHYSICAL_ADDRESS VAR_24;


    FUNC_5 (VAR_10);


    VAR_21 = FUNC_8 (VAR_11);
    if (!VAR_21)
    {
        FUNC_11 (VAR_7);
    }



    VAR_20 = VAR_11->Region.Handler;
    if (!VAR_20)
    {
        FUNC_1 ((VAR_6,
            "No handler for Region [%4.4s] (%p) [%s]",
            FUNC_9 (VAR_11->Region.Node),
            VAR_11, FUNC_10 (VAR_11->Region.SpaceId)));

        FUNC_11 (VAR_7);
    }

    VAR_23 = VAR_20->AddressSpace.Context;





    if (!(VAR_11->Region.Flags & VAR_9))
    {


        VAR_19 = VAR_20->AddressSpace.Setup;
        if (!VAR_19)
        {


            FUNC_1 ((VAR_6,
                "No init routine for region(%p) [%s]",
                VAR_11, FUNC_10 (VAR_11->Region.SpaceId)));
            FUNC_11 (VAR_7);
        }






        FUNC_7 ();

        VAR_17 = VAR_19 (VAR_11, VAR_5,
            VAR_23, &VAR_22);



        FUNC_6 ();



        if (FUNC_3 (VAR_17))
        {
            FUNC_2 ((VAR_6, VAR_17,
                "During region initialization: [%s]",
                FUNC_10 (VAR_11->Region.SpaceId)));
            FUNC_11 (VAR_17);
        }



        if (!(VAR_11->Region.Flags & VAR_9))
        {
            VAR_11->Region.Flags |= VAR_9;





            if (!(VAR_21->Extra.RegionContext))
            {
                VAR_21->Extra.RegionContext = VAR_22;
            }
        }
    }



    VAR_18 = VAR_20->AddressSpace.Handler;
    VAR_24 = (VAR_11->Region.Address + VAR_14);
    if ((VAR_11->Region.SpaceId == VAR_3) &&
        VAR_23 &&
        VAR_12)
    {


        VAR_23->Connection = VAR_12->Field.ResourceBuffer;
        VAR_23->Length = VAR_12->Field.ResourceLength;
        VAR_23->AccessLength = VAR_12->Field.AccessLength;
    }
    if ((VAR_11->Region.SpaceId == VAR_2) &&
        VAR_23 &&
        VAR_12)
    {


        VAR_23->Connection = VAR_12->Field.ResourceBuffer;
        VAR_23->Length = VAR_12->Field.ResourceLength;
        VAR_23->AccessLength = VAR_12->Field.AccessLength;
        VAR_24 = VAR_12->Field.PinNumberIndex;
        VAR_15 = VAR_12->Field.BitLength;
    }

    FUNC_0 ((VAR_4,
        "Handler %p (@%p) Address %8.8X%8.8X [%s]\n",
        &VAR_11->Region.Handler->AddressSpace, VAR_18,
        FUNC_4 (VAR_24),
        FUNC_10 (VAR_11->Region.SpaceId)));

    if (!(VAR_20->AddressSpace.HandlerFlags &
        VAR_0))
    {





        FUNC_7();
    }



    VAR_17 = VAR_18 (VAR_13, VAR_24, VAR_15, VAR_16, VAR_23,
        VAR_21->Extra.RegionContext);

    if (FUNC_3 (VAR_17))
    {
        FUNC_2 ((VAR_6, VAR_17, "Returned by Handler for [%s]",
            FUNC_10 (VAR_11->Region.SpaceId)));





        if ((VAR_11->Region.SpaceId == VAR_1) &&
            (VAR_17 == VAR_8))
        {
            FUNC_1 ((VAR_6,
                "Timeout from EC hardware or EC device driver"));
        }
    }

    if (!(VAR_20->AddressSpace.HandlerFlags &
        VAR_0))
    {




        FUNC_6 ();
    }

    FUNC_11 (VAR_17);
}
