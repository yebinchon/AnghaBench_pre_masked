
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ curr; int total_blocks; int secure_blocks; TYPE_1__* params; } ;
struct TYPE_6__ {char const* key; int type; int size; int secure; scalar_t__ alloc_blocks; } ;
typedef TYPE_1__ OSSL_PARAM_BLD_DEF ;
typedef TYPE_2__ OSSL_PARAM_BLD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static OSSL_PARAM_BLD_DEF *FUNC_3(OSSL_PARAM_BLD *VAR_3, const char *VAR_4,
                                      int VAR_5, size_t VAR_6, int VAR_7,
                                      int VAR_8)
{
    OSSL_PARAM_BLD_DEF *VAR_9;

    if (VAR_3->curr >= VAR_2) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }
    VAR_9 = VAR_3->params + VAR_3->curr++;
    FUNC_2(VAR_9, 0, sizeof(*VAR_9));
    VAR_9->key = VAR_4;
    VAR_9->type = VAR_7;
    VAR_9->size = VAR_5;
    VAR_9->alloc_blocks = FUNC_1(VAR_5);
    if ((VAR_9->secure = VAR_8) != 0)
        VAR_3->secure_blocks += VAR_9->alloc_blocks;
    else
        VAR_3->total_blocks += VAR_9->alloc_blocks;
    return VAR_9;
}
