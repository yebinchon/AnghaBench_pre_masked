
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {int all; int children; int list; int dentry; int name; int loaded_info; } ;
struct gcov_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gcov_node*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int ,struct gcov_node*,int *) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct gcov_node*,struct gcov_info*,char const*,struct gcov_node*) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct gcov_node*) ;
 struct gcov_node* FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char const*) ;

__attribute__((used)) static struct gcov_node *FUNC_11(struct gcov_node *VAR_3,
      struct gcov_info *VAR_4, const char *VAR_5)
{
 struct gcov_node *VAR_6;

 VAR_6 = FUNC_7(sizeof(struct gcov_node) + FUNC_10(VAR_5) + 1, VAR_0);
 if (!VAR_6)
  goto err_nomem;
 if (VAR_4) {
  VAR_6->loaded_info = FUNC_5(1, sizeof(struct gcov_info *),
        VAR_0);
  if (!VAR_6->loaded_info)
   goto err_nomem;
 }
 FUNC_4(VAR_6, VAR_4, VAR_5, VAR_3);

 if (VAR_4) {
  VAR_6->dentry = FUNC_2(FUNC_3(VAR_6->name), 0600,
     VAR_3->dentry, VAR_6, &VAR_2);
 } else
  VAR_6->dentry = FUNC_1(VAR_6->name, VAR_3->dentry);
 if (VAR_4)
  FUNC_0(VAR_6, VAR_3->dentry);
 FUNC_8(&VAR_6->list, &VAR_3->children);
 FUNC_8(&VAR_6->all, &VAR_1);

 return VAR_6;

err_nomem:
 FUNC_6(VAR_6);
 FUNC_9("out of memory\n");
 return ((void*)0);
}
