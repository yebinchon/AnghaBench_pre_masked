
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siu_stream {int tasklet; scalar_t__ rw_flg; scalar_t__ cur_period; } ;
struct siu_port {struct siu_stream playback; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct siu_port *VAR_2)
{
 struct siu_stream *VAR_3 = &VAR_2->playback;

 if (VAR_3->rw_flg)
  return -VAR_0;


 VAR_2->playback.cur_period = 0;


 VAR_3->rw_flg = VAR_1;


 FUNC_0(&VAR_3->tasklet);

 return 0;
}
