
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct xarray {int dummy; } ;
struct xa_limit {int max; int min; } ;
typedef int gfp_t ;
struct TYPE_9__ {scalar_t__ xa_node; int xa_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__,struct xarray*,int ) ;
 void* VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct xarray*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,void*) ;

int FUNC_10(struct xarray *VAR_6, u32 *VAR_7, void *VAR_8,
  struct xa_limit VAR_9, gfp_t VAR_10)
{
 FUNC_1(VAR_5, VAR_6, 0);

 if (FUNC_0(FUNC_3(VAR_8)))
  return -VAR_1;
 if (FUNC_0(!FUNC_4(VAR_6)))
  return -VAR_1;

 if (!VAR_8)
  VAR_8 = VAR_4;

 do {
  VAR_5.xa_index = VAR_9.min;
  FUNC_7(&VAR_5, VAR_9.max, VAR_3);
  if (VAR_5.xa_node == VAR_2)
   FUNC_8(&VAR_5, -VAR_0);
  else
   *VAR_7 = VAR_5.xa_index;
  FUNC_9(&VAR_5, VAR_8);
  FUNC_5(&VAR_5, VAR_3);
 } while (FUNC_2(&VAR_5, VAR_10));

 return FUNC_6(&VAR_5);
}
