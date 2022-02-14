
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_string ;
typedef int zend_bool ;
struct TYPE_5__ {int kv_used; int kv_size; TYPE_2__* kv; } ;
typedef TYPE_1__ browser_data ;
typedef int browscap_kv ;
struct TYPE_6__ {int * value; int * key; } ;


 TYPE_2__* FUNC_0 (TYPE_2__*,int,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(
  browser_data *VAR_0, zend_string *VAR_1, zend_string *VAR_2, zend_bool VAR_3) {
 if (VAR_0->kv_used == VAR_0->kv_size) {
  VAR_0->kv_size *= 2;
  VAR_0->kv = FUNC_0(VAR_0->kv, sizeof(browscap_kv), VAR_0->kv_size, 0, VAR_3);
 }

 VAR_0->kv[VAR_0->kv_used].key = VAR_1;
 VAR_0->kv[VAR_0->kv_used].value = VAR_2;
 VAR_0->kv_used++;
}
