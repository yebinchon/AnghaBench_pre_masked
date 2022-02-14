
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef int ULONG ;
typedef int PFREELDR_MEMORY_DESCRIPTOR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ,char*) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (char*) ;
 int VAR_5 ;

PFREELDR_MEMORY_DESCRIPTOR
FUNC_4(ULONG *VAR_6)
{
    FUNC_3("XboxMemGetMemoryMap()\n");





    FUNC_2(VAR_5,
              0,
              VAR_0 * 1024 * 1024,
              VAR_4);

    if (VAR_2 != 0)
    {

        FUNC_1(VAR_5,
                      (ULONG_PTR)VAR_1,
                      VAR_2,
                      VAR_3,
                      "Video memory");
    }

    *VAR_6 = FUNC_0(VAR_5);
    return VAR_5;
}
