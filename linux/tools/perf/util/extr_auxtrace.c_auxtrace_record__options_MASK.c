
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct record_opts {int dummy; } ;
struct evlist {int dummy; } ;
struct auxtrace_record {int (* recording_options ) (struct auxtrace_record*,struct evlist*,struct record_opts*) ;} ;


 int FUNC_0 (struct auxtrace_record*,struct evlist*,struct record_opts*) ;

int FUNC_1(struct auxtrace_record *VAR_0,
        struct evlist *VAR_1,
        struct record_opts *VAR_2)
{
 if (VAR_0)
  return VAR_0->recording_options(VAR_0, VAR_1, VAR_2);
 return 0;
}
