
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct table {size_t sizehash; struct node* hash; int L; } ;
struct node {size_t keyhash; int keytype; int key; size_t next; scalar_t__ nocolliding; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int,size_t*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static struct node *
FUNC_2(struct table *VAR_2, uint32_t VAR_3, int VAR_4, int VAR_5, const char *VAR_6, size_t VAR_7) {
 if (VAR_2->sizehash == 0)
  return ((void*)0);
 struct node *VAR_8 = &VAR_2->hash[VAR_3 % VAR_2->sizehash];
 if (VAR_3 != VAR_8->keyhash && VAR_8->nocolliding)
  return ((void*)0);
 for (;;) {
  if (VAR_3 == VAR_8->keyhash) {
   if (VAR_8->keytype == VAR_0) {
    if (VAR_5 == VAR_0 && VAR_8->key == VAR_4) {
     return VAR_8;
    }
   } else {

    if (VAR_5 == VAR_1) {
     size_t VAR_9 = 0;
     const char * VAR_10 = FUNC_0(VAR_2->L, VAR_8->key, &VAR_9);
     if (VAR_7 == VAR_9 && FUNC_1(VAR_6,VAR_10,VAR_7) == 0) {
      return VAR_8;
     }
    }
   }
  }
  if (VAR_8->next < 0) {
   return ((void*)0);
  }
  VAR_8 = &VAR_2->hash[VAR_8->next];
 }
}
