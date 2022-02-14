
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_sock {scalar_t__ snt_unacked; scalar_t__ snd_win; } ;



__attribute__((used)) static bool FUNC_0(struct tipc_sock *VAR_0)
{
 return VAR_0->snt_unacked > VAR_0->snd_win;
}
