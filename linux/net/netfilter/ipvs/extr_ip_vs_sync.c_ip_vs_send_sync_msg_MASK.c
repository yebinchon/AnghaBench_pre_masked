
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct ip_vs_sync_mesg {int size; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_1, struct ip_vs_sync_mesg *VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_2->size);

 VAR_4 = FUNC_0(VAR_1, (char *)VAR_2, VAR_3);
 if (VAR_4 >= 0 || VAR_4 == -VAR_0)
  return VAR_4;
 FUNC_2("ip_vs_send_async error %d\n", VAR_4);
 return 0;
}
