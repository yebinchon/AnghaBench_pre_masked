
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct l2cap_conn {TYPE_1__* hcon; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct l2cap_conn*,scalar_t__) ;

__attribute__((used)) static u16 FUNC_1(struct l2cap_conn *VAR_4)
{
 u16 VAR_5, VAR_6;

 if (VAR_4->hcon->type == VAR_3)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_0;

 for (VAR_5 = VAR_1; VAR_5 <= VAR_6; VAR_5++) {
  if (!FUNC_0(VAR_4, VAR_5))
   return VAR_5;
 }

 return 0;
}
