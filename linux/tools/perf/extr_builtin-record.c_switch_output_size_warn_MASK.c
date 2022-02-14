
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct switch_output {int size; } ;
struct TYPE_2__ {int mmap_pages; } ;
struct record {struct switch_output switch_output; TYPE_1__ opts; } ;
typedef int buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static void FUNC_3(struct record *VAR_0)
{
 u64 VAR_1 = FUNC_0(VAR_0->opts.mmap_pages);
 struct switch_output *VAR_2 = &VAR_0->switch_output;

 VAR_1 /= 2;

 if (VAR_2->size < VAR_1) {
  char VAR_3[100];

  FUNC_2(VAR_3, sizeof(VAR_3), VAR_1);
  FUNC_1("WARNING: switch-output data size lower than "
      "wakeup kernel buffer size (%s) "
      "expect bigger perf.data sizes\n", VAR_3);
 }
}
