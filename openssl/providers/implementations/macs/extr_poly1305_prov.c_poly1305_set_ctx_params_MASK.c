
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct poly1305_data_st {int poly1305; } ;
struct TYPE_5__ {scalar_t__ data_type; scalar_t__ data_size; int data; } ;
typedef TYPE_1__ OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_5, const OSSL_PARAM *VAR_6)
{
    struct poly1305_data_st *VAR_7 = VAR_5;
    const OSSL_PARAM *VAR_8 = ((void*)0);

    if ((VAR_8 = FUNC_1(VAR_6, VAR_1)) != ((void*)0)) {
        if (VAR_8->data_type != VAR_2
            || VAR_8->data_size != VAR_3) {
            FUNC_0(VAR_0, VAR_4);
            return 0;
        }
        FUNC_2(&VAR_7->poly1305, VAR_8->data);
    }
    return 1;
}
