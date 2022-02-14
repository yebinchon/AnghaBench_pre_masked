
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* meth; } ;
struct TYPE_5__ {int (* compute_key ) (unsigned char**,size_t*,int const*,TYPE_2__ const*) ;} ;
typedef int EC_POINT ;
typedef TYPE_2__ EC_KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 size_t VAR_3 ;
 int FUNC_1 (unsigned char*,size_t) ;
 int FUNC_2 (void*,unsigned char*,size_t) ;
 int FUNC_3 (unsigned char**,size_t*,int const*,TYPE_2__ const*) ;

int FUNC_4(void *VAR_4, size_t VAR_5, const EC_POINT *VAR_6,
                     const EC_KEY *VAR_7,
                     void *(*VAR_8) (const void *VAR_9, size_t VAR_10, void *VAR_11,
                                   size_t *VAR_12))
{
    unsigned char *VAR_13 = ((void*)0);
    size_t VAR_14;
    if (VAR_7->meth->compute_key == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    if (VAR_5 > VAR_3) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    if (!VAR_7->meth->compute_key(&VAR_13, &VAR_14, VAR_6, VAR_7))
        return 0;
    if (VAR_8 != ((void*)0)) {
        VAR_8(VAR_13, VAR_14, VAR_4, &VAR_5);
    } else {
        if (VAR_5 > VAR_14)
            VAR_5 = VAR_14;
        FUNC_2(VAR_4, VAR_13, VAR_5);
    }
    FUNC_1(VAR_13, VAR_14);
    return VAR_5;
}
