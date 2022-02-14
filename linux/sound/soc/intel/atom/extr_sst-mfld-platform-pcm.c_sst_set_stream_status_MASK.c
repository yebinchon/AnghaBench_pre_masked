
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_runtime_stream {int stream_status; int status_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct sst_runtime_stream *VAR_0,
     int VAR_1)
{
 unsigned long VAR_2;
 FUNC_0(&VAR_0->status_lock, VAR_2);
 VAR_0->stream_status = VAR_1;
 FUNC_1(&VAR_0->status_lock, VAR_2);
}
