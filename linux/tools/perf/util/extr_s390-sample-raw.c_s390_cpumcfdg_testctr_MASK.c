
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {size_t raw_size; unsigned char* raw_data; } ;
struct cf_trailer_entry {int dummy; } ;
struct cf_ctrset_entry {void* res1; void* ctr; void* set; void* def; } ;


 void* FUNC_0 (void*) ;
 size_t FUNC_1 (struct cf_ctrset_entry*) ;
 int FUNC_2 (struct cf_ctrset_entry*) ;
 int FUNC_3 (char*,size_t) ;

__attribute__((used)) static bool FUNC_4(struct perf_sample *VAR_0)
{
 size_t VAR_1 = VAR_0->raw_size, VAR_2 = 0;
 unsigned char *VAR_3 = VAR_0->raw_data;
 struct cf_trailer_entry *VAR_4;
 struct cf_ctrset_entry *VAR_5, VAR_6;

 if (!VAR_1)
  return 0;
 while (VAR_2 < VAR_1) {
  VAR_5 = (struct cf_ctrset_entry *)(VAR_3 + VAR_2);
  VAR_6.def = FUNC_0(VAR_5->def);
  VAR_6.set = FUNC_0(VAR_5->set);
  VAR_6.ctr = FUNC_0(VAR_5->ctr);
  VAR_6.res1 = FUNC_0(VAR_5->res1);

  if (!FUNC_2(&VAR_6) || VAR_2 + FUNC_1(&VAR_6) > VAR_1) {
   if (VAR_1 - VAR_2 - sizeof(*VAR_4) == 4)
    break;
   FUNC_3("Invalid counter set entry at %zd\n", VAR_2);
   return 0;
  }
  VAR_2 += FUNC_1(&VAR_6);
 }
 return 1;
}
