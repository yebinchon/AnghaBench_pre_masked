
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_stats_debugfs_item {int mode; size_t kind; scalar_t__ name; int offset; } ;
struct kvm_stat_data {int mode; int offset; struct kvm* kvm; } ;
struct kvm {int debugfs_dentry; struct kvm_stat_data** debugfs_stat_data; } ;
typedef int dir_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__,int,int ,struct kvm_stat_data*,int ) ;
 struct kvm_stats_debugfs_item* VAR_4 ;
 int FUNC_2 () ;
 struct kvm_stat_data** FUNC_3 (int ,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct kvm_stat_data* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int,char*,int,int) ;
 int * VAR_7 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct kvm *VAR_8, int VAR_9)
{
 char VAR_10[VAR_2 * 2];
 struct kvm_stat_data *VAR_11;
 struct kvm_stats_debugfs_item *VAR_12;

 if (!FUNC_2())
  return 0;

 FUNC_5(VAR_10, sizeof(VAR_10), "%d-%d", FUNC_6(VAR_3), VAR_9);
 VAR_8->debugfs_dentry = FUNC_0(VAR_10, VAR_5);

 VAR_8->debugfs_stat_data = FUNC_3(VAR_6,
      sizeof(*VAR_8->debugfs_stat_data),
      VAR_1);
 if (!VAR_8->debugfs_stat_data)
  return -VAR_0;

 for (VAR_12 = VAR_4; VAR_12->name; VAR_12++) {
  VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_1);
  if (!VAR_11)
   return -VAR_0;

  VAR_11->kvm = VAR_8;
  VAR_11->offset = VAR_12->offset;
  VAR_11->mode = VAR_12->mode ? VAR_12->mode : 0644;
  VAR_8->debugfs_stat_data[VAR_12 - VAR_4] = VAR_11;
  FUNC_1(VAR_12->name, VAR_11->mode, VAR_8->debugfs_dentry,
        VAR_11, VAR_7[VAR_12->kind]);
 }
 return 0;
}
