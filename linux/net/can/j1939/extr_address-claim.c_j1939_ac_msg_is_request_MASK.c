
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int* data; } ;
struct TYPE_2__ {scalar_t__ pgn; } ;
struct j1939_sk_buff_cb {TYPE_1__ addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct j1939_sk_buff_cb* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline bool FUNC_1(struct sk_buff *VAR_2)
{
 struct j1939_sk_buff_cb *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 if (VAR_2->len < 3 || VAR_3->addr.pgn != VAR_1)
  return 0;

 VAR_4 = VAR_2->data[0] | (VAR_2->data[1] << 8) | (VAR_2->data[2] << 16);

 return VAR_4 == VAR_0;
}
