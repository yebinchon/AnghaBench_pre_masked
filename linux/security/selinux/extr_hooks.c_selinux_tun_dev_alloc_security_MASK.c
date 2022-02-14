
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_security_struct {int sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct tun_security_struct* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(void **VAR_2)
{
 struct tun_security_struct *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_3->sid = FUNC_0();

 *VAR_2 = VAR_3;
 return 0;
}
