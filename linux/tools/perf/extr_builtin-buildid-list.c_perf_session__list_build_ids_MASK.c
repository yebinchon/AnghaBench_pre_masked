
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_session {int header; } ;
struct perf_data {int force; int mode; int path; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_session*) ;
 int VAR_1 ;
 int FUNC_1 (struct perf_session*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct perf_data*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (struct perf_session*) ;
 int FUNC_6 (struct perf_session*,int ,int ,int) ;
 struct perf_session* FUNC_7 (struct perf_data*,int,int *) ;
 int FUNC_8 (struct perf_session*) ;
 int VAR_5 ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(bool VAR_6, bool VAR_7)
{
 struct perf_session *VAR_8;
 struct perf_data VAR_9 = {
  .path = VAR_4,
  .mode = VAR_1,
  .force = VAR_6,
 };

 FUNC_9();



 if (FUNC_2(VAR_4, VAR_5) > 0)
  goto out;

 VAR_8 = FUNC_7(&VAR_9, 0, &VAR_2);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);





 if (!FUNC_3(&VAR_9) &&
     FUNC_4(&VAR_8->header, VAR_0))
  VAR_7 = 0;





 if (VAR_7 || FUNC_3(&VAR_9))
  FUNC_8(VAR_8);

 FUNC_6(VAR_8, VAR_5, VAR_3, VAR_7);
 FUNC_5(VAR_8);
out:
 return 0;
}
