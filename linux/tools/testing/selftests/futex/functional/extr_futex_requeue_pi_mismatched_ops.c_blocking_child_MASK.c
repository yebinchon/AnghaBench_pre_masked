
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int *,int ) ;

void *FUNC_2(void *VAR_4)
{
 VAR_1 = FUNC_1(&VAR_3, VAR_3, ((void*)0), VAR_0);
 if (VAR_1 < 0) {
  VAR_1 = -VAR_2;
  FUNC_0("futex_wait\n", VAR_2);
 }
 return (void *)&VAR_1;
}
