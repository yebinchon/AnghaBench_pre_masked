
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int dummy; } ;
struct kvec {unsigned char* member_0; int member_1; } ;
typedef int msg ;


 int FUNC_0 (char*,struct socket*,unsigned char*,int) ;
 int FUNC_1 (struct socket*,struct msghdr*,struct kvec*,int,int) ;
 int FUNC_2 (struct msghdr*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 struct kvec VAR_3 = { VAR_1, VAR_2 };
 struct msghdr VAR_4;

 FUNC_0("sock %p data %p len %d", VAR_0, VAR_1, VAR_2);

 if (!VAR_2)
  return 0;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));

 return FUNC_1(VAR_0, &VAR_4, &VAR_3, 1, VAR_2);
}
