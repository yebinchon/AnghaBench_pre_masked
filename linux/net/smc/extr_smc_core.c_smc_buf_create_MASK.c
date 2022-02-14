
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sndbuf_desc; int lgr; } ;
struct smc_sock {TYPE_1__ conn; } ;


 int FUNC_0 (struct smc_sock*,int,int) ;
 int FUNC_1 (int ,int,int ) ;

int FUNC_2(struct smc_sock *VAR_0, bool VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_0(VAR_0, VAR_1, 0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1, 1);
 if (VAR_2)
  FUNC_1(VAR_0->conn.lgr, 0, VAR_0->conn.sndbuf_desc);
 return VAR_2;
}
