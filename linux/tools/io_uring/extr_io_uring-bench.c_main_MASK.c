
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int* ring_entries; } ;
struct TYPE_5__ {int* ring_entries; } ;
struct submitter {int nr_files; int ring_fd; int thread; int inflight; scalar_t__ reaps; scalar_t__ calls; scalar_t__ done; TYPE_3__ cq_ring; TYPE_2__ sq_ring; TYPE_1__* iovecs; struct file* files; } ;
struct rlimit {void* rlim_max; void* rlim_cur; } ;
struct file {int real_fd; int max_blocks; } ;
struct TYPE_4__ {int iov_len; void* iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 () ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct file*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*) ;
 int VAR_13 ;
 scalar_t__ FUNC_8 (void**,int ,int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int *,int *,int ,struct submitter*) ;
 int FUNC_11 (int ,void**) ;
 scalar_t__ FUNC_12 (int ,struct rlimit*) ;
 int FUNC_13 (struct submitter*) ;
 int FUNC_14 (int) ;
 char* FUNC_15 (int ) ;
 int VAR_14 ;
 struct submitter* VAR_15 ;

int FUNC_16(int VAR_16, char *VAR_17[])
{
 struct submitter *VAR_18 = &VAR_15[0];
 unsigned long VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;
 char *VAR_26;
 void *VAR_27;

 if (!VAR_9 && VAR_16 < 2) {
  FUNC_9("%s: filename\n", VAR_17[0]);
  return 1;
 }

 VAR_24 = VAR_5 | VAR_4;
 if (!VAR_8)
  VAR_24 |= VAR_3;

 VAR_23 = 1;
 while (!VAR_9 && VAR_23 < VAR_16) {
  struct file *VAR_28;

  if (VAR_18->nr_files == VAR_2) {
   FUNC_9("Max number of files (%d) reached\n", VAR_2);
   break;
  }
  VAR_25 = FUNC_6(VAR_17[VAR_23], VAR_24);
  if (VAR_25 < 0) {
   FUNC_7("open");
   return 1;
  }

  VAR_28 = &VAR_18->files[VAR_18->nr_files];
  VAR_28->real_fd = VAR_25;
  if (FUNC_4(VAR_28)) {
   FUNC_9("failed getting size of device/file\n");
   return 1;
  }
  if (VAR_28->max_blocks <= 1) {
   FUNC_9("Zero file/device size?\n");
   return 1;
  }
  VAR_28->max_blocks--;

  FUNC_9("Added file %s\n", VAR_17[VAR_23]);
  VAR_18->nr_files++;
  VAR_23++;
 }

 if (VAR_12) {
  struct rlimit VAR_29;

  VAR_29.rlim_cur = VAR_7;
  VAR_29.rlim_max = VAR_7;
  if (FUNC_12(VAR_6, &VAR_29) < 0) {
   FUNC_7("setrlimit");
   return 1;
  }
 }

 FUNC_0();

 for (VAR_23 = 0; VAR_23 < VAR_1; VAR_23++) {
  void *VAR_30;

  if (FUNC_8(&VAR_30, VAR_0, VAR_0)) {
   FUNC_9("failed alloc\n");
   return 1;
  }
  VAR_18->iovecs[VAR_23].iov_base = VAR_30;
  VAR_18->iovecs[VAR_23].iov_len = VAR_0;
 }

 VAR_22 = FUNC_13(VAR_18);
 if (VAR_22) {
  FUNC_9("ring setup failed: %s, %d\n", FUNC_15(VAR_10), VAR_22);
  return 1;
 }
 FUNC_9("polled=%d, fixedbufs=%d, buffered=%d", VAR_13, VAR_12, VAR_8);
 FUNC_9(" QD=%d, sq_ring=%d, cq_ring=%d\n", VAR_1, *VAR_18->sq_ring.ring_entries, *VAR_18->cq_ring.ring_entries);

 FUNC_10(&VAR_18->thread, ((void*)0), VAR_14, VAR_18);

 VAR_26 = FUNC_5(8 * VAR_18->nr_files);
 VAR_21 = VAR_20 = VAR_19 = 0;
 do {
  unsigned long VAR_31 = 0;
  unsigned long VAR_32 = 0;
  unsigned long VAR_33 = 0;
  unsigned long VAR_34 = 0, VAR_35 = 0;

  FUNC_14(1);
  VAR_31 += VAR_18->done;
  VAR_33 += VAR_18->calls;
  VAR_32 += VAR_18->reaps;
  if (VAR_33 - VAR_20) {
   VAR_34 = (VAR_31 - VAR_19) / (VAR_33 - VAR_20);
   VAR_35 = (VAR_32 - VAR_21) / (VAR_33 - VAR_20);
  } else
   VAR_34 = VAR_35 = -1;
  FUNC_2(VAR_26);
  FUNC_9("IOPS=%lu, IOS/call=%ld/%ld, inflight=%u (%s)\n",
    VAR_31 - VAR_19, VAR_34, VAR_35, VAR_18->inflight,
    VAR_26);
  VAR_19 = VAR_31;
  VAR_20 = VAR_33;
  VAR_21 = VAR_32;
 } while (!VAR_11);

 FUNC_11(VAR_18->thread, &VAR_27);
 FUNC_1(VAR_18->ring_fd);
 FUNC_3(VAR_26);
 return 0;
}
