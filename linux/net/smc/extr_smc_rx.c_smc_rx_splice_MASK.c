
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct splice_pipe_desc {int nr_pages_max; int nr_pages; int spd_release; int * ops; struct partial_page* partial; int * pages; } ;
struct smc_spd_priv {size_t len; struct smc_sock* smc; } ;
struct TYPE_4__ {int splice_pending; TYPE_1__* rmb_desc; } ;
struct smc_sock {TYPE_2__ conn; int sk; } ;
struct pipe_inode_info {int dummy; } ;
struct partial_page {int offset; size_t len; unsigned long private; } ;
struct TYPE_3__ {int pages; scalar_t__ cpu_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ) ;
 struct smc_spd_priv* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pipe_inode_info*,struct splice_pipe_desc*) ;

__attribute__((used)) static int FUNC_5(struct pipe_inode_info *VAR_4, char *VAR_5, size_t VAR_6,
    struct smc_sock *VAR_7)
{
 struct splice_pipe_desc VAR_8;
 struct partial_page VAR_9;
 struct smc_spd_priv *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;
 VAR_10->len = VAR_6;
 VAR_10->smc = VAR_7;
 VAR_9.offset = VAR_5 - (char *)VAR_7->conn.rmb_desc->cpu_addr;
 VAR_9.len = VAR_6;
 VAR_9.private = (unsigned long)VAR_10;

 VAR_8.nr_pages_max = 1;
 VAR_8.nr_pages = 1;
 VAR_8.pages = &VAR_7->conn.rmb_desc->pages;
 VAR_8.partial = &VAR_9;
 VAR_8.ops = &VAR_2;
 VAR_8.spd_release = VAR_3;

 VAR_11 = FUNC_4(VAR_4, &VAR_8);
 if (VAR_11 > 0) {
  FUNC_3(&VAR_7->sk);
  FUNC_1(VAR_7->conn.rmb_desc->pages);
  FUNC_0(VAR_11, &VAR_7->conn.splice_pending);
 }

 return VAR_11;
}
