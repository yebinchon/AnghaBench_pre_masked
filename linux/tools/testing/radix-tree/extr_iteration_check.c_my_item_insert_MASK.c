
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xarray {int dummy; } ;
struct item {int order; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct xarray*,unsigned long) ;
 int FUNC_1 (struct item*) ;
 struct item* FUNC_2 (unsigned long,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,unsigned long,int) ;
 int FUNC_8 (int *,struct item*) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct xarray *VAR_4, unsigned long VAR_5)
{
 FUNC_0(VAR_3, VAR_4, VAR_5);
 struct item *VAR_6 = FUNC_2(VAR_5, 0);
 int VAR_7;

retry:
 FUNC_4(&VAR_3);
 for (VAR_7 = VAR_2; VAR_7 >= 0; VAR_7--) {
  FUNC_7(&VAR_3, VAR_5, VAR_7);
  VAR_6->order = VAR_7;
  if (FUNC_3(&VAR_3))
   continue;
  FUNC_8(&VAR_3, VAR_6);
  FUNC_6(&VAR_3, VAR_1);
  break;
 }
 FUNC_9(&VAR_3);
 if (FUNC_5(&VAR_3, VAR_0))
  goto retry;
 if (VAR_7 < 0)
  FUNC_1(VAR_6);
}
