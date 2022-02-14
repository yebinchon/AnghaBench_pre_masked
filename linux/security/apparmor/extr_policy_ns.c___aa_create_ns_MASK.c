
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_2__ {int list; int name; int hname; } ;
struct aa_ns {int lock; int sub_ns; TYPE_1__ base; int parent; scalar_t__ level; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 struct aa_ns* FUNC_2 (int) ;
 int FUNC_3 (struct aa_ns*,int ,char const*,struct dentry*) ;
 int FUNC_4 (struct aa_ns*) ;
 int FUNC_5 (struct aa_ns*) ;
 struct aa_ns* FUNC_6 (int ,char const*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct aa_ns*) ;

__attribute__((used)) static struct aa_ns *FUNC_12(struct aa_ns *VAR_1, const char *VAR_2,
        struct dentry *VAR_3)
{
 struct aa_ns *VAR_4;
 int VAR_5;

 FUNC_0(!VAR_1);
 FUNC_0(!VAR_2);
 FUNC_0(!FUNC_8(&VAR_1->lock));

 VAR_4 = FUNC_6(VAR_1->base.hname, VAR_2);
 if (!VAR_4)
  return FUNC_2(-VAR_0);
 VAR_4->level = VAR_1->level + 1;
 FUNC_9(&VAR_4->lock, VAR_4->level);
 VAR_5 = FUNC_3(VAR_4, FUNC_11(VAR_1), VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_1("Failed to create interface for ns %s\n",
    VAR_4->base.name);
  FUNC_10(&VAR_4->lock);
  FUNC_4(VAR_4);
  return FUNC_2(VAR_5);
 }
 VAR_4->parent = FUNC_5(VAR_1);
 FUNC_7(&VAR_4->base.list, &VAR_1->sub_ns);

 FUNC_5(VAR_4);
 FUNC_10(&VAR_4->lock);

 return VAR_4;
}
