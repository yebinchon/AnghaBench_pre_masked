
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_congestion_ops {scalar_t__ key; int name; int list; scalar_t__ cong_control; scalar_t__ cong_avoid; int undo_cwnd; int ssthresh; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_9(struct tcp_congestion_ops *VAR_5)
{
 int VAR_6 = 0;


 if (!VAR_5->ssthresh || !VAR_5->undo_cwnd ||
     !(VAR_5->cong_avoid || VAR_5->cong_control)) {
  FUNC_3("%s does not implement required ops\n", VAR_5->name);
  return -VAR_1;
 }

 VAR_5->key = FUNC_0(VAR_5->name, sizeof(VAR_5->name), FUNC_7(VAR_5->name));

 FUNC_5(&VAR_4);
 if (VAR_5->key == VAR_2 || FUNC_8(VAR_5->key)) {
  FUNC_4("%s already registered or non-unique key\n",
     VAR_5->name);
  VAR_6 = -VAR_0;
 } else {
  FUNC_1(&VAR_5->list, &VAR_3);
  FUNC_2("%s registered\n", VAR_5->name);
 }
 FUNC_6(&VAR_4);

 return VAR_6;
}
