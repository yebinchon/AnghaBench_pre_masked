
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siphash_data_st {int siphash; } ;


 int FUNC_0 (int *,unsigned char*,size_t) ;
 size_t FUNC_1 (struct siphash_data_st*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, unsigned char *VAR_1, size_t *VAR_2,
                         size_t VAR_3)
{
    struct siphash_data_st *VAR_4 = VAR_0;
    size_t VAR_5 = FUNC_1(VAR_4);

    if (VAR_3 < VAR_5)
        return 0;

    *VAR_2 = VAR_5;
    return FUNC_0(&VAR_4->siphash, VAR_1, VAR_5);
}
