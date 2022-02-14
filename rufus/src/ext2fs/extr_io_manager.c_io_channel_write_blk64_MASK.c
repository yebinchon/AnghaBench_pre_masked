
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* io_channel ;
typedef int errcode_t ;
struct TYPE_8__ {TYPE_1__* manager; } ;
struct TYPE_7__ {int (* write_blk ) (TYPE_2__*,unsigned long,int,void const*) ;int (* write_blk64 ) (TYPE_2__*,unsigned long long,int,void const*) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,unsigned long long,int,void const*) ;
 int FUNC_2 (TYPE_2__*,unsigned long,int,void const*) ;

errcode_t FUNC_3(io_channel VAR_2, unsigned long long VAR_3,
     int VAR_4, const void *VAR_5)
{
 FUNC_0(VAR_2, VAR_1);

 if (VAR_2->manager->write_blk64)
  return (VAR_2->manager->write_blk64)(VAR_2, VAR_3,
             VAR_4, VAR_5);

 if ((VAR_3 >> 32) != 0)
  return VAR_0;

 return (VAR_2->manager->write_blk)(VAR_2, (unsigned long) VAR_3,
          VAR_4, VAR_5);
}
