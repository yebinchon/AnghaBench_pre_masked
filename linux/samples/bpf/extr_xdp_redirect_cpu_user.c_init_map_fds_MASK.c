
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_object*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_1(struct bpf_object *VAR_10)
{
 VAR_1 = FUNC_0(VAR_10, "cpu_map");
 VAR_9 = FUNC_0(VAR_10, "rx_cnt");
 VAR_8 =
  FUNC_0(VAR_10, "redirect_err_cnt");
 VAR_2 =
  FUNC_0(VAR_10, "cpumap_enqueue_cnt");
 VAR_3 =
  FUNC_0(VAR_10, "cpumap_kthread_cnt");
 VAR_4 =
  FUNC_0(VAR_10, "cpus_available");
 VAR_5 = FUNC_0(VAR_10, "cpus_count");
 VAR_6 =
  FUNC_0(VAR_10, "cpus_iterator");
 VAR_7 =
  FUNC_0(VAR_10, "exception_cnt");

 if (VAR_1 < 0 || VAR_9 < 0 ||
     VAR_8 < 0 || VAR_2 < 0 ||
     VAR_3 < 0 || VAR_4 < 0 ||
     VAR_5 < 0 || VAR_6 < 0 ||
     VAR_7 < 0)
  return -VAR_0;

 return 0;
}
