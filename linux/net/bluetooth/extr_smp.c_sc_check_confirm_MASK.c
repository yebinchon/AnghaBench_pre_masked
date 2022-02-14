
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct smp_chan {scalar_t__ method; int prnd; struct l2cap_conn* conn; } ;
struct l2cap_conn {TYPE_1__* hcon; } ;
struct TYPE_2__ {scalar_t__ out; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct smp_chan*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct smp_chan*,int ) ;
 int FUNC_3 (struct l2cap_conn*,int ,int,int ) ;

__attribute__((used)) static u8 FUNC_4(struct smp_chan *VAR_4)
{
 struct l2cap_conn *VAR_5 = VAR_4->conn;

 FUNC_0("");

 if (VAR_4->method == VAR_1 || VAR_4->method == VAR_0)
  return FUNC_2(VAR_4, VAR_2);

 if (VAR_5->hcon->out) {
  FUNC_3(VAR_5, VAR_3, sizeof(VAR_4->prnd),
        VAR_4->prnd);
  FUNC_1(VAR_4, VAR_3);
 }

 return 0;
}
