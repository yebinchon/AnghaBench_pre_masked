
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (unsigned int*,unsigned int*,void const*,size_t,unsigned int*) ;
 int VAR_2 ;

size_t FUNC_3(unsigned* VAR_3, unsigned* VAR_4,
                     const void* VAR_5, size_t VAR_6)
{
    unsigned* VAR_7 = FUNC_0(VAR_2, sizeof(unsigned) * VAR_1, VAR_0);
    size_t VAR_8;

    if (!VAR_7)
        return 0;

    VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

    FUNC_1(VAR_7);

    return VAR_8;
}
