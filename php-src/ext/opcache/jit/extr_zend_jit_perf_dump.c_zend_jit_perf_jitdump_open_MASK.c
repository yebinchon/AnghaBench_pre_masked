
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; int process_id; scalar_t__ flags; scalar_t__ time_stamp; int elf_mach_target; int version; int magic; } ;
typedef TYPE_1__ zend_perf_jitdump_header ;
struct TYPE_7__ {int* emagic; int machine; } ;
typedef TYPE_2__ zend_elf_header ;
typedef int path ;
typedef int jit_hdr ;
typedef int elf_hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (int *,int ,int,int ,int,int ) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int,TYPE_2__*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int*,int,char*,size_t*,int *,int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_11(void)
{
 char VAR_17[64];
 int VAR_18, VAR_19;
 zend_elf_header VAR_20;
 zend_perf_jitdump_header VAR_21;

 FUNC_6(VAR_17, "/tmp/jit-%d.dump", FUNC_1());
 if (!FUNC_9()) {
  return;
 }


 VAR_18 = FUNC_4("/proc/self/exe", VAR_6);
 if (VAR_18 < 0) {
  return;
 }

 VAR_19 = FUNC_5(VAR_18, &VAR_20, sizeof(VAR_20));
 FUNC_0(VAR_18);

 if (VAR_19 != sizeof(VAR_20) ||
     VAR_20.emagic[0] != 0x7f ||
     VAR_20.emagic[1] != 'E' ||
     VAR_20.emagic[2] != 'L' ||
     VAR_20.emagic[3] != 'F') {
  return;
 }

 VAR_15 = FUNC_4(VAR_17, VAR_5 | VAR_8 | VAR_7, 0666);
 if (VAR_15 < 0) {
  return;
 }

 VAR_16 = FUNC_3(((void*)0),
   FUNC_7(VAR_14),
   VAR_11|VAR_10,
   VAR_4, VAR_15, 0);

 if (VAR_16 == VAR_3) {
  FUNC_0(VAR_15);
  VAR_15 = -1;
  return;
 }

 FUNC_2(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.magic = VAR_12;
 VAR_21.version = VAR_13;
 VAR_21.size = sizeof(VAR_21);
 VAR_21.elf_mach_target = VAR_20.machine;
 VAR_21.process_id = FUNC_1();
 VAR_21.time_stamp = FUNC_9();
 VAR_21.flags = 0;
 FUNC_10(VAR_15, &VAR_21, sizeof(VAR_21));
}
