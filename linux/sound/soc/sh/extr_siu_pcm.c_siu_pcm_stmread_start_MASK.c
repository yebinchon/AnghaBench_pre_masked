
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siu_stream {int xfer_cnt; int tasklet; scalar_t__ rw_flg; scalar_t__ cur_period; } ;
struct siu_port {struct siu_stream capture; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct siu_port *VAR_3)
{
 struct siu_stream *VAR_4 = &VAR_3->capture;

 if (VAR_4->xfer_cnt > 0x1000000)
  return -VAR_0;
 if (VAR_4->rw_flg)
  return -VAR_1;


 VAR_4->cur_period = 0;


 VAR_4->rw_flg = VAR_2;

 FUNC_0(&VAR_4->tasklet);

 return 0;
}
