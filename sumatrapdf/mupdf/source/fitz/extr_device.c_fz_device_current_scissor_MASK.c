
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_rect ;
struct TYPE_5__ {int container_len; TYPE_1__* container; } ;
typedef TYPE_2__ fz_device ;
typedef int fz_context ;
struct TYPE_4__ {int scissor; } ;


 int VAR_0 ;

fz_rect
FUNC_0(fz_context *VAR_1, fz_device *VAR_2)
{
 if (VAR_2->container_len > 0)
  return VAR_2->container[VAR_2->container_len-1].scissor;
 return VAR_0;
}
