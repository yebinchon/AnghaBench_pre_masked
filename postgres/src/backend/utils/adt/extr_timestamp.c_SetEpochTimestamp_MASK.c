
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int dummy; } ;
typedef int Timestamp ;


 int FUNC_0 (struct pg_tm*) ;
 int FUNC_1 (struct pg_tm*,int ,int *,int *) ;

Timestamp
FUNC_2(void)
{
 Timestamp VAR_0;
 struct pg_tm VAR_1,
      *VAR_2 = &VAR_1;

 FUNC_0(VAR_2);

 FUNC_1(VAR_2, 0, ((void*)0), &VAR_0);

 return VAR_0;
}
