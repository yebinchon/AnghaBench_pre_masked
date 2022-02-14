
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tss ;
struct scm_timestamping_internal {int * ts; } ;
struct scm_timestamping {int * ts; } ;
struct msghdr {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct msghdr*,int ,int ,int,struct scm_timestamping*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct msghdr *VAR_2, struct scm_timestamping_internal *VAR_3)
{
 struct scm_timestamping VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4.ts); VAR_5++)
  VAR_4.ts[VAR_5] = FUNC_2(VAR_3->ts[VAR_5]);

 FUNC_1(VAR_2, VAR_0, VAR_1, sizeof(VAR_4), &VAR_4);
}
