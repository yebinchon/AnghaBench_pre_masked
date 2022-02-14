
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int,int *,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

void *FUNC_6(void *VAR_7)
{
 int VAR_8;

 FUNC_4("futex wait\n");
 VAR_8 = FUNC_3(&VAR_5, 1, &VAR_6, 0);
 if (VAR_8 && VAR_4 != VAR_1 && VAR_4 != VAR_0) {
  FUNC_0("futex error.\n", VAR_4);
  FUNC_5(VAR_3, VAR_2);
  FUNC_1(VAR_2);
 }

 if (VAR_8 && VAR_4 == VAR_0)
  FUNC_2("waiter timedout\n");

 FUNC_4("futex_wait: ret = %d, errno = %d\n", VAR_8, VAR_4);

 return ((void*)0);
}
