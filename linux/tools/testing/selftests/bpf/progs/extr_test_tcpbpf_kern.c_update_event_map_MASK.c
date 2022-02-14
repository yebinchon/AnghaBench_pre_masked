
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpbpf_globals {int event_map; int member_0; } ;
typedef int __u32 ;


 int VAR_0 ;
 struct tcpbpf_globals* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,struct tcpbpf_globals*,int ) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_2(int VAR_2)
{
 __u32 VAR_3 = 0;
 struct tcpbpf_globals VAR_4, *VAR_5;

 VAR_5 = FUNC_0(&VAR_1, &VAR_3);
 if (VAR_5 == ((void*)0)) {
  struct tcpbpf_globals VAR_6 = {0};

  VAR_6.event_map |= (1 << VAR_2);
  FUNC_1(&VAR_1, &VAR_3, &VAR_6,
       VAR_0);
 } else {
  VAR_4 = *VAR_5;
  VAR_4.event_map |= (1 << VAR_2);
  FUNC_1(&VAR_1, &VAR_3, &VAR_4,
       VAR_0);
 }
}
