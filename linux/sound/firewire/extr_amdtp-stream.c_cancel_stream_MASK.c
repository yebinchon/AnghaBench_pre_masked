
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {int packet_index; int pcm_buffer_pointer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct amdtp_stream*) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(struct amdtp_stream *VAR_1)
{
 VAR_1->packet_index = -1;
 if (FUNC_2())
  FUNC_1(VAR_1);
 FUNC_0(VAR_1->pcm_buffer_pointer, VAR_0);
}
