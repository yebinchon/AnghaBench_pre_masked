
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page_pool_params {int dummy; } ;
struct TYPE_2__ {int flags; int pool_size; scalar_t__ dma_dir; int dev; } ;
struct page_pool {TYPE_1__ p; int user_cnt; int pages_state_release_cnt; int ring; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct page_pool_params const*,int) ;
 scalar_t__ FUNC_3 (int *,unsigned int,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(struct page_pool *VAR_8,
     const struct page_pool_params *VAR_9)
{
 unsigned int VAR_10 = 1024;

 FUNC_2(&VAR_8->p, VAR_9, sizeof(VAR_8->p));


 if (VAR_8->p.flags & ~(VAR_6))
  return -VAR_3;

 if (VAR_8->p.pool_size)
  VAR_10 = VAR_8->p.pool_size;


 if (VAR_10 > 32768)
  return -VAR_2;





 if ((VAR_8->p.dma_dir != VAR_1) &&
     (VAR_8->p.dma_dir != VAR_0))
  return -VAR_3;

 if (FUNC_3(&VAR_8->ring, VAR_10, VAR_5) < 0)
  return -VAR_4;

 FUNC_0(&VAR_8->pages_state_release_cnt, 0);


 FUNC_4(&VAR_8->user_cnt, 1);

 if (VAR_8->p.flags & VAR_7)
  FUNC_1(VAR_8->p.dev);

 return 0;
}
