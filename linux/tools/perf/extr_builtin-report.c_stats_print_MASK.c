
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct report {struct perf_session* session; } ;
struct perf_session {int dummy; } ;


 int FUNC_0 (struct perf_session*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct report *VAR_1)
{
 struct perf_session *VAR_2 = VAR_1->session;

 FUNC_0(VAR_2, VAR_0);
 return 0;
}
