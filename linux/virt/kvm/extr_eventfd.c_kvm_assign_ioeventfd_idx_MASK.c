
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_ioeventfd {int flags; int datamatch; int len; int addr; int fd; } ;
struct kvm {int slots_lock; int ioeventfds; } ;
struct eventfd_ctx {int dummy; } ;
struct _ioeventfd {int bus_idx; int wildcard; int list; int dev; int length; int addr; int datamatch; struct eventfd_ctx* eventfd; } ;
typedef enum kvm_bus { ____Placeholder_kvm_bus } kvm_bus ;
struct TYPE_2__ {int ioeventfd_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct eventfd_ctx*) ;
 int VAR_3 ;
 int FUNC_2 (struct eventfd_ctx*) ;
 struct eventfd_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct eventfd_ctx*) ;
 scalar_t__ FUNC_5 (struct kvm*,struct _ioeventfd*) ;
 int VAR_4 ;
 int FUNC_6 (struct _ioeventfd*) ;
 TYPE_1__* FUNC_7 (struct kvm*,int) ;
 int FUNC_8 (struct kvm*,int,int ,int ,int *) ;
 int FUNC_9 (int *,int *) ;
 struct _ioeventfd* FUNC_10 (int,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct kvm *VAR_5,
    enum kvm_bus VAR_6,
    struct kvm_ioeventfd *VAR_7)
{

 struct eventfd_ctx *VAR_8;
 struct _ioeventfd *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(VAR_7->fd);
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 VAR_9 = FUNC_10(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto fail;
 }

 FUNC_0(&VAR_9->list);
 VAR_9->addr = VAR_7->addr;
 VAR_9->bus_idx = VAR_6;
 VAR_9->length = VAR_7->len;
 VAR_9->eventfd = VAR_8;


 if (VAR_7->flags & VAR_3)
  VAR_9->datamatch = VAR_7->datamatch;
 else
  VAR_9->wildcard = 1;

 FUNC_12(&VAR_5->slots_lock);


 if (FUNC_5(VAR_5, VAR_9)) {
  VAR_10 = -VAR_0;
  goto unlock_fail;
 }

 FUNC_9(&VAR_9->dev, &VAR_4);

 VAR_10 = FUNC_8(VAR_5, VAR_6, VAR_9->addr, VAR_9->length,
          &VAR_9->dev);
 if (VAR_10 < 0)
  goto unlock_fail;

 FUNC_7(VAR_5, VAR_6)->ioeventfd_count++;
 FUNC_11(&VAR_9->list, &VAR_5->ioeventfds);

 FUNC_13(&VAR_5->slots_lock);

 return 0;

unlock_fail:
 FUNC_13(&VAR_5->slots_lock);

fail:
 FUNC_6(VAR_9);
 FUNC_4(VAR_8);

 return VAR_10;
}
