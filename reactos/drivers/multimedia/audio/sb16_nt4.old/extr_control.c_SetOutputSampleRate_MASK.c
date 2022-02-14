
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int PSOUND_BLASTER_PARAMETERS ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;

BOOLEAN
FUNC_2(
    PSOUND_BLASTER_PARAMETERS VAR_2,
    ULONG VAR_3)
{

    FUNC_0("Setting sample rate\n");

    FUNC_1(VAR_2, VAR_0);
    FUNC_1(VAR_2, VAR_3 / 256);
    FUNC_1(VAR_2, VAR_3 % 256);

    return VAR_1;
}
