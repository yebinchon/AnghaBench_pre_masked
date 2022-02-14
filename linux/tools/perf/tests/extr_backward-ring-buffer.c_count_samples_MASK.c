
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
union perf_event {TYPE_1__ header; } ;
typedef int u32 ;
struct mmap {int dummy; } ;
struct TYPE_4__ {int nr_mmaps; } ;
struct evlist {struct mmap* overwrite_mmap; TYPE_2__ core; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mmap*) ;
 union perf_event* FUNC_1 (struct mmap*) ;
 int FUNC_2 (struct mmap*) ;
 int FUNC_3 (char*,int const) ;

__attribute__((used)) static int FUNC_4(struct evlist *VAR_2, int *VAR_3,
    int *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->core.nr_mmaps; VAR_5++) {
  struct mmap *VAR_6 = &VAR_2->overwrite_mmap[VAR_5];
  union perf_event *VAR_7;

  FUNC_2(VAR_6);
  while ((VAR_7 = FUNC_1(VAR_6)) != ((void*)0)) {
   const u32 VAR_8 = VAR_7->header.type;

   switch (VAR_8) {
   case 128:
    (*VAR_3)++;
    break;
   case 129:
    (*VAR_4)++;
    break;
   default:
    FUNC_3("Unexpected record of type %d\n", VAR_8);
    return VAR_0;
   }
  }
  FUNC_0(VAR_6);
 }
 return VAR_1;
}
