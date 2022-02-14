
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmac_data_st {int ctx; } ;


 int FUNC_0 (int ,int ,int,unsigned char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned char*,int*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void *VAR_1, unsigned char *VAR_2, size_t *VAR_3,
                      size_t VAR_4)
{
    struct gmac_data_st *VAR_5 = VAR_1;
    int VAR_6 = 0;

    if (!FUNC_1(VAR_5->ctx, VAR_2, &VAR_6))
        return 0;


    VAR_6 = FUNC_2();
    if (!FUNC_0(VAR_5->ctx, VAR_0,
                             VAR_6, VAR_2))
        return 0;

    *VAR_3 = VAR_6;
    return 1;
}
