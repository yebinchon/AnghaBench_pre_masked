
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ h; int key; } ;
typedef TYPE_1__ Bucket ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(const void *VAR_0, const void *VAR_1)
{
 const Bucket *VAR_2;
 const Bucket *VAR_3;

 VAR_2 = (const Bucket *) VAR_0;
 VAR_3 = (const Bucket *) VAR_1;

 if (!VAR_2->key && !VAR_3->key) {
  if (VAR_2->h > VAR_3->h) {
   return -1;
  } else if (VAR_2->h < VAR_3->h) {
   return 1;
  }
  return 0;
 } else if (!VAR_2->key) {
  return -1;
 } else if (!VAR_3->key) {
  return 1;
 } else {
  return FUNC_2(FUNC_1(VAR_2->key), FUNC_0(VAR_2->key), FUNC_1(VAR_3->key), FUNC_0(VAR_3->key));
 }
}
