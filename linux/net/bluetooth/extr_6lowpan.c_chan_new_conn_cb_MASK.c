
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {int ops; } ;


 int FUNC_0 (char*,struct l2cap_chan*,struct l2cap_chan*) ;
 struct l2cap_chan* FUNC_1 () ;

__attribute__((used)) static inline struct l2cap_chan *FUNC_2(struct l2cap_chan *VAR_0)
{
 struct l2cap_chan *VAR_1;

 VAR_1 = FUNC_1();
 if (!VAR_1)
  return ((void*)0);

 VAR_1->ops = VAR_0->ops;

 FUNC_0("chan %p pchan %p", VAR_1, VAR_0);

 return VAR_1;
}
