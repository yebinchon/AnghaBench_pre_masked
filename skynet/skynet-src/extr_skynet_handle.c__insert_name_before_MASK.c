
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct handle_storage {int name_count; int name_cap; struct handle_name* name; } ;
struct handle_name {char* name; int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct handle_name*) ;
 struct handle_name* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct handle_storage *VAR_1, char *VAR_2, uint32_t VAR_3, int VAR_4) {
 if (VAR_1->name_count >= VAR_1->name_cap) {
  VAR_1->name_cap *= 2;
  FUNC_0(VAR_1->name_cap <= VAR_0);
  struct handle_name * VAR_5 = FUNC_2(VAR_1->name_cap * sizeof(struct handle_name));
  int VAR_6;
  for (VAR_6=0;VAR_6<VAR_4;VAR_6++) {
   VAR_5[VAR_6] = VAR_1->name[VAR_6];
  }
  for (VAR_6=VAR_4;VAR_6<VAR_1->name_count;VAR_6++) {
   VAR_5[VAR_6+1] = VAR_1->name[VAR_6];
  }
  FUNC_1(VAR_1->name);
  VAR_1->name = VAR_5;
 } else {
  int VAR_7;
  for (VAR_7=VAR_1->name_count;VAR_7>VAR_4;VAR_7--) {
   VAR_1->name[VAR_7] = VAR_1->name[VAR_7-1];
  }
 }
 VAR_1->name[VAR_4].name = VAR_2;
 VAR_1->name[VAR_4].handle = VAR_3;
 VAR_1->name_count ++;
}
