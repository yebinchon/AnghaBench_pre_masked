
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PUCHAR ;
typedef int PSOUND_BLASTER_PARAMETERS ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

BOOLEAN
FUNC_3(
    PSOUND_BLASTER_PARAMETERS VAR_3,
    PUCHAR VAR_4)
{
    if ( ! FUNC_2(VAR_3) )
        return VAR_0;

    *VAR_4 = FUNC_1(VAR_3, VAR_1);
    FUNC_0("Read 0x%x from Sound Blaster card (data)\n", *VAR_4);

    return VAR_2;
}
