
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsPipeline ;
typedef int cmsBool ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,int) ;
 int FUNC_2 (int ,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int *,int *) ;

__attribute__((used)) static
cmsBool FUNC_4(cmsPipeline* VAR_2, cmsUInt16Number VAR_3, cmsUInt16Number VAR_4, cmsUInt16Number VAR_5, cmsUInt16Number VAR_6)
{
    cmsUInt16Number VAR_7[4], VAR_8[3], VAR_9[3];

    VAR_7[0] = VAR_3; VAR_7[1] = VAR_4; VAR_7[2] = VAR_5; VAR_7[3] = VAR_6;


    FUNC_3(FUNC_0(), VAR_7, VAR_8, VAR_2);


    FUNC_2(FUNC_0(), VAR_7, VAR_9, ((void*)0));



    if (!FUNC_1("Channel 1", VAR_8[0], VAR_9[0], 2)) return VAR_0;
    if (!FUNC_1("Channel 2", VAR_8[1], VAR_9[1], 2)) return VAR_0;
    if (!FUNC_1("Channel 3", VAR_8[2], VAR_9[2], 2)) return VAR_0;

    return VAR_1;
}
