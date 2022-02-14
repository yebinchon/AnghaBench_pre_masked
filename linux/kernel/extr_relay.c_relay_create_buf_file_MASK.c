
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rchan_buf {int dummy; } ;
struct rchan {char* base_filename; int is_global; int parent; TYPE_1__* cb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct dentry* (* create_buf_file ) (char*,int ,int ,struct rchan_buf*,int *) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*,scalar_t__,char*,char*,unsigned int) ;
 struct dentry* FUNC_4 (char*,int ,int ,struct rchan_buf*,int *) ;

__attribute__((used)) static struct dentry *FUNC_5(struct rchan *VAR_3,
         struct rchan_buf *VAR_4,
         unsigned int VAR_5)
{
 struct dentry *VAR_6;
 char *VAR_7;

 VAR_7 = FUNC_2(VAR_1 + 1, VAR_0);
 if (!VAR_7)
  return ((void*)0);
 FUNC_3(VAR_7, VAR_1, "%s%d", VAR_3->base_filename, VAR_5);


 VAR_6 = VAR_3->cb->create_buf_file(VAR_7, VAR_3->parent,
        VAR_2, VAR_4,
        &VAR_3->is_global);
 if (FUNC_0(VAR_6))
  VAR_6 = ((void*)0);

 FUNC_1(VAR_7);

 return VAR_6;
}
