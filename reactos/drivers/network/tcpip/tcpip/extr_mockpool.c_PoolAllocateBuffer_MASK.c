
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int PVOID ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

PVOID FUNC_2(
    ULONG VAR_1)






{
    PVOID VAR_2;



    VAR_2 = FUNC_1(VAR_1);

    FUNC_0(VAR_0, ("Allocated (%i) bytes at (0x%X).\n", VAR_1, VAR_2));

    return VAR_2;
}
