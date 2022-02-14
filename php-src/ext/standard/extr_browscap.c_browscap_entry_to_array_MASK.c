
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef size_t uint32_t ;
struct TYPE_7__ {TYPE_1__* kv; } ;
typedef TYPE_2__ browser_data ;
struct TYPE_8__ {size_t kv_start; size_t kv_end; int parent; int pattern; } ;
typedef TYPE_3__ browscap_entry ;
struct TYPE_6__ {int key; int value; } ;
typedef int HashTable ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,char*,int,int *) ;
 int * FUNC_5 (int) ;

__attribute__((used)) static HashTable *FUNC_6(browser_data *VAR_0, browscap_entry *VAR_1) {
 zval VAR_2;
 uint32_t VAR_3;

 HashTable *VAR_4 = FUNC_5(8);

 FUNC_0(&VAR_2, FUNC_2(VAR_1->pattern, 0));
 FUNC_4(VAR_4, "browser_name_regex", sizeof("browser_name_regex")-1, &VAR_2);

 FUNC_1(&VAR_2, VAR_1->pattern);
 FUNC_4(VAR_4, "browser_name_pattern", sizeof("browser_name_pattern")-1, &VAR_2);

 if (VAR_1->parent) {
  FUNC_1(&VAR_2, VAR_1->parent);
  FUNC_4(VAR_4, "parent", sizeof("parent")-1, &VAR_2);
 }

 for (VAR_3 = VAR_1->kv_start; VAR_3 < VAR_1->kv_end; VAR_3++) {
  FUNC_1(&VAR_2, VAR_0->kv[VAR_3].value);
  FUNC_3(VAR_4, VAR_0->kv[VAR_3].key, &VAR_2);
 }

 return VAR_4;
}
