
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef scalar_t__ UINT32 ;
typedef int PFAT_VOLUME_INFO ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static
ULONG FUNC_3(PFAT_VOLUME_INFO VAR_0, UINT32 VAR_1)
{
    ULONG VAR_2 = 0;

    FUNC_2("FatCountClustersInChain() StartCluster = %d\n", VAR_1);

    while (1)
    {



        if (FUNC_0(VAR_1))
        {
            break;
        }




        VAR_2++;




        if (!FUNC_1(VAR_0, VAR_1, &VAR_1))
        {
            return 0;
        }
    }

    FUNC_2("FatCountClustersInChain() ClusterCount = %d\n", VAR_2);

    return VAR_2;
}
