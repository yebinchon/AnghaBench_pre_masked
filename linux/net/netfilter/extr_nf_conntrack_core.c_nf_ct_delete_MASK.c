
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nf_conn_tstamp {scalar_t__ stop; } ;
struct nf_conn {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 struct nf_conn_tstamp* FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,struct nf_conn*,int ,int) ;
 int FUNC_5 (struct nf_conn*) ;
 int FUNC_6 (struct nf_conn*) ;
 int FUNC_7 (struct nf_conn*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

bool FUNC_9(struct nf_conn *VAR_2, u32 VAR_3, int VAR_4)
{
 struct nf_conn_tstamp *VAR_5;

 if (FUNC_8(VAR_1, &VAR_2->status))
  return 0;

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 && VAR_5->stop == 0)
  VAR_5->stop = FUNC_0();

 if (FUNC_4(VAR_0, VAR_2,
        VAR_3, VAR_4) < 0) {



  FUNC_5(VAR_2);
  FUNC_2(FUNC_6(VAR_2));
  return 0;
 }

 FUNC_3(FUNC_6(VAR_2));
 FUNC_5(VAR_2);
 FUNC_7(VAR_2);
 return 1;
}
