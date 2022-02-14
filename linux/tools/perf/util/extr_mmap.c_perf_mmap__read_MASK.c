
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; } ;
union perf_event {TYPE_1__ header; } ;
typedef size_t u64 ;
struct TYPE_4__ {unsigned char* base; size_t mask; void* event_copy; } ;
struct mmap {TYPE_2__ core; } ;


 int FUNC_0 (void*,unsigned char*,unsigned int) ;
 unsigned int FUNC_1 (int,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static union perf_event *FUNC_2(struct mmap *VAR_1,
      u64 *VAR_2, u64 VAR_3)
{
 unsigned char *VAR_4 = VAR_1->core.base + VAR_0;
 union perf_event *VAR_5 = ((void*)0);
 int VAR_6 = VAR_3 - *VAR_2;

 if (VAR_6 >= (int)sizeof(VAR_5->header)) {
  size_t VAR_7;

  VAR_5 = (union perf_event *)&VAR_4[*VAR_2 & VAR_1->core.mask];
  VAR_7 = VAR_5->header.size;

  if (VAR_7 < sizeof(VAR_5->header) || VAR_6 < (int)VAR_7)
   return ((void*)0);





  if ((*VAR_2 & VAR_1->core.mask) + VAR_7 != ((*VAR_2 + VAR_7) & VAR_1->core.mask)) {
   unsigned int VAR_8 = *VAR_2;
   unsigned int VAR_9 = FUNC_1(sizeof(*VAR_5), VAR_7), VAR_10;
   void *VAR_11 = VAR_1->core.event_copy;

   do {
    VAR_10 = FUNC_1(VAR_1->core.mask + 1 - (VAR_8 & VAR_1->core.mask), VAR_9);
    FUNC_0(VAR_11, &VAR_4[VAR_8 & VAR_1->core.mask], VAR_10);
    VAR_8 += VAR_10;
    VAR_11 += VAR_10;
    VAR_9 -= VAR_10;
   } while (VAR_9);

   VAR_5 = (union perf_event *)VAR_1->core.event_copy;
  }

  *VAR_2 += VAR_7;
 }

 return VAR_5;
}
