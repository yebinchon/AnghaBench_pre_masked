
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct iov_iter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iov_iter*,int ,int *,int ,int ) ;
 int FUNC_1 (struct sock*,struct iov_iter*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_2, int VAR_3)
{
 struct iov_iter VAR_4;

 FUNC_0(&VAR_4, VAR_1, ((void*)0), 0, 0);
 return FUNC_1(VAR_2, &VAR_4, 0, VAR_3, VAR_0);
}
