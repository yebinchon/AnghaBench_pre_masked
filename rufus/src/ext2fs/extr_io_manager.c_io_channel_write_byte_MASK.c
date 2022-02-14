
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* io_channel ;
typedef int errcode_t ;
struct TYPE_7__ {TYPE_1__* manager; } ;
struct TYPE_6__ {int (* write_byte ) (TYPE_2__*,unsigned long,int,void const*) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,unsigned long,int,void const*) ;

errcode_t FUNC_2(io_channel VAR_2, unsigned long VAR_3,
    int VAR_4, const void *VAR_5)
{
 FUNC_0(VAR_2, VAR_0);

 if (VAR_2->manager->write_byte)
  return VAR_2->manager->write_byte(VAR_2, VAR_3,
          VAR_4, VAR_5);

 return VAR_1;
}
