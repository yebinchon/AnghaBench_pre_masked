
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_llc_send_work {int llclen; int work; int llcbuf; struct smc_link* link; } ;
struct smc_link {int llc_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct smc_llc_send_work* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct smc_link *VAR_3, void *VAR_4, int VAR_5)
{
 struct smc_llc_send_work *VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);

 if (!VAR_6)
  return -VAR_0;
 FUNC_0(&VAR_6->work, VAR_2);
 VAR_6->link = VAR_3;
 VAR_6->llclen = VAR_5;
 FUNC_2(&VAR_6->llcbuf, VAR_4, VAR_5);
 FUNC_3(VAR_3->llc_wq, &VAR_6->work);
 return 0;
}
