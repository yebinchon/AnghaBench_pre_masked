
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {int syt_interval; struct amdtp_am824* protocol; } ;
struct amdtp_am824 {int* midi_fifo_used; int midi_fifo_limit; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static bool FUNC_1(struct amdtp_stream *VAR_1, unsigned int VAR_2)
{
 struct amdtp_am824 *VAR_3 = VAR_1->protocol;
 int VAR_4;

 VAR_4 = VAR_3->midi_fifo_used[VAR_2];
 if (VAR_4 == 0)
  return 1;

 VAR_4 -= VAR_0 * VAR_1->syt_interval;
 VAR_4 = FUNC_0(VAR_4, 0);
 VAR_3->midi_fifo_used[VAR_2] = VAR_4;

 return VAR_4 < VAR_3->midi_fifo_limit;
}
