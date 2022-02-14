
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct u64rec {scalar_t__ processed; } ;
struct TYPE_4__ {int processed; } ;
struct record_u64 {TYPE_2__ total; TYPE_1__* cpu; int timestamp; } ;
typedef int __u64 ;
typedef int __u32 ;
struct TYPE_3__ {scalar_t__ processed; } ;


 scalar_t__ FUNC_0 (int,int*,struct u64rec*) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_4(int VAR_1, __u32 VAR_2, struct record_u64 *VAR_3)
{

 unsigned int VAR_4 = FUNC_1();
 struct u64rec VAR_5[VAR_4];
 __u64 VAR_6 = 0;
 int VAR_7;

 if ((FUNC_0(VAR_1, &VAR_2, VAR_5)) != 0) {
  FUNC_2(VAR_0,
   "ERR: bpf_map_lookup_elem failed key:0x%X\n", VAR_2);
  return 0;
 }

 VAR_3->timestamp = FUNC_3();


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_3->cpu[VAR_7].processed = VAR_5[VAR_7].processed;
  VAR_6 += VAR_5[VAR_7].processed;
 }
 VAR_3->total.processed = VAR_6;
 return 1;
}
