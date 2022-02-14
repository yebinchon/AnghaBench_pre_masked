
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int AddressLength; int Broadcast; } ;
typedef int * PNEIGHBOR_CACHE_ENTRY ;
typedef TYPE_1__* PIP_INTERFACE ;
typedef int PIP_ADDRESS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_3 (TYPE_1__*,int ,int *,int ,int ,int ) ;
 int * FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,char*) ;

PNEIGHBOR_CACHE_ENTRY FUNC_7(
  PIP_INTERFACE VAR_5,
  PIP_ADDRESS VAR_6,
  BOOLEAN VAR_7)
{
  PNEIGHBOR_CACHE_ENTRY VAR_8;

  FUNC_6(VAR_1, ("Called. Interface (0x%X)  Address (0x%X).\n", VAR_5, VAR_6));

  VAR_8 = FUNC_4(VAR_6, VAR_5);
  if (VAR_8 == ((void*)0))
    {
        FUNC_6(VAR_2,("BCAST: %s\n", FUNC_0(&VAR_5->Broadcast)));
        if( FUNC_1(VAR_6, &VAR_5->Broadcast) ||
            FUNC_2(VAR_6) ) {
            FUNC_6(VAR_2,("Packet targeted at broadcast addr\n"));
            VAR_8 = FUNC_3(VAR_5, VAR_6, ((void*)0),
                                VAR_5->AddressLength, VAR_4, 0);
        } else {
            VAR_8 = FUNC_3(VAR_5, VAR_6, ((void*)0),
                                VAR_5->AddressLength, VAR_3, VAR_7 ? 0 : VAR_0);
            if (!VAR_8) return ((void*)0);
            FUNC_5(VAR_8);
        }
    }

  return VAR_8;
}
