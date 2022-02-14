
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int idx; TYPE_2__* data; struct TYPE_6__* next; } ;
typedef TYPE_1__ fcgi_hash_buckets ;
struct TYPE_7__ {unsigned int hash_value; unsigned int var_len; unsigned int val_len; char* val; void* var; struct TYPE_7__* list_next; struct TYPE_7__* next; } ;
typedef TYPE_2__ fcgi_hash_bucket ;
struct TYPE_8__ {TYPE_2__* list; TYPE_2__** hash_table; TYPE_1__* buckets; } ;
typedef TYPE_3__ fcgi_hash ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (TYPE_3__*,char*,unsigned int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (void*,char*,unsigned int) ;

__attribute__((used)) static char* FUNC_4(fcgi_hash *VAR_2, unsigned int VAR_3, char *VAR_4, unsigned int VAR_5, char *VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8 = VAR_3 & VAR_0;
 fcgi_hash_bucket *VAR_9 = VAR_2->hash_table[VAR_8];

 while (FUNC_0(VAR_9 != ((void*)0))) {
  if (FUNC_0(VAR_9->hash_value == VAR_3) &&
      VAR_9->var_len == VAR_5 &&
      FUNC_3(VAR_9->var, VAR_4, VAR_5) == 0) {

   VAR_9->val_len = VAR_7;
   VAR_9->val = FUNC_1(VAR_2, VAR_6, VAR_7);
   return VAR_9->val;
  }
  VAR_9 = VAR_9->next;
 }

 if (FUNC_0(VAR_2->buckets->idx >= VAR_1)) {
  fcgi_hash_buckets *VAR_10 = (fcgi_hash_buckets*)FUNC_2(sizeof(fcgi_hash_buckets));
  VAR_10->idx = 0;
  VAR_10->next = VAR_2->buckets;
  VAR_2->buckets = VAR_10;
 }
 VAR_9 = VAR_2->buckets->data + VAR_2->buckets->idx;
 VAR_2->buckets->idx++;
 VAR_9->next = VAR_2->hash_table[VAR_8];
 VAR_2->hash_table[VAR_8] = VAR_9;
 VAR_9->list_next = VAR_2->list;
 VAR_2->list = VAR_9;
 VAR_9->hash_value = VAR_3;
 VAR_9->var_len = VAR_5;
 VAR_9->var = FUNC_1(VAR_2, VAR_4, VAR_5);
 VAR_9->val_len = VAR_7;
 VAR_9->val = FUNC_1(VAR_2, VAR_6, VAR_7);
 return VAR_9->val;
}
