
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int servers; int stripes; } ;
typedef TYPE_1__ pnfs_file_device ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_1,
    pnfs_file_device *VAR_2)
{
    if (!FUNC_1(VAR_1, &VAR_2->stripes))
        return VAR_0;

    return FUNC_0(VAR_1, &VAR_2->servers);
}
