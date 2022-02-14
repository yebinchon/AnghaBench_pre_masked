
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_device_ops {int (* create ) (struct kvm_device*,int) ;int (* destroy ) (struct kvm_device*) ;int name; int (* init ) (struct kvm_device*) ;} ;
struct kvm_device {int vm_node; struct kvm* kvm; struct kvm_device_ops* ops; } ;
struct kvm_create_device {int flags; int fd; int type; } ;
struct kvm {int lock; int devices; } ;


 int FUNC_0 (struct kvm_device_ops**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,struct kvm_device*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct kvm_device*) ;
 int VAR_6 ;
 struct kvm_device_ops** VAR_7 ;
 int FUNC_4 (struct kvm*) ;
 int FUNC_5 (struct kvm*) ;
 struct kvm_device* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct kvm_device*,int) ;
 int FUNC_12 (struct kvm_device*) ;
 int FUNC_13 (struct kvm_device*) ;

__attribute__((used)) static int FUNC_14(struct kvm *VAR_8,
       struct kvm_create_device *VAR_9)
{
 struct kvm_device_ops *VAR_10 = ((void*)0);
 struct kvm_device *VAR_11;
 bool VAR_12 = VAR_9->flags & VAR_3;
 int VAR_13;
 int VAR_14;

 if (VAR_9->type >= FUNC_0(VAR_7))
  return -VAR_0;

 VAR_13 = FUNC_2(VAR_9->type, FUNC_0(VAR_7));
 VAR_10 = VAR_7[VAR_13];
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 if (VAR_12)
  return 0;

 VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->ops = VAR_10;
 VAR_11->kvm = VAR_8;

 FUNC_9(&VAR_8->lock);
 VAR_14 = VAR_10->create(VAR_11, VAR_13);
 if (VAR_14 < 0) {
  FUNC_10(&VAR_8->lock);
  FUNC_3(VAR_11);
  return VAR_14;
 }
 FUNC_7(&VAR_11->vm_node, &VAR_8->devices);
 FUNC_10(&VAR_8->lock);

 if (VAR_10->init)
  VAR_10->init(VAR_11);

 FUNC_4(VAR_8);
 VAR_14 = FUNC_1(VAR_10->name, &VAR_6, VAR_11, VAR_5 | VAR_4);
 if (VAR_14 < 0) {
  FUNC_5(VAR_8);
  FUNC_9(&VAR_8->lock);
  FUNC_8(&VAR_11->vm_node);
  FUNC_10(&VAR_8->lock);
  VAR_10->destroy(VAR_11);
  return VAR_14;
 }

 VAR_9->fd = VAR_14;
 return 0;
}
