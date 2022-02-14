
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multi_stop_data {scalar_t__ state; int thread_ack; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct multi_stop_data*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct multi_stop_data *VAR_0)
{
 if (FUNC_0(&VAR_0->thread_ack))
  FUNC_1(VAR_0, VAR_0->state + 1);
}
