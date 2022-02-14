
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;
typedef int json_dump_callback_t ;


 size_t VAR_0 ;
 int FUNC_0 (int const*,size_t,int ,int ,void*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;

int FUNC_3(const json_t *VAR_1, json_dump_callback_t VAR_2, void *VAR_3, size_t VAR_4)
{
    if(!(VAR_4 & VAR_0)) {
        if(!FUNC_1(VAR_1) && !FUNC_2(VAR_1))
           return -1;
    }

    return FUNC_0(VAR_1, VAR_4, 0, VAR_2, VAR_3);
}
