
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* issue; void* processed; } ;
struct record {TYPE_2__ total; TYPE_1__* cpu; int timestamp; } ;
struct datarec {scalar_t__ issue; scalar_t__ processed; } ;
typedef void* __u64 ;
typedef int __u32 ;
struct TYPE_3__ {scalar_t__ issue; scalar_t__ processed; } ;


 scalar_t__ FUNC_0 (int,int*,struct datarec*) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_4(int VAR_1, __u32 VAR_2, struct record *VAR_3)
{

 unsigned int VAR_4 = FUNC_1();
 struct datarec VAR_5[VAR_4];
 __u64 VAR_6 = 0;
 __u64 VAR_7 = 0;
 int VAR_8;

 if ((FUNC_0(VAR_1, &VAR_2, VAR_5)) != 0) {
  FUNC_2(VAR_0,
   "ERR: bpf_map_lookup_elem failed key:0x%X\n", VAR_2);
  return 0;
 }

 VAR_3->timestamp = FUNC_3();


 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_3->cpu[VAR_8].processed = VAR_5[VAR_8].processed;
  VAR_6 += VAR_5[VAR_8].processed;
  VAR_3->cpu[VAR_8].issue = VAR_5[VAR_8].issue;
  VAR_7 += VAR_5[VAR_8].issue;
 }
 VAR_3->total.processed = VAR_6;
 VAR_3->total.issue = VAR_7;
 return 1;
}
