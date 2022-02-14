
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pbtrfs_file_info ;
typedef int ULONG ;
typedef int ARC_STATUS ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;

ARC_STATUS FUNC_3(ULONG VAR_2)
{
    pbtrfs_file_info VAR_3 = FUNC_1(VAR_2);
    FUNC_2("BtrFsClose %lu\n", VAR_2);

    FUNC_0(VAR_3, VAR_1);
    return VAR_0;
}
