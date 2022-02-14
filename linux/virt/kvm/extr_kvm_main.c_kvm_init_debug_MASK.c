
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_stats_debugfs_item {int mode; size_t kind; scalar_t__ offset; scalar_t__ name; } ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (scalar_t__,int,int ,void*,int ) ;
 struct kvm_stats_debugfs_item* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct kvm_stats_debugfs_item *VAR_4;

 VAR_1 = FUNC_0("kvm", ((void*)0));

 VAR_2 = 0;
 for (VAR_4 = VAR_0; VAR_4->name; ++VAR_4, VAR_2++) {
  int VAR_5 = VAR_4->mode ? VAR_4->mode : 0644;
  FUNC_1(VAR_4->name, VAR_5, VAR_1,
        (void *)(long)VAR_4->offset,
        VAR_3[VAR_4->kind]);
 }
}
