
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct vringh_iov {scalar_t__ used; scalar_t__ i; } ;
struct TYPE_4__ {int used; int avail; int desc; } ;
struct vringh {TYPE_2__ vring; } ;
struct vring_desc {int dummy; } ;
struct virtqueue {int dummy; } ;
struct scatterlist {int dummy; } ;
struct iovec {int dummy; } ;
struct TYPE_3__ {int features; } ;
struct guest_virtio_device {int to_host_fd; unsigned long notifies; TYPE_1__ vdev; } ;
typedef int rbuf ;
typedef int cpu_set_t ;
typedef int cpu_set ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct iovec*) ;
 int FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 struct vring_desc* VAR_11 ;
 struct vring_desc* VAR_12 ;
 struct vring_desc* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int,int) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 void* FUNC_16 (int *,int,int,int ,int,int ) ;
 int FUNC_17 (void*,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_18 (char*,int,int) ;
 int VAR_18 ;
 int FUNC_19 (int*) ;
 int FUNC_20 (char*,unsigned long,unsigned long) ;
 int FUNC_21 (int,char*,int) ;
 scalar_t__ FUNC_22 (int ,int,int *) ;
 int FUNC_23 (struct scatterlist*,unsigned int) ;
 int FUNC_24 (struct scatterlist*,void*,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_25 (struct virtqueue*,struct scatterlist*,unsigned int,int*,int ) ;
 int FUNC_26 (struct virtqueue*,struct scatterlist*,unsigned int,int*,int ) ;
 int FUNC_27 (struct virtqueue*) ;
 int FUNC_28 (struct virtqueue*) ;
 int* FUNC_29 (struct virtqueue*,unsigned int*) ;
 int FUNC_30 (struct virtqueue*) ;
 int FUNC_31 (struct virtqueue*) ;
 int FUNC_32 (TYPE_2__*,int,void*,int ) ;
 struct virtqueue* FUNC_33 (int ,int,int ,TYPE_1__*,int,int,void*,int ,int ,char*) ;
 int FUNC_34 (int,int ) ;
 int FUNC_35 (struct vringh*,int,int) ;
 int FUNC_36 (struct vringh*,int*) ;
 int FUNC_37 (struct vringh*,struct vringh_iov*,struct vringh_iov*,int (*) (struct vringh*,int ,struct vringh_range*),int*) ;
 int FUNC_38 (struct vringh*,int ,int,int,int ,int ,int ) ;
 int FUNC_39 (struct vringh_iov*,struct iovec*,int ) ;
 int FUNC_40 (struct vringh_iov*,char*,int) ;
 int FUNC_41 (struct vringh_iov*,char*,int) ;
 int FUNC_42 (struct vringh*) ;
 int FUNC_43 (struct vringh*) ;
 int FUNC_44 (struct vringh*) ;
 int FUNC_45 (int*) ;
 int FUNC_46 (int,char*,int) ;

__attribute__((used)) static int FUNC_47(u64 VAR_21,
    bool (*VAR_22)(struct vringh *VAR_23,
       u64 VAR_24, struct vringh_range *VAR_25),
    bool VAR_26)
{
 void *VAR_27, *VAR_28;
 int VAR_29, VAR_30, VAR_31[2], VAR_32[2];
 unsigned long VAR_33 = 0, VAR_34 = 0, VAR_35 = 0;
 unsigned int VAR_36, VAR_37;
 cpu_set_t VAR_38;
 char VAR_39[128];


 VAR_29 = FUNC_18("/tmp/vringh_test-file", VAR_6|VAR_5|VAR_7, 0600);
 if (VAR_29 < 0)
  FUNC_8(1, "Opening /tmp/vringh_test-file");


 VAR_30 = FUNC_34(VAR_10, VAR_0)
  + VAR_10 * 2 * sizeof(int)
  + VAR_10 * 6 * sizeof(struct vring_desc);
 VAR_30 = (VAR_30 + FUNC_14() - 1) & ~(FUNC_14() - 1);
 FUNC_13(VAR_29, VAR_30);


 VAR_27 = FUNC_16(((void*)0), VAR_30, VAR_8|VAR_9, VAR_3, VAR_29, 0);
 VAR_28 = FUNC_16(((void*)0), VAR_30, VAR_8|VAR_9, VAR_3, VAR_29, 0);

 FUNC_19(VAR_31);
 FUNC_19(VAR_32);

 FUNC_2(&VAR_38);
 FUNC_11(&VAR_36, &VAR_37);
 FUNC_20("Using CPUS %u and %u\n", VAR_36, VAR_37);
 FUNC_10(VAR_19);

 if (FUNC_12() != 0) {
  struct vringh VAR_40;
  int VAR_41, VAR_42, VAR_43 = 0;
  char VAR_44[5];


  FUNC_17(VAR_28, VAR_30);

  VAR_15 = VAR_27;
  VAR_14 = VAR_15 + VAR_30;
  VAR_20 = VAR_27 - VAR_28;
  FUNC_6(VAR_20);

  FUNC_7(VAR_31[0]);
  FUNC_7(VAR_32[1]);

  FUNC_32(&VAR_40.vring, VAR_10, VAR_27, VAR_0);
  FUNC_38(&VAR_40, VAR_21, VAR_10, 1,
     VAR_40.vring.desc, VAR_40.vring.avail, VAR_40.vring.used);
  FUNC_1(VAR_36, &VAR_38);
  if (FUNC_22(FUNC_15(), sizeof(VAR_38), &VAR_38))
   FUNC_9(1, "Could not set affinity to cpu %u", VAR_36);

  while (VAR_33 < VAR_4) {
   struct iovec VAR_45[2], VAR_46[2];
   struct vringh_iov VAR_47, VAR_48;
   u16 VAR_49, VAR_50;

   if (VAR_26) {
    for (;;) {
     VAR_42 = FUNC_36(&VAR_40, &VAR_49);
     if (VAR_42 != 0)
      break;
     VAR_42 = FUNC_42(&VAR_40);
     if (VAR_42 < 0)
      FUNC_9(1, "vringh_need_notify_user: %i",
           VAR_42);
     if (VAR_42) {
      FUNC_46(VAR_31[1], "", 1);
      VAR_34++;
     }
    }
    if (VAR_42 != 1)
     FUNC_9(1, "vringh_get_head");
    VAR_50 = 0;
    goto complete;
   } else {
    FUNC_39(&VAR_47,
      VAR_45,
      FUNC_0(VAR_45));
    FUNC_39(&VAR_48,
      VAR_46,
      FUNC_0(VAR_46));

    VAR_42 = FUNC_37(&VAR_40, &VAR_47, &VAR_48,
         VAR_22, &VAR_49);
   }
   if (VAR_42 == 0) {
    VAR_42 = FUNC_42(&VAR_40);
    if (VAR_42 < 0)
     FUNC_9(1, "vringh_need_notify_user: %i",
          VAR_42);
    if (VAR_42) {
     FUNC_46(VAR_31[1], "", 1);
     VAR_34++;
    }

    if (!FUNC_44(&VAR_40))
     continue;


    if (FUNC_21(VAR_32[0], VAR_39, sizeof(VAR_39)) < 1)
     break;

    FUNC_43(&VAR_40);
    VAR_35++;
    continue;
   }
   if (VAR_42 != 1)
    FUNC_9(1, "vringh_getdesc_user: %i", VAR_42);


   if (VAR_47.used) {
    VAR_43 = FUNC_40(&VAR_47, VAR_44,
           sizeof(VAR_44));
    if (VAR_43 != 4)
     FUNC_9(1, "vringh_iov_pull_user: %i",
          VAR_43);
    FUNC_6(VAR_47.i == VAR_47.used);
    VAR_50 = 0;
   } else {
    VAR_42 = FUNC_41(&VAR_48, VAR_44, VAR_43);
    if (VAR_42 != VAR_43)
     FUNC_9(1, "vringh_iov_push_user: %i",
          VAR_42);
    FUNC_6(VAR_48.i == VAR_48.used);
    VAR_50 = VAR_42;
   }
  complete:
   VAR_33++;

   VAR_42 = FUNC_35(&VAR_40, VAR_49, VAR_50);
   if (VAR_42 != 0)
    FUNC_9(1, "vringh_complete_user: %i", VAR_42);
  }

  VAR_42 = FUNC_42(&VAR_40);
  if (VAR_42 < 0)
   FUNC_9(1, "vringh_need_notify_user: %i", VAR_42);
  if (VAR_42) {
   FUNC_46(VAR_31[1], "", 1);
   VAR_34++;
  }
  FUNC_45(&VAR_41);
  if (!FUNC_4(VAR_41))
   FUNC_9(1, "Child died with signal %i?", FUNC_5(VAR_41));
  if (FUNC_3(VAR_41) != 0)
   FUNC_9(1, "Child exited %i?", FUNC_3(VAR_41));
  FUNC_20("Host: notified %lu, pinged %lu\n", VAR_34, VAR_35);
  return 0;
 } else {
  struct guest_virtio_device VAR_51;
  struct virtqueue *VAR_52;
  unsigned int *VAR_53;
  struct vring_desc *VAR_54;
  unsigned int VAR_55 = 0;


  VAR_53 = VAR_28 + FUNC_34(VAR_10, VAR_0);
  VAR_54 = (void *)VAR_53 + (VAR_10 + 1) * 2 * sizeof(int);


  FUNC_17(VAR_27, VAR_30);

  FUNC_7(VAR_31[1]);
  FUNC_7(VAR_32[0]);

  VAR_51.vdev.features = VAR_21;
  VAR_51.to_host_fd = VAR_32[1];
  VAR_51.notifies = 0;

  FUNC_1(VAR_36, &VAR_38);
  if (FUNC_22(FUNC_15(), sizeof(VAR_38), &VAR_38))
   FUNC_8(1, "Could not set affinity to cpu %u", VAR_36);

  VAR_52 = FUNC_33(0, VAR_10, VAR_0, &VAR_51.vdev, 1,
      0, VAR_28,
      VAR_26 ? VAR_17
      : VAR_18,
      VAR_16, "guest vq");


  VAR_12 = VAR_54;
  VAR_11 = VAR_54 + VAR_10 * 6;

  while (VAR_33 < VAR_4) {
   struct scatterlist VAR_56[4];
   unsigned int VAR_57, VAR_58;
   int *VAR_59, VAR_60;
   bool VAR_61 = !(VAR_33 % 2);


   while ((VAR_59 = FUNC_29(VAR_52, &VAR_58)) != ((void*)0)) {
    if (VAR_58 == 4)
     FUNC_6(*VAR_59 == VAR_55 - 1);
    else if (!VAR_26)
     FUNC_6(*VAR_59 == VAR_55);
    VAR_55++;
   }


   VAR_59 = VAR_53 + (VAR_33 % (VAR_10 + 1));

   if (VAR_61)
    *VAR_59 = VAR_33;
   else
    *VAR_59 = -1;

   switch ((VAR_33 / sizeof(*VAR_59)) % 4) {
   case 0:

    FUNC_23(VAR_56, VAR_57 = 3);
    FUNC_24(&VAR_56[0], (void *)VAR_59, 1);
    FUNC_24(&VAR_56[1], (void *)VAR_59 + 1, 2);
    FUNC_24(&VAR_56[2], (void *)VAR_59 + 3, 1);
    break;
   case 1:
    FUNC_23(VAR_56, VAR_57 = 2);
    FUNC_24(&VAR_56[0], (void *)VAR_59, 1);
    FUNC_24(&VAR_56[1], (void *)VAR_59 + 1, 3);
    break;
   case 2:
    FUNC_23(VAR_56, VAR_57 = 1);
    FUNC_24(&VAR_56[0], (void *)VAR_59, 4);
    break;
   case 3:
    FUNC_23(VAR_56, VAR_57 = 4);
    FUNC_24(&VAR_56[0], (void *)VAR_59, 1);
    FUNC_24(&VAR_56[1], (void *)VAR_59 + 1, 1);
    FUNC_24(&VAR_56[2], (void *)VAR_59 + 2, 1);
    FUNC_24(&VAR_56[3], (void *)VAR_59 + 3, 1);
    break;
   }



   VAR_13 = VAR_54 + (VAR_33 % VAR_10) * 4;
   if (VAR_61)
    VAR_60 = FUNC_26(VAR_52, VAR_56, VAR_57, VAR_59,
          VAR_2);
   else
    VAR_60 = FUNC_25(VAR_52, VAR_56, VAR_57,
         VAR_59, VAR_2);

   if (VAR_60 == -VAR_1) {
    if (!FUNC_28(VAR_52))
     continue;

    if (FUNC_21(VAR_31[0], VAR_39, sizeof(VAR_39)) < 1)
     break;

    VAR_35++;
    FUNC_27(VAR_52);
    continue;
   }

   if (VAR_60)
    FUNC_9(1, "virtqueue_add_in/outbuf: %i", VAR_60);

   VAR_33++;
   FUNC_30(VAR_52);
  }


  while (VAR_55 != VAR_33) {
   int *VAR_62;
   unsigned int VAR_63;


   VAR_62 = FUNC_29(VAR_52, &VAR_63);
   if (VAR_62) {
    if (VAR_63 == 4)
     FUNC_6(*VAR_62 == VAR_55 - 1);
    else
     FUNC_6(VAR_63 == 0);
    VAR_55++;
    continue;
   }

   if (!FUNC_28(VAR_52))
    continue;
   if (FUNC_21(VAR_31[0], VAR_39, sizeof(VAR_39)) < 1)
    break;

   VAR_35++;
   FUNC_27(VAR_52);
  }

  FUNC_20("Guest: notified %lu, pinged %lu\n",
         VAR_51.notifies, VAR_35);
  FUNC_31(VAR_52);
  return 0;
 }
}
