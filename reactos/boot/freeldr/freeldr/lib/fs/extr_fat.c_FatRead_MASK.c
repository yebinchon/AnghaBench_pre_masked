
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;
typedef int PFAT_FILE_INFO ;
typedef scalar_t__ BOOLEAN ;
typedef int ARC_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int *) ;
 int FUNC_1 (int ) ;

ARC_STATUS FUNC_2(ULONG VAR_2, VOID* VAR_3, ULONG VAR_4, ULONG* VAR_5)
{
    PFAT_FILE_INFO VAR_6 = FUNC_1(VAR_2);
    BOOLEAN VAR_7;




    VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_5, VAR_3);




    if (VAR_7)
        return VAR_1;
    else
        return VAR_0;
}
