
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct svc_rqst*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct svc_rqst *VAR_1)
{
 if (FUNC_3(FUNC_2(VAR_1)))
  FUNC_1(VAR_0, &VAR_1->rq_flags);
 else
  FUNC_0(VAR_0, &VAR_1->rq_flags);
}
