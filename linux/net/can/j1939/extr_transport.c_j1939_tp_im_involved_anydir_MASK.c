
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct j1939_sk_buff_cb {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct j1939_sk_buff_cb *VAR_2)
{
 return VAR_2->flags & (VAR_1 | VAR_0);
}
