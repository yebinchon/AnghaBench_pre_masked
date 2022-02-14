
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {int pcm_buffer_pointer; int context; } ;


 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct amdtp_stream*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

unsigned long FUNC_4(struct amdtp_stream *VAR_0)
{
 if (!FUNC_3() && FUNC_1(VAR_0))
  FUNC_2(VAR_0->context);

 return FUNC_0(VAR_0->pcm_buffer_pointer);
}
