
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcpvegas_info {int dummy; } ;
struct tcp_info {int dummy; } ;
struct sock {int dummy; } ;
struct inet_diag_req_v2 {size_t sdiag_protocol; } ;
struct inet_diag_msg {int dummy; } ;
struct inet_diag_meminfo {int dummy; } ;
struct inet_diag_handler {size_t (* idiag_get_aux_size ) (struct sock*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct inet_diag_handler** VAR_2 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (struct sock*,int) ;

__attribute__((used)) static size_t FUNC_2(struct sock *VAR_3,
    const struct inet_diag_req_v2 *VAR_4,
    bool VAR_5)
{
 const struct inet_diag_handler *VAR_6;
 size_t VAR_7 = 0;

 VAR_6 = VAR_2[VAR_4->sdiag_protocol];
 if (VAR_6 && VAR_6->idiag_get_aux_size)
  VAR_7 = VAR_6->idiag_get_aux_size(VAR_3, VAR_5);

 return FUNC_0(sizeof(struct tcp_info))
  + FUNC_0(1)
  + FUNC_0(1)
  + FUNC_0(1)
  + FUNC_0(4)
  + FUNC_0(4)
  + FUNC_0(sizeof(struct inet_diag_meminfo))
  + FUNC_0(sizeof(struct inet_diag_msg))
  + FUNC_0(VAR_0 * sizeof(u32))
  + FUNC_0(VAR_1)
  + FUNC_0(sizeof(struct tcpvegas_info))
  + VAR_7
  + 64;
}
