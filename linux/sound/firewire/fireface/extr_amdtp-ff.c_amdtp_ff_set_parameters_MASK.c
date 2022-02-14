
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {struct amdtp_ff* protocol; } ;
struct amdtp_ff {unsigned int pcm_channels; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct amdtp_stream*) ;
 int FUNC_1 (struct amdtp_stream*,unsigned int,unsigned int) ;

int FUNC_2(struct amdtp_stream *VAR_1, unsigned int VAR_2,
       unsigned int VAR_3)
{
 struct amdtp_ff *VAR_4 = VAR_1->protocol;
 unsigned int VAR_5;

 if (FUNC_0(VAR_1))
  return -VAR_0;

 VAR_4->pcm_channels = VAR_3;
 VAR_5 = VAR_3;

 return FUNC_1(VAR_1, VAR_2, VAR_5);
}
