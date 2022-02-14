
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_iter {int entry; scalar_t__ bucket; struct hash const* hash; } ;
struct hash {int dummy; } ;



void FUNC_0(const struct hash *VAR_0, struct hash_iter *VAR_1)
{
    VAR_1->hash = VAR_0;
    VAR_1->bucket = 0;
    VAR_1->entry = -1;
}
