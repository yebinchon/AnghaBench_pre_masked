
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_cur; int rlim_max; } ;


 int FUNC_0 (int,char*,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int ,struct rlimit*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ,struct rlimit*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_6(void)
{
 struct rlimit VAR_10, VAR_11 = {};
 int VAR_12;

 FUNC_3(VAR_0, &VAR_10);

 FUNC_5(VAR_3, VAR_9);
 FUNC_5(VAR_2, VAR_9);
 if (VAR_8 > 0) {
  FUNC_5(VAR_1, VAR_9);
  FUNC_1(VAR_8);
 }

 if (VAR_10.rlim_cur < VAR_7 * VAR_6) {
  VAR_11.rlim_cur = VAR_7 * VAR_6 + 128;
  VAR_11.rlim_max = VAR_11.rlim_cur + 128;
  VAR_12 = FUNC_4(VAR_0, &VAR_11);
  FUNC_0(VAR_12, "setrlimit(RLIMIT_NOFILE)", "rlim_new:%lu errno:%d",
        VAR_11.rlim_cur, VAR_5);
 }

 VAR_12 = FUNC_2();

 FUNC_5(VAR_3, VAR_4);
 FUNC_5(VAR_2, VAR_4);
 if (VAR_8 > 0) {
  FUNC_5(VAR_1, VAR_4);
  FUNC_1(0);
 }

 if (VAR_11.rlim_cur)
  FUNC_4(VAR_0, &VAR_10);

 FUNC_0(VAR_12, "test_sk_storage_map_stress_free", "err:%d\n", VAR_12);
}
