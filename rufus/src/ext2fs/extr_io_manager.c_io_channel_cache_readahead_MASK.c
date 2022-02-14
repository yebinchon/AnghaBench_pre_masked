
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* io_channel ;
typedef int errcode_t ;
struct TYPE_6__ {TYPE_1__* manager; } ;
struct TYPE_5__ {int (* cache_readahead ) (TYPE_2__*,unsigned long long,unsigned long long) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,unsigned long long,unsigned long long) ;

errcode_t FUNC_1(io_channel VAR_1, unsigned long long VAR_2,
         unsigned long long VAR_3)
{
 if (!VAR_1->manager->cache_readahead)
  return VAR_0;

 return VAR_1->manager->cache_readahead(VAR_1, VAR_2, VAR_3);
}
