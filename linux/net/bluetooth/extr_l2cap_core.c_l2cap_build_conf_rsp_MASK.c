
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct l2cap_conf_rsp {void* flags; void* result; void* scid; void* data; } ;
struct l2cap_chan {int dcid; } ;


 int FUNC_0 (char*,struct l2cap_chan*) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct l2cap_chan *VAR_0, void *VAR_1,
    u16 VAR_2, u16 VAR_3)
{
 struct l2cap_conf_rsp *VAR_4 = VAR_1;
 void *VAR_5 = VAR_4->data;

 FUNC_0("chan %p", VAR_0);

 VAR_4->scid = FUNC_1(VAR_0->dcid);
 VAR_4->result = FUNC_1(VAR_2);
 VAR_4->flags = FUNC_1(VAR_3);

 return VAR_5 - VAR_1;
}
