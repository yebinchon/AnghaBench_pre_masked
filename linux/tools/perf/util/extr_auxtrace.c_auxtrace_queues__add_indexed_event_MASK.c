
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int size; } ;
union perf_event {TYPE_1__ header; } ;
struct perf_session {int dummy; } ;
struct perf_record_auxtrace {int dummy; } ;
struct auxtrace_queues {int dummy; } ;
typedef size_t off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct auxtrace_queues*,struct perf_session*,union perf_event*,size_t,int *) ;
 int FUNC_1 (struct perf_session*,size_t,char*,int,union perf_event**,int *) ;

__attribute__((used)) static int FUNC_2(struct auxtrace_queues *VAR_3,
           struct perf_session *VAR_4,
           off_t VAR_5, size_t VAR_6)
{
 union perf_event *VAR_7;
 int VAR_8;
 char VAR_9[VAR_2];

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_9,
           VAR_2, &VAR_7, ((void*)0));
 if (VAR_8)
  return VAR_8;

 if (VAR_7->header.type == VAR_1) {
  if (VAR_7->header.size < sizeof(struct perf_record_auxtrace) ||
      VAR_7->header.size != VAR_6) {
   VAR_8 = -VAR_0;
   goto out;
  }
  VAR_5 += VAR_7->header.size;
  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_7,
       VAR_5, ((void*)0));
 }
out:
 return VAR_8;
}
