
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ,unsigned int*,unsigned char const*,unsigned int*,unsigned int) ;

__attribute__((used)) static unsigned
FUNC_1(const unsigned char *VAR_3, size_t VAR_4)
{
    size_t VAR_5;
    unsigned VAR_6 = 0;
    unsigned VAR_7 = 0;






    VAR_5 = FUNC_0( VAR_2,
                                        &VAR_6,
                                        VAR_3,
                                        &VAR_7,
                                        (unsigned)VAR_4);
    if (VAR_5 == VAR_0)
        return 0;

    VAR_1[VAR_5]++;

    return 1;
}
