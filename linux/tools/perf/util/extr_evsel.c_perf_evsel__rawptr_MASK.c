
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_format_field {int offset; int flags; } ;
struct perf_sample {void* raw_data; } ;
struct evsel {int dummy; } ;


 int VAR_0 ;
 struct tep_format_field* FUNC_0 (struct evsel*,char const*) ;

void *FUNC_1(struct evsel *VAR_1, struct perf_sample *VAR_2,
    const char *VAR_3)
{
 struct tep_format_field *VAR_4 = FUNC_0(VAR_1, VAR_3);
 int VAR_5;

 if (!VAR_4)
  return ((void*)0);

 VAR_5 = VAR_4->offset;

 if (VAR_4->flags & VAR_0) {
  VAR_5 = *(int *)(VAR_2->raw_data + VAR_4->offset);
  VAR_5 &= 0xffff;
 }

 return VAR_2->raw_data + VAR_5;
}
