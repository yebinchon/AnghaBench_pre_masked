
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snapshot_data {scalar_t__ mode; scalar_t__ free_bitmaps; scalar_t__ frozen; int swap; } ;
struct inode {int dummy; } ;
struct file {struct snapshot_data* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_4, struct file *VAR_5)
{
 struct snapshot_data *VAR_6;

 FUNC_3();

 FUNC_6();
 VAR_6 = VAR_5->private_data;
 FUNC_1(VAR_6->swap);
 if (VAR_6->frozen) {
  FUNC_5();
  FUNC_2();
  FUNC_7();
 } else if (VAR_6->free_bitmaps) {
  FUNC_2();
 }
 FUNC_4(VAR_6->mode == VAR_0 ?
   VAR_1 : VAR_2);
 FUNC_0(&VAR_3);

 FUNC_8();

 return 0;
}
