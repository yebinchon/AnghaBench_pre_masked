
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_record_namespaces {int nr_namespaces; int link_info; } ;
struct perf_ns_link_info {int dummy; } ;
struct namespaces {int end_time; int link_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 struct namespaces* FUNC_1 (int) ;

struct namespaces *FUNC_2(struct perf_record_namespaces *VAR_1)
{
 struct namespaces *VAR_2;
 u64 VAR_3 = ((VAR_1 ? VAR_1->nr_namespaces : VAR_0) *
         sizeof(struct perf_ns_link_info));

 VAR_2 = FUNC_1(sizeof(struct namespaces) + VAR_3);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->end_time = -1;

 if (VAR_1)
  FUNC_0(VAR_2->link_info, VAR_1->link_info, VAR_3);

 return VAR_2;
}
