
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_notifier {int type; int subtype; int source; int hash; } ;
typedef int __u32 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1, int VAR_2, void *VAR_3, __u32 VAR_4)
{
 struct tcp_notifier *VAR_5 = VAR_3;

 if (VAR_5->type != 0xde || VAR_5->subtype != 0xad ||
     VAR_5->source != 0xbe || VAR_5->hash != 0xef)
  return;
 VAR_0++;
}
