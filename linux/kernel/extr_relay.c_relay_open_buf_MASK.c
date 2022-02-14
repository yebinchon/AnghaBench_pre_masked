
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rchan_buf {unsigned int cpu; } ;
struct rchan {int buf; int is_global; TYPE_1__* cb; scalar_t__ has_base_filename; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct dentry* (* create_buf_file ) (int *,int *,int ,struct rchan_buf*,int *) ;} ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (struct rchan_buf*,int) ;
 struct rchan_buf** FUNC_2 (int ,int ) ;
 struct rchan_buf* FUNC_3 (struct rchan*) ;
 struct dentry* FUNC_4 (struct rchan*,struct rchan_buf*,unsigned int) ;
 int FUNC_5 (struct rchan_buf*) ;
 int FUNC_6 (struct rchan_buf*,struct dentry*) ;
 struct dentry* FUNC_7 (int *,int *,int ,struct rchan_buf*,int *) ;

__attribute__((used)) static struct rchan_buf *FUNC_8(struct rchan *VAR_1, unsigned int VAR_2)
{
  struct rchan_buf *VAR_3 = ((void*)0);
 struct dentry *VAR_4;

  if (VAR_1->is_global)
  return *FUNC_2(VAR_1->buf, 0);

 VAR_3 = FUNC_3(VAR_1);
 if (!VAR_3)
  return ((void*)0);

 if (VAR_1->has_base_filename) {
  VAR_4 = FUNC_4(VAR_1, VAR_3, VAR_2);
  if (!VAR_4)
   goto free_buf;
  FUNC_6(VAR_3, VAR_4);
 } else {

  VAR_4 = VAR_1->cb->create_buf_file(((void*)0), ((void*)0),
         VAR_0, VAR_3,
         &VAR_1->is_global);
  if (FUNC_0(VAR_4))
   goto free_buf;
 }

  VAR_3->cpu = VAR_2;
  FUNC_1(VAR_3, 1);

  if(VAR_1->is_global) {
  *FUNC_2(VAR_1->buf, 0) = VAR_3;
   VAR_3->cpu = 0;
   }

 return VAR_3;

free_buf:
  FUNC_5(VAR_3);
 return ((void*)0);
}
