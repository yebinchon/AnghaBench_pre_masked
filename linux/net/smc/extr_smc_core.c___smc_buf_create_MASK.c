
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sk_rcvbuf; int sk_sndbuf; } ;
struct smc_connection {int rmbe_size_short; int sndbuf_space; struct smc_buf_desc* sndbuf_desc; int rmbe_update_limit; int bytes_to_rcv; struct smc_buf_desc* rmb_desc; struct smc_link_group* lgr; } ;
struct smc_sock {TYPE_1__ sk; struct smc_connection conn; } ;
struct smc_link_group {struct list_head* sndbufs; int sndbufs_lock; struct list_head* rmbs; int rmbs_lock; } ;
struct smc_buf_desc {int used; int len; int list; int cpu_addr; } ;
struct list_head {int dummy; } ;
typedef int rwlock_t ;


 int VAR_0 ;
 struct smc_buf_desc* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct smc_buf_desc*) ;
 int FUNC_2 (struct smc_buf_desc*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,struct list_head*) ;
 int FUNC_6 (int ,int ,int) ;
 struct smc_buf_desc* FUNC_7 (int,int *,struct list_head*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct smc_connection*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 struct smc_buf_desc* FUNC_12 (struct smc_link_group*,int,int) ;
 struct smc_buf_desc* FUNC_13 (struct smc_link_group*,int,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct smc_sock *VAR_2, bool VAR_3, bool VAR_4)
{
 struct smc_buf_desc *VAR_5 = FUNC_0(-VAR_0);
 struct smc_connection *VAR_6 = &VAR_2->conn;
 struct smc_link_group *VAR_7 = VAR_6->lgr;
 struct list_head *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;
 rwlock_t *VAR_12;

 if (VAR_4)

  VAR_11 = VAR_2->sk.sk_rcvbuf / 2;
 else

  VAR_11 = VAR_2->sk.sk_sndbuf / 2;

 for (VAR_10 = FUNC_8(VAR_11);
      VAR_10 >= 0; VAR_10--) {

  if (VAR_4) {
   VAR_12 = &VAR_7->rmbs_lock;
   VAR_8 = &VAR_7->rmbs[VAR_10];
  } else {
   VAR_12 = &VAR_7->sndbufs_lock;
   VAR_8 = &VAR_7->sndbufs[VAR_10];
  }
  VAR_9 = FUNC_11(VAR_10);
  if ((1 << FUNC_4(VAR_9)) > VAR_1)
   continue;


  VAR_5 = FUNC_7(VAR_10, VAR_12, VAR_8);
  if (VAR_5) {
   FUNC_6(VAR_5->cpu_addr, 0, VAR_9);
   break;
  }

  if (VAR_3)
   VAR_5 = FUNC_12(VAR_7, VAR_4, VAR_9);
  else
   VAR_5 = FUNC_13(VAR_7, VAR_4, VAR_9);

  if (FUNC_2(VAR_5) == -VAR_0)
   break;
  if (FUNC_1(VAR_5))
   continue;

  VAR_5->used = 1;
  FUNC_14(VAR_12);
  FUNC_5(&VAR_5->list, VAR_8);
  FUNC_15(VAR_12);
  break;
 }

 if (FUNC_1(VAR_5))
  return -VAR_0;

 if (VAR_4) {
  VAR_6->rmb_desc = VAR_5;
  VAR_6->rmbe_size_short = VAR_10;
  VAR_2->sk.sk_rcvbuf = VAR_9 * 2;
  FUNC_3(&VAR_6->bytes_to_rcv, 0);
  VAR_6->rmbe_update_limit =
   FUNC_10(VAR_5->len);
  if (VAR_3)
   FUNC_9(VAR_6);
 } else {
  VAR_6->sndbuf_desc = VAR_5;
  VAR_2->sk.sk_sndbuf = VAR_9 * 2;
  FUNC_3(&VAR_6->sndbuf_space, VAR_9);
 }
 return 0;
}
