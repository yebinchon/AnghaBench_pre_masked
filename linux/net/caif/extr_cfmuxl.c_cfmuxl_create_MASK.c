
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cflayer {int name; int ctrlcmd; int transmit; int receive; } ;
struct cfmuxl {struct cflayer layer; int receive_lock; int transmit_lock; int frml_list; int srvl_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cfmuxl* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int *) ;

struct cflayer *FUNC_4(void)
{
 struct cfmuxl *VAR_5 = FUNC_1(sizeof(struct cfmuxl), VAR_1);

 if (!VAR_5)
  return ((void*)0);
 VAR_5->layer.receive = VAR_3;
 VAR_5->layer.transmit = VAR_4;
 VAR_5->layer.ctrlcmd = VAR_2;
 FUNC_0(&VAR_5->srvl_list);
 FUNC_0(&VAR_5->frml_list);
 FUNC_3(&VAR_5->transmit_lock);
 FUNC_3(&VAR_5->receive_lock);
 FUNC_2(VAR_5->layer.name, VAR_0, "mux");
 return &VAR_5->layer;
}
