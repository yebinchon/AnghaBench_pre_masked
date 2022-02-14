
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __test_metadata {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct __test_metadata*,int ,int,int) ;
 int FUNC_2 (struct __test_metadata*,int ) ;
 int FUNC_3 (int ,int ,int *,unsigned long*) ;

void FUNC_4(struct __test_metadata *VAR_8, pid_t VAR_9,
     int VAR_10, void *VAR_11)
{
 int VAR_12, VAR_13;
 unsigned long VAR_14;
 static bool VAR_15;





 VAR_15 = !VAR_15;


 VAR_12 = FUNC_3(VAR_3, VAR_9, ((void*)0), &VAR_14);
 FUNC_0(0, VAR_12);
 FUNC_0(VAR_15 ? VAR_1
   : VAR_2, VAR_14);

 if (!VAR_15)
  return;

 VAR_13 = FUNC_2(VAR_8, VAR_9);

 if (VAR_13 == VAR_4)
  FUNC_1(VAR_8, VAR_9, VAR_5, 0);
 if (VAR_13 == VAR_6)
  FUNC_1(VAR_8, VAR_9, -1, 45000);
 if (VAR_13 == VAR_7)
  FUNC_1(VAR_8, VAR_9, -1, -VAR_0);
}
