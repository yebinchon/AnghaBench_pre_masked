
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ fcgi_hash_buckets ;
struct TYPE_7__ {TYPE_1__* data; TYPE_1__* buckets; } ;
typedef TYPE_2__ fcgi_hash ;
typedef TYPE_1__ fcgi_data_seg ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(fcgi_hash *VAR_0)
{
 fcgi_hash_buckets *VAR_1;
 fcgi_data_seg *VAR_2;

 VAR_1 = VAR_0->buckets;
 while (VAR_1) {
  fcgi_hash_buckets *VAR_3 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_3);
 }
 VAR_2 = VAR_0->data;
 while (VAR_2) {
  fcgi_data_seg *VAR_4 = VAR_2;
  VAR_2 = VAR_2->next;
  FUNC_0(VAR_4);
 }
}
