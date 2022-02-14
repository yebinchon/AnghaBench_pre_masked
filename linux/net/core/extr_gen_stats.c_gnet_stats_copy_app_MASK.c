
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnet_dump {int xstats_len; scalar_t__ lock; scalar_t__ tail; int xstats; scalar_t__ compat_xstats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gnet_dump*,int ,void*,int,int ) ;
 int FUNC_1 (void*,int,int ) ;
 int FUNC_2 (scalar_t__) ;

int
FUNC_3(struct gnet_dump *VAR_3, void *VAR_4, int VAR_5)
{
 if (VAR_3->compat_xstats) {
  VAR_3->xstats = FUNC_1(VAR_4, VAR_5, VAR_0);
  if (!VAR_3->xstats)
   goto err_out;
  VAR_3->xstats_len = VAR_5;
 }

 if (VAR_3->tail)
  return FUNC_0(VAR_3, VAR_1, VAR_4, VAR_5,
           VAR_2);

 return 0;

err_out:
 if (VAR_3->lock)
  FUNC_2(VAR_3->lock);
 VAR_3->xstats_len = 0;
 return -1;
}
