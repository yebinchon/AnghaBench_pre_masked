
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tracer_func_t ;
struct __test_metadata {int dummy; } ;
typedef scalar_t__ pid_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int ,scalar_t__,int ,int ,int ) ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct __test_metadata*,int,scalar_t__,int ,void*,int) ;
 int FUNC_10 (int ,int ) ;

pid_t FUNC_11(struct __test_metadata *VAR_4,
     tracer_func_t VAR_5, void *VAR_6, bool VAR_7)
{
 char VAR_8;
 int VAR_9[2];
 pid_t VAR_10;
 pid_t VAR_11 = FUNC_4();


 FUNC_0(0, FUNC_5(VAR_9));


 VAR_10 = FUNC_3();
 FUNC_1(0, VAR_10);
 FUNC_8(VAR_1, VAR_3);
 if (VAR_10 == 0) {
  FUNC_2(VAR_9[0]);
  FUNC_9(VAR_4, VAR_9[1], VAR_11, VAR_5, VAR_6,
        VAR_7);
  FUNC_10(VAR_2, 0);
 }
 FUNC_2(VAR_9[1]);
 FUNC_6(VAR_0, VAR_10, 0, 0, 0);
 FUNC_7(VAR_9[0], &VAR_8, 1);
 FUNC_2(VAR_9[0]);

 return VAR_10;
}
