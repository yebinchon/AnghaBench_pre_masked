
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_session {int evlist; int header; struct perf_data* data; } ;
struct perf_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (struct perf_session*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct perf_session *VAR_1)
{
 struct perf_data *VAR_2 = VAR_1->data;

 if (FUNC_5(VAR_1) < 0) {
  FUNC_6("incompatible file format (rerun with -v to learn more)\n");
  return -1;
 }

 if (FUNC_0(VAR_2))
  return 0;

 if (FUNC_4(&VAR_1->header, VAR_0))
  return 0;

 if (!FUNC_3(VAR_1->evlist)) {
  FUNC_6("non matching sample_type\n");
  return -1;
 }

 if (!FUNC_2(VAR_1->evlist)) {
  FUNC_6("non matching sample_id_all\n");
  return -1;
 }

 if (!FUNC_1(VAR_1->evlist)) {
  FUNC_6("non matching read_format\n");
  return -1;
 }

 return 0;
}
