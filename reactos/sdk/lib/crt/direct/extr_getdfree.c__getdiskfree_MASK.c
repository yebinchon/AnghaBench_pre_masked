
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _diskfree_t {unsigned int avail_clusters; int total_clusters; int bytes_per_sector; int sectors_per_cluster; } ;
typedef int LPDWORD ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 char FUNC_1 (unsigned int) ;

unsigned int FUNC_2(unsigned int VAR_0, struct _diskfree_t* VAR_1)
{
    char VAR_2[10];

    VAR_2[0] = FUNC_1(VAR_0 +'@');
    VAR_2[1] = ':';
    VAR_2[2] = '\\';
    VAR_2[3] = 0;
    if (VAR_1 == ((void*)0))
        return 0;
    if (!FUNC_0(VAR_2,(LPDWORD)&VAR_1->sectors_per_cluster,(LPDWORD)&VAR_1->bytes_per_sector,
            (LPDWORD )&VAR_1->avail_clusters,(LPDWORD )&VAR_1->total_clusters))
        return 0;
    return VAR_1->avail_clusters;
}
