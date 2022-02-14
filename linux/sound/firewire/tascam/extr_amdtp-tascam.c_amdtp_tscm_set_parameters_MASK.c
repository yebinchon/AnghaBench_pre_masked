
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_tscm {unsigned int pcm_channels; } ;
struct amdtp_stream {scalar_t__ direction; struct amdtp_tscm* protocol; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct amdtp_stream*) ;
 int FUNC_1 (struct amdtp_stream*,unsigned int,unsigned int) ;

int FUNC_2(struct amdtp_stream *VAR_2, unsigned int VAR_3)
{
 struct amdtp_tscm *VAR_4 = VAR_2->protocol;
 unsigned int VAR_5;

 if (FUNC_0(VAR_2))
  return -VAR_1;

 VAR_5 = VAR_4->pcm_channels;


 if (VAR_2->direction == VAR_0)
  VAR_5 += 2;

 return FUNC_1(VAR_2, VAR_3, VAR_5);
}
