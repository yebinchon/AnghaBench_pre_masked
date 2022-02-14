
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2cap_chan {int * ops; } ;
typedef int bdaddr_t ;


 int FUNC_0 (char*,struct l2cap_chan*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct l2cap_chan* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct l2cap_chan*,int ,int ,int *,int ) ;
 int FUNC_4 (struct l2cap_chan*) ;

__attribute__((used)) static int FUNC_5(bdaddr_t *VAR_3, u8 VAR_4)
{
 struct l2cap_chan *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1();
 if (!VAR_5)
  return -VAR_0;

 VAR_5->ops = &VAR_2;

 VAR_6 = FUNC_3(VAR_5, FUNC_2(VAR_1), 0,
     VAR_3, VAR_4);

 FUNC_0("chan %p err %d", VAR_5, VAR_6);
 if (VAR_6 < 0)
  FUNC_4(VAR_5);

 return VAR_6;
}
