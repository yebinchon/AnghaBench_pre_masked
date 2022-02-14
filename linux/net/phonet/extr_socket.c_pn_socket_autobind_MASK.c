
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int sk; } ;
struct sockaddr_pn {int spn_family; } ;
struct sockaddr {int dummy; } ;
typedef int sa ;
struct TYPE_2__ {int sobject; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct sockaddr_pn*,int ,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (struct socket*,struct sockaddr*,int) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_2)
{
 struct sockaddr_pn VAR_3;
 int VAR_4;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.spn_family = VAR_0;
 VAR_4 = FUNC_4(VAR_2, (struct sockaddr *)&VAR_3,
    sizeof(struct sockaddr_pn));
 if (VAR_4 != -VAR_1)
  return VAR_4;
 FUNC_0(!FUNC_2(FUNC_3(VAR_2->sk)->sobject));
 return 0;
}
