
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; int pos; struct TYPE_6__* next; scalar_t__ idx; } ;
typedef TYPE_1__ fcgi_hash_buckets ;
struct TYPE_7__ {TYPE_1__* data; TYPE_1__* buckets; int * list; int hash_table; } ;
typedef TYPE_2__ fcgi_hash ;
typedef TYPE_1__ fcgi_data_seg ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(fcgi_hash *VAR_0)
{
 FUNC_1(VAR_0->hash_table, 0, sizeof(VAR_0->hash_table));
 VAR_0->list = ((void*)0);

 while (VAR_0->buckets->next) {
  fcgi_hash_buckets *VAR_1 = VAR_0->buckets;

  VAR_0->buckets = VAR_0->buckets->next;
  FUNC_0(VAR_1);
 }
 VAR_0->buckets->idx = 0;

 while (VAR_0->data->next) {
  fcgi_data_seg *VAR_2 = VAR_0->data;

  VAR_0->data = VAR_0->data->next;
  FUNC_0(VAR_2);
 }
 VAR_0->data->pos = VAR_0->data->data;
}
