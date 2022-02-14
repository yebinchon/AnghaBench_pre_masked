
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map_sort_entry {void* key; } ;


 int FUNC_0 (int,char*,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (void*,void*,unsigned int) ;
 int FUNC_2 (struct tracing_map_sort_entry**,int,int,int (*) (void const*,void const*),int *) ;

__attribute__((used)) static void FUNC_3(struct tracing_map_sort_entry **VAR_1,
        int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = 0, VAR_5 = 0;
 int VAR_6;
 void *VAR_7;

 if (VAR_2 < 2)
  return;

 FUNC_2(VAR_1, VAR_2, sizeof(struct tracing_map_sort_entry *),
      (int (*)(const void *, const void *))VAR_0, ((void*)0));

 VAR_7 = VAR_1[0]->key;
 for (VAR_6 = 1; VAR_6 < VAR_2; VAR_6++) {
  if (!FUNC_1(VAR_1[VAR_6]->key, VAR_7, VAR_3)) {
   VAR_4++; VAR_5++;
   continue;
  }
  VAR_7 = VAR_1[VAR_6]->key;
  VAR_4 = 0;
 }

 FUNC_0(VAR_5 > 0,
    "Duplicates detected: %d\n", VAR_5);
}
