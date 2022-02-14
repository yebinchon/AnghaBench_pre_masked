
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ nidcnt; int nid_arr; } ;
typedef TYPE_1__ nid_cb_st ;


 int FUNC_0 (char const*,char,int,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int **,size_t*,int ,scalar_t__) ;

int FUNC_2(uint16_t **VAR_1, size_t *VAR_2, const char *VAR_3)
{

    nid_cb_st VAR_4;
    VAR_4.nidcnt = 0;
    if (!FUNC_0(VAR_3, ':', 1, VAR_0, &VAR_4))
        return 0;
    if (VAR_1 == ((void*)0))
        return 1;
    return FUNC_1(VAR_1, VAR_2, VAR_4.nid_arr, VAR_4.nidcnt);



}
