
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umh_info {int list; } ;
struct subprocess_info {int dummy; } ;
struct file {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int VAR_1 ;
 int FUNC_2 (struct subprocess_info*,int ) ;
 struct subprocess_info* FUNC_3 (struct file*,int ,int ,struct umh_info*) ;
 int FUNC_4 (struct file*) ;
 size_t FUNC_5 (struct file*,void*,size_t,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct file* FUNC_9 (char*,size_t,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_10(void *VAR_6, size_t VAR_7, struct umh_info *VAR_8)
{
 struct subprocess_info *VAR_9;
 struct file *VAR_10;
 ssize_t VAR_11;
 loff_t VAR_12 = 0;
 int VAR_13;

 VAR_10 = FUNC_9("", VAR_7, 0);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_11 = FUNC_5(VAR_10, VAR_6, VAR_7, &VAR_12);
 if (VAR_11 != VAR_7) {
  VAR_13 = VAR_11;
  if (VAR_13 >= 0)
   VAR_13 = -VAR_0;
  goto out;
 }

 VAR_13 = -VAR_0;
 VAR_9 = FUNC_3(VAR_10, VAR_5,
        VAR_2, VAR_8);
 if (!VAR_9)
  goto out;

 VAR_13 = FUNC_2(VAR_9, VAR_1);
 if (!VAR_13) {
  FUNC_7(&VAR_4);
  FUNC_6(&VAR_8->list, &VAR_3);
  FUNC_8(&VAR_4);
 }
out:
 FUNC_4(VAR_10);
 return VAR_13;
}
