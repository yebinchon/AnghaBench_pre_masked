
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {void* HeaderIncl; void* BCast; void* DF; int TTL; } ;
struct TYPE_7__ {int toi_id; } ;
typedef int TDI_STATUS ;
typedef TYPE_1__ TDIObjectID ;
typedef int PVOID ;
typedef void** PUINT ;
typedef int * PUCHAR ;
typedef TYPE_2__* PADDRESS_FILE ;
typedef int KIRQL ;






 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ) ;

TDI_STATUS FUNC_3(TDIObjectID *VAR_3,
                              PADDRESS_FILE VAR_4,
                              PVOID VAR_5,
                              UINT VAR_6)
{
    KIRQL VAR_7;

    switch (VAR_3->toi_id)
    {
      case 128:
         if (VAR_6 < sizeof(UINT))
             return VAR_0;

         FUNC_1(VAR_4, &VAR_7);
         VAR_4->TTL = *((PUCHAR)VAR_5);
         FUNC_2(VAR_4, VAR_7);

         return VAR_2;

      case 130:
         if (VAR_6 < sizeof(UINT))
             return VAR_0;

         FUNC_1(VAR_4, &VAR_7);
         VAR_4->DF = *((PUINT)VAR_5);
         FUNC_2(VAR_4, VAR_7);

         return VAR_2;

      case 131:
         if (VAR_6 < sizeof(UINT))
             return VAR_0;

         FUNC_1(VAR_4, &VAR_7);
         VAR_4->BCast = *((PUINT)VAR_5);
         FUNC_2(VAR_4, VAR_7);

         return VAR_2;

      case 129:
         if (VAR_6 < sizeof(UINT))
             return VAR_0;

         FUNC_1(VAR_4, &VAR_7);
         VAR_4->HeaderIncl = *((PUINT)VAR_5);
         FUNC_2(VAR_4, VAR_7);

         return VAR_2;

      default:
         FUNC_0("Unimplemented option %x\n", VAR_3->toi_id);

         return VAR_1;
    }
}
