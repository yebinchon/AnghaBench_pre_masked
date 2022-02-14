
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned char*,size_t) ;
 size_t FUNC_2 (unsigned char*,int*,unsigned char const*,long) ;

int FUNC_3(uint64_t *VAR_2, int *VAR_3, const unsigned char **VAR_4, long VAR_5)
{
    unsigned char VAR_6[sizeof(uint64_t)];
    size_t VAR_7;

    VAR_7 = FUNC_2(((void*)0), ((void*)0), *VAR_4, VAR_5);
    if (VAR_7 == 0)
        return 0;
    if (VAR_7 > sizeof(uint64_t)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    (void)FUNC_2(VAR_6, VAR_3, *VAR_4, VAR_5);
    return FUNC_1(VAR_2, VAR_6, VAR_7);
}
