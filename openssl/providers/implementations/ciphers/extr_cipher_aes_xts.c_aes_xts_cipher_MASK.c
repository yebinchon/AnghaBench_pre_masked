
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * key2; int * key1; } ;
struct TYPE_4__ {int enc; int iv; int iv_set; } ;
struct TYPE_5__ {TYPE_1__ base; TYPE_3__ xts; int (* stream ) (unsigned char const*,unsigned char*,size_t,int *,int *,int ) ;} ;
typedef TYPE_2__ PROV_AES_XTS_CTX ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ,unsigned char const*,unsigned char*,size_t,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (unsigned char const*,unsigned char*,size_t,int *,int *,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_4, unsigned char *VAR_5, size_t *VAR_6,
                          size_t VAR_7, const unsigned char *VAR_8, size_t VAR_9)
{
    PROV_AES_XTS_CTX *VAR_10 = (PROV_AES_XTS_CTX *)VAR_4;

    if (VAR_10->xts.key1 == ((void*)0)
            || VAR_10->xts.key2 == ((void*)0)
            || !VAR_10->base.iv_set
            || VAR_5 == ((void*)0)
            || VAR_8 == ((void*)0)
            || VAR_9 < VAR_0)
        return 0;







    if (VAR_9 > VAR_3 * VAR_0) {
        FUNC_1(VAR_1, VAR_2);
        return 0;
    }

    if (VAR_10->stream != ((void*)0))
        (*VAR_10->stream)(VAR_8, VAR_5, VAR_9, VAR_10->xts.key1, VAR_10->xts.key2, VAR_10->base.iv);
    else if (FUNC_0(&VAR_10->xts, VAR_10->base.iv, VAR_8, VAR_5, VAR_9,
                                   VAR_10->base.enc))
        return 0;

    *VAR_6 = VAR_9;
    return 1;
}
