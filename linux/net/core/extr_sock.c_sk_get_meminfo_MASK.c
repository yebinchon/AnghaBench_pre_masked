
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int len; } ;
struct sock {int sk_drops; TYPE_1__ sk_backlog; int sk_omem_alloc; int sk_wmem_queued; int sk_forward_alloc; int sk_sndbuf; int sk_rcvbuf; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct sock const*) ;
 int FUNC_4 (struct sock const*) ;

void FUNC_5(const struct sock *VAR_10, u32 *VAR_11)
{
 FUNC_2(VAR_11, 0, sizeof(*VAR_11) * VAR_7);

 VAR_11[VAR_5] = FUNC_3(VAR_10);
 VAR_11[VAR_4] = FUNC_0(VAR_10->sk_rcvbuf);
 VAR_11[VAR_8] = FUNC_4(VAR_10);
 VAR_11[VAR_6] = FUNC_0(VAR_10->sk_sndbuf);
 VAR_11[VAR_2] = VAR_10->sk_forward_alloc;
 VAR_11[VAR_9] = FUNC_0(VAR_10->sk_wmem_queued);
 VAR_11[VAR_3] = FUNC_1(&VAR_10->sk_omem_alloc);
 VAR_11[VAR_0] = FUNC_0(VAR_10->sk_backlog.len);
 VAR_11[VAR_1] = FUNC_1(&VAR_10->sk_drops);
}
