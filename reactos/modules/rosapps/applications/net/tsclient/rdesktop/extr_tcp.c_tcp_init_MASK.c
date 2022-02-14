
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
struct TYPE_7__ {scalar_t__ size; int * data; int * end; int * p; } ;
struct TYPE_6__ {TYPE_2__ out; } ;
struct TYPE_8__ {int disconnect_reason; TYPE_1__ tcp; } ;
typedef TYPE_2__* STREAM ;
typedef TYPE_3__ RDPCLIENT ;


 void* FUNC_0 (int *,scalar_t__) ;

STREAM
FUNC_1(RDPCLIENT * VAR_0, uint32 VAR_1)
{
 if (VAR_1 > VAR_0->tcp.out.size)
 {
  void * VAR_2;

  VAR_2 = FUNC_0(VAR_0->tcp.out.data, VAR_1);

  if (VAR_2 == ((void*)0))
  {
   VAR_0->disconnect_reason = 262;
   return ((void*)0);
  }

  VAR_0->tcp.out.data = (uint8 *)VAR_2;
  VAR_0->tcp.out.size = VAR_1;
 }

 VAR_0->tcp.out.p = VAR_0->tcp.out.data;
 VAR_0->tcp.out.end = VAR_0->tcp.out.data + VAR_0->tcp.out.size;
 return &VAR_0->tcp.out;
}
