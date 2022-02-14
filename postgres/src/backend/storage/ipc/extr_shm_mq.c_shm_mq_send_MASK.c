
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int shm_mq_result ;
struct TYPE_3__ {int len; void const* data; } ;
typedef TYPE_1__ shm_mq_iovec ;
typedef int shm_mq_handle ;
typedef int Size ;


 int FUNC_0 (int *,TYPE_1__*,int,int) ;

shm_mq_result
FUNC_1(shm_mq_handle *VAR_0, Size VAR_1, const void *VAR_2, bool VAR_3)
{
 shm_mq_iovec VAR_4;

 VAR_4.data = VAR_2;
 VAR_4.len = VAR_1;

 return FUNC_0(VAR_0, &VAR_4, 1, VAR_3);
}
