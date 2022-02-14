
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {int mutex; int * protocol; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct amdtp_stream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct amdtp_stream *VAR_0)
{

 if (VAR_0->protocol == ((void*)0))
  return;

 FUNC_0(FUNC_1(VAR_0));
 FUNC_2(VAR_0->protocol);
 FUNC_3(&VAR_0->mutex);
}
