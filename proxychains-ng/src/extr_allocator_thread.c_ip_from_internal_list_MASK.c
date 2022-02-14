
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_10__ {int member_0; } ;
typedef TYPE_2__ string_hash_tuple ;
struct TYPE_11__ {scalar_t__ as_int; } ;
typedef TYPE_3__ ip_type4 ;
struct TYPE_14__ {size_t counter; int capa; TYPE_4__** list; } ;
struct TYPE_9__ {TYPE_3__ v4; } ;
struct TYPE_13__ {TYPE_1__ addr; } ;
struct TYPE_12__ {scalar_t__ hash; void* string; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char*) ;
 void* FUNC_2 (char*,size_t) ;
 TYPE_8__* VAR_0 ;
 TYPE_6__ VAR_1 ;
 TYPE_3__ FUNC_3 (size_t) ;
 void* FUNC_4 (TYPE_4__**,int) ;
 int FUNC_5 (char*,void*) ;

__attribute__((used)) static ip_type4 FUNC_6(char* VAR_2, size_t VAR_3) {
 uint32_t VAR_4 = FUNC_1((char *) VAR_2);
 size_t VAR_5;
 ip_type4 VAR_6;
 void* VAR_7;

 if(VAR_0->counter) {
  for(VAR_5 = 0; VAR_5 < VAR_0->counter; VAR_5++) {
   if(VAR_0->list[VAR_5]->hash == VAR_4 && !FUNC_5(VAR_2, VAR_0->list[VAR_5]->string)) {
    VAR_6 = FUNC_3(VAR_5);
    FUNC_0("got cached ip for %s\n", VAR_2);
    goto have_ip;
   }
  }
 }

 if(VAR_0->capa < VAR_0->counter + 1) {
  FUNC_0("realloc\n");
  VAR_7 = FUNC_4(VAR_0->list, (VAR_0->capa + 16) * sizeof(void *));
  if(VAR_7) {
   VAR_0->capa += 16;
   VAR_0->list = VAR_7;
  } else {
 oom:
   FUNC_0("out of mem\n");
   goto err_plus_unlock;
  }
 }

 VAR_6 = FUNC_3(VAR_0->counter);
 if(VAR_6.as_int == VAR_1.addr.v4.as_int)
  goto err_plus_unlock;

 string_hash_tuple VAR_8 = { 0 };
 VAR_7 = FUNC_2((char*) &VAR_8, sizeof(string_hash_tuple));
 if(!VAR_7)
  goto oom;

 FUNC_0("creating new entry %d for ip of %s\n", (int) VAR_0->counter, VAR_2);

 VAR_0->list[VAR_0->counter] = VAR_7;
 VAR_0->list[VAR_0->counter]->hash = VAR_4;

 VAR_7 = FUNC_2((char*) VAR_2, VAR_3 + 1);

 if(!VAR_7) {
  VAR_0->list[VAR_0->counter] = 0;
  goto oom;
 }
 VAR_0->list[VAR_0->counter]->string = VAR_7;

 VAR_0->counter += 1;

 have_ip:

 return VAR_6;
 err_plus_unlock:

 FUNC_0("return err\n");
 return VAR_1.addr.v4;
}
