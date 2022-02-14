
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t size; int type; } ;
struct perf_record_compressed {TYPE_1__ header; } ;


 int VAR_0 ;

__attribute__((used)) static size_t FUNC_0(void *VAR_1, size_t VAR_2)
{
 struct perf_record_compressed *VAR_3 = VAR_1;
 size_t VAR_4 = sizeof(*VAR_3);

 if (VAR_2) {
  VAR_3->header.size += VAR_2;
  return VAR_2;
 }

 VAR_3->header.type = VAR_0;
 VAR_3->header.size = VAR_4;

 return VAR_4;
}
