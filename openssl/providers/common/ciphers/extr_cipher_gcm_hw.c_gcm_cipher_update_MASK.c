
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {size_t* u; } ;
struct TYPE_12__ {int u; } ;
struct TYPE_11__ {int c; } ;
struct TYPE_15__ {int mres; TYPE_3__ len; TYPE_2__ Xi; TYPE_1__ Yi; int key; } ;
struct TYPE_14__ {TYPE_6__ gcm; int * ctr; scalar_t__ enc; } ;
typedef TYPE_4__ PROV_GCM_CTX ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*,unsigned char const*,unsigned char*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_6__*,unsigned char const*,unsigned char*,size_t,int *) ;
 scalar_t__ FUNC_3 (TYPE_6__*,unsigned char const*,unsigned char*,size_t) ;
 scalar_t__ FUNC_4 (TYPE_6__*,unsigned char const*,unsigned char*,size_t,int *) ;
 size_t FUNC_5 (unsigned char const*,unsigned char*,size_t,int ,int ,int ) ;
 size_t FUNC_6 (unsigned char const*,unsigned char*,size_t,int ,int ,int ) ;

int FUNC_7(PROV_GCM_CTX *VAR_0, const unsigned char *VAR_1,
                      size_t VAR_2, unsigned char *VAR_3)
{
    if (VAR_0->enc) {
        if (VAR_0->ctr != ((void*)0)) {
            if (FUNC_4(&VAR_0->gcm, VAR_1, VAR_3, VAR_2, VAR_0->ctr))
                return 0;

        } else {
            if (FUNC_3(&VAR_0->gcm, VAR_1, VAR_3, VAR_2))
                return 0;
        }
    } else {
        if (VAR_0->ctr != ((void*)0)) {
            if (FUNC_2(&VAR_0->gcm, VAR_1, VAR_3, VAR_2, VAR_0->ctr))
                return 0;

        } else {
            if (FUNC_1(&VAR_0->gcm, VAR_1, VAR_3, VAR_2))
                return 0;
        }
    }
    return 1;
}
