
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct sock *VAR_1)
{
 wait_queue_head_t *VAR_2 = FUNC_0(VAR_1);

 if (!FUNC_1(VAR_1, VAR_0) && VAR_2)
  FUNC_2(VAR_2);
}
