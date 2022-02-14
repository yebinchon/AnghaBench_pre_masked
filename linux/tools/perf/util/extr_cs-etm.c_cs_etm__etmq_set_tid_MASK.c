
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cs_etm_traceid_queue {int thread; int tid; } ;
struct cs_etm_queue {struct cs_etm_auxtrace* etm; } ;
struct cs_etm_auxtrace {int machine; } ;
typedef int pid_t ;


 int VAR_0 ;
 struct cs_etm_traceid_queue* FUNC_0 (struct cs_etm_queue*,int ) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 int FUNC_2 (struct cs_etm_auxtrace*,struct cs_etm_traceid_queue*) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct cs_etm_queue *VAR_1,
    pid_t VAR_2, u8 VAR_3)
{
 int VAR_4, VAR_5 = -VAR_0;
 struct cs_etm_auxtrace *VAR_6 = VAR_1->etm;
 struct cs_etm_traceid_queue *VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_3);
 if (!VAR_7)
  return VAR_5;

 if (FUNC_1(VAR_3, &VAR_4) < 0)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_6->machine, VAR_4, VAR_2, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_7->tid = VAR_2;
 FUNC_4(VAR_7->thread);

 FUNC_2(VAR_6, VAR_7);
 return 0;
}
