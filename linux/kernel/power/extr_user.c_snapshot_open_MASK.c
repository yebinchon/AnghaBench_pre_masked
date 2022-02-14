
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snapshot_handle {int dummy; } ;
struct snapshot_data {int swap; int mode; int free_bitmaps; int frozen; int ready; int platform_support; int handle; } ;
struct inode {int dummy; } ;
struct file {int f_flags; struct snapshot_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (struct inode*,struct file*) ;
 int VAR_11 ;
 struct snapshot_data VAR_12 ;
 int FUNC_8 (scalar_t__,int ,int *) ;
 scalar_t__ VAR_13 ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_14, struct file *VAR_15)
{
 struct snapshot_data *VAR_16;
 int VAR_17, VAR_18 = 0;

 if (!FUNC_4())
  return -VAR_2;

 FUNC_5();

 if (!FUNC_1(&VAR_11, -1, 0)) {
  VAR_17 = -VAR_0;
  goto Unlock;
 }

 if ((VAR_15->f_flags & VAR_3) == VAR_5) {
  FUNC_2(&VAR_11);
  VAR_17 = -VAR_1;
  goto Unlock;
 }
 FUNC_7(VAR_14, VAR_15);
 VAR_16 = &VAR_12;
 VAR_15->private_data = VAR_16;
 FUNC_6(&VAR_16->handle, 0, sizeof(struct snapshot_handle));
 if ((VAR_15->f_flags & VAR_3) == VAR_4) {

  VAR_16->swap = VAR_13 ?
   FUNC_8(VAR_13, 0, ((void*)0)) : -1;
  VAR_16->mode = VAR_4;
  VAR_16->free_bitmaps = 0;
  VAR_17 = FUNC_0(VAR_7, -1, &VAR_18);
  if (VAR_17)
   FUNC_0(VAR_8, --VAR_18, ((void*)0));
 } else {




  FUNC_10();

  VAR_16->swap = -1;
  VAR_16->mode = VAR_6;
  VAR_17 = FUNC_0(VAR_10, -1, &VAR_18);
  if (!VAR_17) {
   VAR_17 = FUNC_3();
   VAR_16->free_bitmaps = !VAR_17;
  } else
   VAR_18--;

  if (VAR_17)
   FUNC_0(VAR_9, VAR_18, ((void*)0));
 }
 if (VAR_17)
  FUNC_2(&VAR_11);

 VAR_16->frozen = 0;
 VAR_16->ready = 0;
 VAR_16->platform_support = 0;

 Unlock:
 FUNC_9();

 return VAR_17;
}
