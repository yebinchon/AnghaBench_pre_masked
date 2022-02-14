
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int) ;

bool FUNC_3(struct sock *VAR_0, int VAR_1)
{
 bool VAR_2, VAR_3;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 VAR_3 = FUNC_1(VAR_0);

 if (VAR_2)
  FUNC_0("too many orphaned sockets\n");
 if (VAR_3)
  FUNC_0("out of memory -- consider tuning tcp_mem\n");
 return VAR_2 || VAR_3;
}
