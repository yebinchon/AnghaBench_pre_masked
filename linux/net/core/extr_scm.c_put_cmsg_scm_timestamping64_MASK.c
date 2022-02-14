
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tss ;
struct scm_timestamping_internal {TYPE_1__* ts; } ;
struct scm_timestamping64 {TYPE_2__* ts; } ;
struct msghdr {int dummy; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct TYPE_3__ {int tv_nsec; int tv_sec; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct msghdr*,int ,int ,int,struct scm_timestamping64*) ;

void FUNC_2(struct msghdr *VAR_2, struct scm_timestamping_internal *VAR_3)
{
 struct scm_timestamping64 VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4.ts); VAR_5++) {
  VAR_4.ts[VAR_5].tv_sec = VAR_3->ts[VAR_5].tv_sec;
  VAR_4.ts[VAR_5].tv_nsec = VAR_3->ts[VAR_5].tv_nsec;
 }

 FUNC_1(VAR_2, VAR_0, VAR_1, sizeof(VAR_4), &VAR_4);
}
