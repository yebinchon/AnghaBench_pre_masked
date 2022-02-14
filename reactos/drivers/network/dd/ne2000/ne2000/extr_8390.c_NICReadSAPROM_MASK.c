
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_3__ {void* WordMode; scalar_t__ IOBase; scalar_t__* SAPROM; int PermanentAddress; } ;
typedef int PVOID ;
typedef TYPE_1__* PNIC_ADAPTER ;
typedef void* BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 void* VAR_16 ;

__attribute__((used)) static BOOLEAN FUNC_4(
    PNIC_ADAPTER VAR_17)
{
    UINT VAR_18;
    UCHAR VAR_19[32];
    UCHAR VAR_20;

    FUNC_0(VAR_8, ("Called.\n"));





    FUNC_3(VAR_17->IOBase + VAR_12, 0x20);
    FUNC_3(VAR_17->IOBase + VAR_13, 0x00);


    FUNC_3(VAR_17->IOBase + VAR_14, 0x00);
    FUNC_3(VAR_17->IOBase + VAR_15, 0x00);


    FUNC_3(VAR_17->IOBase + VAR_10, VAR_2 | VAR_1 | VAR_0);


    VAR_20 = 2;
    for (VAR_18 = 0; VAR_18 < 32; VAR_18 += 2) {
        FUNC_2(VAR_17->IOBase + VAR_9, &VAR_19[VAR_18]);
        FUNC_2(VAR_17->IOBase + VAR_9, &VAR_19[VAR_18 + 1]);
  if (VAR_19[VAR_18] != VAR_19[VAR_18 + 1])
   VAR_20 = 1;
 }


    if (VAR_20 == 2) {
        FUNC_0(VAR_8,("NE2000 or compatible network adapter found.\n"));

        VAR_17->WordMode = VAR_16;


        for (VAR_18 = 0; VAR_18 < 16; VAR_18++)
            VAR_17->SAPROM[VAR_18] = VAR_19[VAR_18 * 2];


        FUNC_1(
            (PVOID)&VAR_17->PermanentAddress,
            (PVOID)&VAR_17->SAPROM,
            VAR_6);


        FUNC_3(VAR_17->IOBase + VAR_11, VAR_5 | VAR_4 | VAR_3);

        return VAR_16;
    } else {
        FUNC_0(VAR_8, ("NE1000 or compatible network adapter found.\n"));

        VAR_17->WordMode = VAR_7;

        return VAR_7;
    }
}
