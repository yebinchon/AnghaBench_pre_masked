
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t cmsUInt32Number ;
typedef int cmsPipeline ;
typedef int cmsHPROFILE ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsBool ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int * FUNC_0 (int ,size_t,size_t*,int *,int *,int *,size_t) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static
cmsPipeline* FUNC_5(cmsContext VAR_4,
                          cmsUInt32Number VAR_5,
                          cmsUInt32Number VAR_6[],
                          cmsHPROFILE VAR_7[],
                          cmsBool VAR_8[],
                          cmsFloat64Number VAR_9[],
                          cmsUInt32Number VAR_10)
{
    cmsPipeline* VAR_11;
    cmsUInt32Number VAR_12[256];
    cmsUInt32Number VAR_13;

 for (VAR_13=0; VAR_13 < VAR_5; VAR_13++)
        VAR_12[VAR_13] = (VAR_6[VAR_13] == VAR_0) ? VAR_1 :
                                                 VAR_6[VAR_13];

 if (FUNC_1(VAR_4, VAR_7[0]) != VAR_3 ||
     FUNC_1(VAR_4, VAR_7[VAR_5-1]) != VAR_3)
           return FUNC_0(VAR_4, VAR_5,
                                   VAR_12, VAR_7,
                                   VAR_8, VAR_9,
                                   VAR_10);

    VAR_11 = FUNC_2(VAR_4, 1, 1);
    if (VAR_11 == ((void*)0)) return ((void*)0);

    FUNC_3(VAR_4, VAR_11, VAR_2,
                            FUNC_4(VAR_4, 1));

    return VAR_11;
}
