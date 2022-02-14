
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsTagSignature ;
typedef int cmsPipeline ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;
typedef scalar_t__ cmsColorSpaceSignature ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int * FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static
cmsPipeline* FUNC_10(cmsContext VAR_4, cmsHPROFILE VAR_5, cmsTagSignature VAR_6)
{
    cmsPipeline* VAR_7 = FUNC_6(VAR_4, (cmsPipeline*) FUNC_9(VAR_4, VAR_5, VAR_6));
    cmsColorSpaceSignature VAR_8 = FUNC_4(VAR_4, VAR_5);
    cmsColorSpaceSignature VAR_9 = FUNC_5(VAR_4, VAR_5);

    if (VAR_7 == ((void*)0)) return ((void*)0);



    if ( VAR_8 == VAR_2)
    {
        if (!FUNC_8(VAR_4, VAR_7, VAR_0, FUNC_2(VAR_4)))
            goto Error;
    }
    else if (VAR_8 == VAR_3)
    {
        if (!FUNC_8(VAR_4, VAR_7, VAR_0, FUNC_3(VAR_4)))
            goto Error;
    }

    if ( VAR_9 == VAR_2)
    {
        if (!FUNC_8(VAR_4, VAR_7, VAR_1, FUNC_0(VAR_4)))
            goto Error;
    }
    else if( VAR_9 == VAR_3)
    {
        if (!FUNC_8(VAR_4, VAR_7, VAR_1, FUNC_1(VAR_4)))
            goto Error;
    }

    return VAR_7;

Error:
    FUNC_7(VAR_4, VAR_7);
    return ((void*)0);
}
