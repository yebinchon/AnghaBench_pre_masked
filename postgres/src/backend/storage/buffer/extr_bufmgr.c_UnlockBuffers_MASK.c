
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_5__ {scalar_t__ wait_backend_pid; } ;
typedef TYPE_1__ BufferDesc ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;

void
FUNC_2(void)
{
 BufferDesc *VAR_3 = VAR_2;

 if (VAR_3)
 {
  uint32 VAR_4;

  VAR_4 = FUNC_0(VAR_3);





  if ((VAR_4 & VAR_0) != 0 &&
   VAR_3->wait_backend_pid == VAR_1)
   VAR_4 &= ~VAR_0;

  FUNC_1(VAR_3, VAR_4);

  VAR_2 = ((void*)0);
 }
}
