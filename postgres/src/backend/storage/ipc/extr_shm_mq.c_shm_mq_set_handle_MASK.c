
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * mqh_handle; } ;
typedef TYPE_1__ shm_mq_handle ;
typedef int BackgroundWorkerHandle ;


 int FUNC_0 (int ) ;

void
FUNC_1(shm_mq_handle *VAR_0, BackgroundWorkerHandle *VAR_1)
{
 FUNC_0(VAR_0->mqh_handle == ((void*)0));
 VAR_0->mqh_handle = VAR_1;
}
