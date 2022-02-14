
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv; } ;
typedef TYPE_1__ stream_t ;
typedef int int64_t ;
struct TYPE_5__ {int end_sector; int start_sector; } ;
typedef TYPE_2__ cdda_priv ;


 int VAR_0 ;

__attribute__((used)) static int64_t FUNC_0(stream_t *VAR_1)
{
    cdda_priv *VAR_2 = VAR_1->priv;
    return (VAR_2->end_sector + 1 - VAR_2->start_sector) * VAR_0;
}
