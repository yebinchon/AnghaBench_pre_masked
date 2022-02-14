
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct num2name_data_st {size_t idx; char const* name; } ;
typedef int OSSL_NAMEMAP ;


 int VAR_0 ;
 int FUNC_0 (int const*,int,int ,struct num2name_data_st*) ;

const char *FUNC_1(const OSSL_NAMEMAP *VAR_1, int VAR_2,
                                  size_t VAR_3)
{
    struct num2name_data_st VAR_4;

    VAR_4.idx = VAR_3;
    VAR_4.name = ((void*)0);
    FUNC_0(VAR_1, VAR_2, VAR_0, &VAR_4);
    return VAR_4.name;
}
