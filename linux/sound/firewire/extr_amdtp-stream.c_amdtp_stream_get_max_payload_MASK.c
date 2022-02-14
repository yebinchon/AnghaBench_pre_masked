
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {int flags; int syt_interval; int data_block_quadlets; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;

unsigned int FUNC_0(struct amdtp_stream *VAR_2)
{
 unsigned int VAR_3 = 1;
 unsigned int VAR_4 = 0;

 if (VAR_2->flags & VAR_0)
  VAR_3 = 5;
 if (!(VAR_2->flags & VAR_1))
  VAR_4 = sizeof(__be32) * 2;

 return VAR_4 +
  VAR_2->syt_interval * VAR_2->data_block_quadlets * sizeof(__be32) * VAR_3;
}
