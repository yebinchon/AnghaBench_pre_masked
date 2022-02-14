
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {int nesting; int mode; int omtu; int imtu; int scid; int dcid; int * ops; int chan_type; } ;


 int FUNC_0 (char*,struct l2cap_chan*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 struct l2cap_chan* FUNC_2 () ;
 int VAR_1 ;

__attribute__((used)) static inline struct l2cap_chan *FUNC_3(struct l2cap_chan *VAR_2)
{
 struct l2cap_chan *VAR_3;

 FUNC_0("pchan %p", VAR_2);

 VAR_3 = FUNC_2();
 if (!VAR_3)
  return ((void*)0);

 VAR_3->chan_type = VAR_2->chan_type;
 VAR_3->ops = &VAR_1;
 VAR_3->scid = VAR_2->scid;
 VAR_3->dcid = VAR_3->scid;
 VAR_3->imtu = VAR_2->imtu;
 VAR_3->omtu = VAR_2->omtu;
 VAR_3->mode = VAR_2->mode;






 FUNC_1(&VAR_3->nesting, VAR_0);

 FUNC_0("created chan %p", VAR_3);

 return VAR_3;
}
