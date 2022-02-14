
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct bdi_writeback {scalar_t__ dirty_exceeded; } ;
struct backing_dev_info {struct bdi_writeback wb; } ;
struct address_space {struct inode* host; } ;
struct TYPE_2__ {int nr_dirtied_pause; int nr_dirtied; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bdi_writeback*,int) ;
 int FUNC_1 (struct backing_dev_info*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct backing_dev_info* FUNC_3 (struct inode*) ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_5 ;
 int* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 struct bdi_writeback* FUNC_9 (struct backing_dev_info*,int ) ;
 int FUNC_10 (struct bdi_writeback*) ;

void FUNC_11(struct address_space *VAR_6)
{
 struct inode *VAR_7 = VAR_6->host;
 struct backing_dev_info *VAR_8 = FUNC_3(VAR_7);
 struct bdi_writeback *VAR_9 = ((void*)0);
 int VAR_10;
 int *VAR_11;

 if (!FUNC_1(VAR_8))
  return;

 if (FUNC_2(VAR_7))
  VAR_9 = FUNC_9(VAR_8, VAR_0);
 if (!VAR_9)
  VAR_9 = &VAR_8->wb;

 VAR_10 = VAR_3->nr_dirtied_pause;
 if (VAR_9->dirty_exceeded)
  VAR_10 = FUNC_4(VAR_10, 32 >> (VAR_1 - 10));

 FUNC_5();






 VAR_11 = FUNC_7(&VAR_2);
 if (FUNC_8(VAR_3->nr_dirtied >= VAR_10))
  *VAR_11 = 0;
 else if (FUNC_8(*VAR_11 >= VAR_5)) {
  *VAR_11 = 0;
  VAR_10 = 0;
 }





 VAR_11 = FUNC_7(&VAR_4);
 if (*VAR_11 > 0 && VAR_3->nr_dirtied < VAR_10) {
  unsigned long VAR_12;
  VAR_12 = FUNC_4(*VAR_11, VAR_10 - VAR_3->nr_dirtied);
  *VAR_11 -= VAR_12;
  VAR_3->nr_dirtied += VAR_12;
 }
 FUNC_6();

 if (FUNC_8(VAR_3->nr_dirtied >= VAR_10))
  FUNC_0(VAR_9, VAR_3->nr_dirtied);

 FUNC_10(VAR_9);
}
