
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; } ;


 int VAR_0 ;






__attribute__((used)) static int FUNC_0(struct sock *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_1->sk_state;
 int VAR_4 = -VAR_0;

 switch (VAR_2) {
 case 128:
  VAR_4 = 0;
  break;
 case 129:
 case 132:
  if (VAR_3 == 128)
   VAR_4 = 0;
  break;
 case 130:
  if (VAR_3 == 132 ||
      VAR_3 == 128)
   VAR_4 = 0;
  break;
 case 131:
  if (VAR_3 == 132 ||
      VAR_3 == 130)
   VAR_4 = 0;
  break;
 }

 if (!VAR_4)
  VAR_1->sk_state = VAR_2;

 return VAR_4;
}
