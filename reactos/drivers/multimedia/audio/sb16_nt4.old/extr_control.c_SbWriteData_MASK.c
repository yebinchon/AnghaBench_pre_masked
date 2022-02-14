
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef int PSOUND_BLASTER_PARAMETERS ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

BOOLEAN
FUNC_3(
    PSOUND_BLASTER_PARAMETERS VAR_3,
    UCHAR VAR_4)
{
    if ( ! FUNC_2(VAR_3) )
        return VAR_0;

    FUNC_0("Writing 0x%x to Sound Blaster card (data)\n", VAR_4);
    FUNC_1(VAR_3, VAR_1, VAR_4);

    return VAR_2;
}
