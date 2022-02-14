
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int AML_RESOURCE_SMALL_HEADER ;
typedef int AML_RESOURCE_LARGE_HEADER ;


 int FUNC_0 () ;
 int FUNC_1 (void*) ;
 int VAR_0 ;

UINT8
FUNC_2 (
    void *VAR_1)
{
    FUNC_0 ();




    if (FUNC_1 (VAR_1) & VAR_0)
    {
        return (sizeof (AML_RESOURCE_LARGE_HEADER));
    }
    else
    {
        return (sizeof (AML_RESOURCE_SMALL_HEADER));
    }
}
