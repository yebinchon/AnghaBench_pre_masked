
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* io_channel ;
typedef int errcode_t ;
struct TYPE_3__ {size_t block_size; int align; } ;


 int FUNC_0 (size_t,void*) ;
 int FUNC_1 (size_t,int ,void*) ;

errcode_t FUNC_2(io_channel VAR_0, int VAR_1, void *VAR_2)
{
 size_t VAR_3;

 if (VAR_1 == 0)
  VAR_3 = VAR_0->block_size;
 else if (VAR_1 > 0)
  VAR_3 = VAR_0->block_size * VAR_1;
 else
  VAR_3 = -VAR_1;

 if (VAR_0->align)
  return FUNC_1(VAR_3, VAR_0->align, VAR_2);
 else
  return FUNC_0(VAR_3, VAR_2);
}
