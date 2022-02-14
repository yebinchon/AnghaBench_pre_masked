
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* io_channel ;
typedef int errcode_t ;
struct TYPE_7__ {TYPE_1__* manager; } ;
struct TYPE_6__ {int (* zeroout ) (TYPE_2__*,unsigned long long,unsigned long long) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,unsigned long long,unsigned long long) ;

errcode_t FUNC_2(io_channel VAR_2, unsigned long long VAR_3,
        unsigned long long VAR_4)
{
 FUNC_0(VAR_2, VAR_0);

 if (VAR_2->manager->zeroout)
  return (VAR_2->manager->zeroout)(VAR_2, VAR_3, VAR_4);

 return VAR_1;
}
