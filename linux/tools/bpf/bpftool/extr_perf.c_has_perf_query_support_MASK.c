
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int __u64 ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,char*,int*,int*,int*,int *,int *) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int) ;

__attribute__((used)) static bool FUNC_7(void)
{
 __u64 VAR_4, VAR_5;
 __u32 VAR_6, VAR_7, VAR_8;
 char VAR_9[256];
 int VAR_10;

 if (VAR_2)
  goto out;

 VAR_10 = FUNC_4("/", VAR_0);
 if (VAR_10 < 0) {
  FUNC_5("perf_query_support: cannot open directory \"/\" (%s)",
        FUNC_6(VAR_1));
  goto out;
 }




 VAR_1 = 0;
 VAR_6 = sizeof(VAR_9);
 FUNC_0(FUNC_3(), VAR_10, 0, VAR_9, &VAR_6, &VAR_7,
     &VAR_8, &VAR_4, &VAR_5);

 if (VAR_1 == 524 ) {
  VAR_2 = 1;
  goto close_fd;
 }

 VAR_2 = 2;
 FUNC_5("perf_query_support: %s", FUNC_6(VAR_1));
 FUNC_2(VAR_3,
  "HINT: non root or kernel doesn't support TASK_FD_QUERY\n");

close_fd:
 FUNC_1(VAR_10);
out:
 return VAR_2 == 1;
}
