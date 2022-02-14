
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_mode; struct cache_reader* private_data; } ;
struct TYPE_2__ {int reader; int list; } ;
struct cache_reader {TYPE_1__ q; scalar_t__ offset; } ;
struct cache_detail {int writers; int queue; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 struct cache_reader* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,struct file*) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_6, struct file *VAR_7,
        struct cache_detail *VAR_8)
{
 struct cache_reader *VAR_9 = ((void*)0);

 if (!VAR_8 || !FUNC_7(VAR_8->owner))
  return -VAR_0;
 FUNC_4(VAR_6, VAR_7);
 if (VAR_7->f_mode & VAR_2) {
  VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_4);
  if (!VAR_9) {
   FUNC_3(VAR_8->owner);
   return -VAR_1;
  }
  VAR_9->offset = 0;
  VAR_9->q.reader = 1;

  FUNC_5(&VAR_5);
  FUNC_2(&VAR_9->q.list, &VAR_8->queue);
  FUNC_6(&VAR_5);
 }
 if (VAR_7->f_mode & VAR_3)
  FUNC_0(&VAR_8->writers);
 VAR_7->private_data = VAR_9;
 return 0;
}
