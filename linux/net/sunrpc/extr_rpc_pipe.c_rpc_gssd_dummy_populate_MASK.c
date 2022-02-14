
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rpc_pipe {int dummy; } ;
struct qstr {int len; int name; } ;
struct dentry {int dummy; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 struct qstr FUNC_2 (int ,int ) ;
 size_t VAR_1 ;
 int FUNC_3 (struct dentry*,TYPE_1__*,int ,int) ;
 struct dentry* FUNC_4 (struct dentry*,struct qstr*) ;
 int FUNC_5 (struct dentry*) ;
 TYPE_4__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 struct dentry* FUNC_6 (struct dentry*,char*,int *,struct rpc_pipe*) ;
 int FUNC_7 (struct dentry*,TYPE_1__*,int ,int,int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static struct dentry *
FUNC_9(struct dentry *VAR_5, struct rpc_pipe *VAR_6)
{
 int VAR_7 = 0;
 struct dentry *VAR_8;
 struct dentry *VAR_9 = ((void*)0);
 struct dentry *VAR_10 = ((void*)0);
 struct qstr VAR_11 = FUNC_2(VAR_2[VAR_1].name,
      FUNC_8(VAR_2[VAR_1].name));


 VAR_8 = FUNC_4(VAR_5, &VAR_11);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_7(VAR_8, VAR_3, 0, 1, ((void*)0));
 if (VAR_7) {
  VAR_10 = FUNC_0(VAR_7);
  goto out;
 }

 VAR_11.name = VAR_3[0].name;
 VAR_11.len = FUNC_8(VAR_3[0].name);
 VAR_9 = FUNC_4(VAR_8, &VAR_11);
 if (!VAR_9) {
  VAR_10 = FUNC_0(-VAR_0);
  goto out;
 }

 VAR_7 = FUNC_7(VAR_9, VAR_4, 0, 1, ((void*)0));
 if (VAR_7) {
  FUNC_3(VAR_8, VAR_3, 0, 1);
  VAR_10 = FUNC_0(VAR_7);
  goto out;
 }

 VAR_10 = FUNC_6(VAR_9, "gssd", ((void*)0), VAR_6);
 if (FUNC_1(VAR_10)) {
  FUNC_3(VAR_9, VAR_4, 0, 1);
  FUNC_3(VAR_8, VAR_3, 0, 1);
 }
out:
 FUNC_5(VAR_9);
 FUNC_5(VAR_8);
 return VAR_10;
}
