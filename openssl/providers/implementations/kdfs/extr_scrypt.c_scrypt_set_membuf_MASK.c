
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data_size; int * data; } ;
typedef TYPE_1__ OSSL_PARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,size_t) ;
 unsigned char* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__ const*,void**,int ,size_t*) ;

__attribute__((used)) static int FUNC_4(unsigned char **VAR_2, size_t *VAR_3,
                             const OSSL_PARAM *VAR_4)
{
    FUNC_1(*VAR_2, *VAR_3);
    if (VAR_4->data_size == 0) {
        if ((*VAR_2 = FUNC_2(1)) == ((void*)0)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
    } else if (VAR_4->data != ((void*)0)) {
        *VAR_2 = ((void*)0);
        if (!FUNC_3(VAR_4, (void **)VAR_2, 0, VAR_3))
            return 0;
    }
    return 1;
}
