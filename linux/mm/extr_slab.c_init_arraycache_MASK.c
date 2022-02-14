
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array_cache {int limit; int batchcount; scalar_t__ touched; scalar_t__ avail; } ;



__attribute__((used)) static void FUNC_0(struct array_cache *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_0) {
  VAR_0->avail = 0;
  VAR_0->limit = VAR_1;
  VAR_0->batchcount = VAR_2;
  VAR_0->touched = 0;
 }
}
