
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dirty_pages; int data; int library; int text; int share_pages; int resident_size; int virtual_size; } ;
typedef TYPE_1__ statm_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char*,int *,int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static inline bool FUNC_3(statm_t *VAR_0)
{
 const char *VAR_1 = "/proc/self/statm";

 FILE *VAR_2 = FUNC_1(VAR_1, "r");
 if (!VAR_2)
  return 0;

 if (FUNC_2(VAR_2, "%lu %lu %lu %lu %lu %lu %lu", &VAR_0->virtual_size,
     &VAR_0->resident_size, &VAR_0->share_pages, &VAR_0->text,
     &VAR_0->library, &VAR_0->data, &VAR_0->dirty_pages) != 7) {
  FUNC_0(VAR_2);
  return 0;
 }

 FUNC_0(VAR_2);
 return 1;
}
