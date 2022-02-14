
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ,int,int *,int ) ;
 int FUNC_2 (int *) ;

void *FUNC_3(void *VAR_7)
{
 int VAR_8;

 VAR_5 = VAR_2;
 VAR_8 = FUNC_1(VAR_3, 1, ((void*)0), 0);
 VAR_4 = 0;

 if (VAR_8 != 0 && VAR_6 != VAR_0) {
  FUNC_0("futex failure\n", VAR_6);
  VAR_5 = VAR_1;
 }
 FUNC_2(((void*)0));
}
