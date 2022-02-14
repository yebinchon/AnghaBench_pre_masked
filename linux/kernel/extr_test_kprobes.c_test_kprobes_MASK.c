
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe {scalar_t__ flags; int * addr; } ;


 int VAR_0 ;
 struct kprobe VAR_1 ;
 struct kprobe VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct kprobe**,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct kprobe**,int) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_6;
 struct kprobe *VAR_7[2] = {&VAR_1, &VAR_2};


 VAR_1.addr = ((void*)0);
 VAR_1.flags = 0;
 VAR_6 = FUNC_1(VAR_7, 2);
 if (VAR_6 < 0) {
  FUNC_0("register_kprobes returned %d\n", VAR_6);
  return VAR_6;
 }

 VAR_4 = 0;
 VAR_3 = 0;
 VAR_6 = FUNC_2(VAR_5);

 if (VAR_4 == 0) {
  FUNC_0("kprobe pre_handler not called\n");
  VAR_0++;
 }

 if (VAR_3 == 0) {
  FUNC_0("kprobe post_handler not called\n");
  VAR_0++;
 }

 VAR_4 = 0;
 VAR_3 = 0;
 VAR_6 = FUNC_3(VAR_5);

 if (VAR_4 == 0) {
  FUNC_0("kprobe pre_handler2 not called\n");
  VAR_0++;
 }

 if (VAR_3 == 0) {
  FUNC_0("kprobe post_handler2 not called\n");
  VAR_0++;
 }

 FUNC_4(VAR_7, 2);
 return 0;

}
