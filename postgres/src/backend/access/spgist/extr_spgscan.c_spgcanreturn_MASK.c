
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int canReturnData; } ;
struct TYPE_5__ {TYPE_1__ config; } ;
typedef TYPE_2__ SpGistCache ;
typedef int Relation ;


 TYPE_2__* FUNC_0 (int ) ;

bool
FUNC_1(Relation VAR_0, int VAR_1)
{
 SpGistCache *VAR_2;


 VAR_2 = FUNC_0(VAR_0);

 return VAR_2->config.canReturnData;
}
