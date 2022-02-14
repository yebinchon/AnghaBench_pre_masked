
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ IoBaseAddress; } ;
typedef TYPE_1__* PNIC_ADAPTER ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;

BOOLEAN FUNC_2(
    PNIC_ADAPTER VAR_6)







{
    int VAR_7;

    FUNC_0(VAR_1, ("Called\n"));


    if(FUNC_1(VAR_6->IoBaseAddress))
    {
        FUNC_0(VAR_2, ("Found adapter at 0x%x\n", VAR_6->IoBaseAddress));
        return VAR_5;
    }


    for(VAR_7 = 0; VAR_4[VAR_7]; VAR_7++)
    {
        if(FUNC_1(VAR_4[VAR_7]))
        {
            FUNC_0(VAR_2, ("Found adapter at address 0x%x\n", VAR_4[VAR_7]));
            VAR_6->IoBaseAddress = VAR_4[VAR_7];
            return VAR_5;
        }
    }

    FUNC_0(VAR_3,("Adapter NOT found!\n"));
    return VAR_0;
}
