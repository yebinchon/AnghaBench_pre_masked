
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_mcdt_dev {struct sprd_mcdt_chan* chan; } ;
struct sprd_mcdt_chan {int id; int list; struct sprd_mcdt_dev* mcdt; scalar_t__ fifo_phys; int type; } ;
struct resource {scalar_t__ start; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(struct sprd_mcdt_dev *VAR_8,
     struct resource *VAR_9)
{
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  struct sprd_mcdt_chan *VAR_11 = &VAR_8->chan[VAR_10];

  if (VAR_10 < VAR_0) {
   VAR_11->id = VAR_10;
   VAR_11->type = VAR_4;
   VAR_11->fifo_phys = VAR_9->start + VAR_1 + VAR_10 * 4;
  } else {
   VAR_11->id = VAR_10 - VAR_0;
   VAR_11->type = VAR_5;
   VAR_11->fifo_phys = VAR_9->start + VAR_2 +
    (VAR_10 - VAR_0) * 4;
  }

  VAR_11->mcdt = VAR_8;
  FUNC_0(&VAR_11->list);

  FUNC_2(&VAR_7);
  FUNC_1(&VAR_11->list, &VAR_6);
  FUNC_3(&VAR_7);
 }
}
