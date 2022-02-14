
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {int src_type; int nesting; int state; int * ops; } ;
typedef int bdaddr_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct l2cap_chan*,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int VAR_5 ;
 struct l2cap_chan* FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (struct l2cap_chan*,int *,int ) ;
 int FUNC_6 (struct l2cap_chan*) ;

__attribute__((used)) static struct l2cap_chan *FUNC_7(void)
{
 bdaddr_t *VAR_7 = VAR_0;
 struct l2cap_chan *VAR_8;
 int VAR_9;

 if (!VAR_6)
  return ((void*)0);

 VAR_8 = FUNC_3();
 if (!VAR_8)
  return ((void*)0);

 VAR_8->ops = &VAR_5;
 VAR_8->state = VAR_2;
 VAR_8->src_type = VAR_1;

 FUNC_2(&VAR_8->nesting, VAR_3);

 FUNC_0("chan %p src type %d", VAR_8, VAR_8->src_type);

 VAR_9 = FUNC_5(VAR_8, VAR_7, FUNC_4(VAR_4));
 if (VAR_9) {
  FUNC_6(VAR_8);
  FUNC_1("psm cannot be added err %d", VAR_9);
  return ((void*)0);
 }

 return VAR_8;
}
