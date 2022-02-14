
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct record_opts {int auxtrace_snapshot_on_exit; } ;
struct auxtrace_record {int (* parse_snapshot_options ) (struct auxtrace_record*,struct record_opts*,char const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct auxtrace_record*,struct record_opts*,char const*) ;

int FUNC_2(struct auxtrace_record *VAR_1,
        struct record_opts *VAR_2, const char *VAR_3)
{
 if (!VAR_3)
  return 0;


 switch (*VAR_3) {
 case 'e':
  VAR_2->auxtrace_snapshot_on_exit = 1;
  VAR_3++;
  break;
 default:
  break;
 }

 if (VAR_1)
  return VAR_1->parse_snapshot_options(VAR_1, VAR_2, VAR_3);

 FUNC_0("No AUX area tracing to snapshot\n");
 return -VAR_0;
}
