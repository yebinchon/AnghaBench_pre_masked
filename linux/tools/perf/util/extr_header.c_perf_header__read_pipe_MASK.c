
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_header {int dummy; } ;
struct perf_session {int repipe; int data; struct perf_header header; } ;
struct perf_pipe_file_header {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct perf_pipe_file_header*,struct perf_header*,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct perf_session *VAR_1)
{
 struct perf_header *VAR_2 = &VAR_1->header;
 struct perf_pipe_file_header VAR_3;

 if (FUNC_1(&VAR_3, VAR_2,
     FUNC_0(VAR_1->data),
     VAR_1->repipe) < 0) {
  FUNC_2("incompatible file format\n");
  return -VAR_0;
 }

 return 0;
}
