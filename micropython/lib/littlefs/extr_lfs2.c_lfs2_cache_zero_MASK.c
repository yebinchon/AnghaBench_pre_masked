
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* cfg; } ;
typedef TYPE_2__ lfs2_t ;
struct TYPE_8__ {int block; int buffer; } ;
typedef TYPE_3__ lfs2_cache_t ;
struct TYPE_6__ {int cache_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static inline void FUNC_1(lfs2_t *VAR_1, lfs2_cache_t *VAR_2) {

    FUNC_0(VAR_2->buffer, 0xff, VAR_1->cfg->cache_size);
    VAR_2->block = VAR_0;
}
