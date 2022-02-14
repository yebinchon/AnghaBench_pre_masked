
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * next; scalar_t__ idx; } ;
typedef TYPE_1__ fcgi_hash_buckets ;
struct TYPE_6__ {TYPE_3__* data; TYPE_1__* buckets; int * list; int hash_table; } ;
typedef TYPE_2__ fcgi_hash ;
struct TYPE_7__ {int * next; scalar_t__ pos; scalar_t__ end; scalar_t__ data; } ;
typedef TYPE_3__ fcgi_data_seg ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(fcgi_hash *VAR_1)
{
 FUNC_1(VAR_1->hash_table, 0, sizeof(VAR_1->hash_table));
 VAR_1->list = ((void*)0);
 VAR_1->buckets = (fcgi_hash_buckets*)FUNC_0(sizeof(fcgi_hash_buckets));
 VAR_1->buckets->idx = 0;
 VAR_1->buckets->next = ((void*)0);
 VAR_1->data = (fcgi_data_seg*)FUNC_0(sizeof(fcgi_data_seg) - 1 + VAR_0);
 VAR_1->data->pos = VAR_1->data->data;
 VAR_1->data->end = VAR_1->data->pos + VAR_0;
 VAR_1->data->next = ((void*)0);
}
