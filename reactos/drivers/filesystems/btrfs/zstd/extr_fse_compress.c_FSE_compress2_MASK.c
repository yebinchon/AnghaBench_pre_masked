
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fseWkspMax_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 int * FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_4 (unsigned int,int ) ;
 size_t FUNC_5 (void*,size_t,void const*,size_t,unsigned int,unsigned int,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;

size_t FUNC_6 (void* VAR_5, size_t VAR_6, const void* VAR_7, size_t VAR_8, unsigned VAR_9, unsigned VAR_10)
{
    fseWkspMax_t* VAR_11;
    size_t VAR_12;

    FUNC_0(sizeof(fseWkspMax_t) >= FUNC_4(VAR_2, VAR_1));

    if (VAR_10 > VAR_2)
        return FUNC_1(VAR_4);

    VAR_11 = FUNC_2(VAR_3, sizeof(fseWkspMax_t), VAR_0);

    if (!VAR_11)
        return 0;

    VAR_12 = FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, sizeof(fseWkspMax_t));

    FUNC_3(VAR_11);

    return VAR_12;
}
