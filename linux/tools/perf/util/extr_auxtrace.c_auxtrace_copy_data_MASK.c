
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct perf_session {int data; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,void*,scalar_t__) ;

__attribute__((used)) static void *FUNC_4(u64 VAR_1, struct perf_session *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_2->data);
 void *VAR_4;
 ssize_t VAR_5;

 if (VAR_1 > VAR_0)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_1);
 if (VAR_5 != (ssize_t)VAR_1) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
