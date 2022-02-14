
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PNTFS_ATTRIBUTE_LIST_ITEM ;
typedef int PFIND_ATTR_CONTXT ;
typedef int NTSTATUS ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

NTSTATUS
FUNC_1(PFIND_ATTR_CONTXT VAR_2,
                          PNTFS_ATTRIBUTE_LIST_ITEM *VAR_3)
{
    *VAR_3 = FUNC_0(VAR_2);
    if (*VAR_3 == ((void*)0))
    {
        return VAR_1;
    }
    return VAR_0;
}
