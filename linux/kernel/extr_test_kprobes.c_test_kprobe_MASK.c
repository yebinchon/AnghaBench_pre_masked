
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_1);
 if (VAR_5 < 0) {
  FUNC_0("register_kprobe returned %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_4);
 FUNC_3(&VAR_1);

 if (VAR_3 == 0) {
  FUNC_0("kprobe pre_handler not called\n");
  VAR_0++;
 }

 if (VAR_2 == 0) {
  FUNC_0("kprobe post_handler not called\n");
  VAR_0++;
 }

 return 0;
}
