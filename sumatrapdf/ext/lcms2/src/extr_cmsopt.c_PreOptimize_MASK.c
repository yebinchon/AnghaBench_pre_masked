
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsPipeline ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_11, cmsPipeline* VAR_12)
{
    cmsBool VAR_13 = VAR_0, VAR_14;

    do {

        VAR_14 = VAR_0;


        VAR_14 |= FUNC_1(VAR_11, VAR_12, VAR_4);


        VAR_14 |= FUNC_2(VAR_11, VAR_12, VAR_10, VAR_6);


        VAR_14 |= FUNC_2(VAR_11, VAR_12, VAR_6, VAR_10);


        VAR_14 |= FUNC_2(VAR_11, VAR_12, VAR_8, VAR_7);


        VAR_14 |= FUNC_2(VAR_11, VAR_12, VAR_7, VAR_8);


        VAR_14 |= FUNC_2(VAR_11, VAR_12, VAR_5, VAR_2);


        VAR_14 |= FUNC_2(VAR_11, VAR_12, VAR_9, VAR_3);


        VAR_14 |= FUNC_0(VAR_11, VAR_12);

        if (VAR_14) VAR_13 = VAR_1;

    } while (VAR_14);

    return VAR_13;
}
