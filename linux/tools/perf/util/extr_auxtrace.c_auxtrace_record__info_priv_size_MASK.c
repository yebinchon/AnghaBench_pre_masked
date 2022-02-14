
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evlist {int dummy; } ;
struct auxtrace_record {size_t (* info_priv_size ) (struct auxtrace_record*,struct evlist*) ;} ;


 size_t FUNC_0 (struct auxtrace_record*,struct evlist*) ;

size_t FUNC_1(struct auxtrace_record *VAR_0,
           struct evlist *VAR_1)
{
 if (VAR_0)
  return VAR_0->info_priv_size(VAR_0, VAR_1);
 return 0;
}
