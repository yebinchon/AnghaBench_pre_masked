
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats {unsigned long total; unsigned long bytes; int count; } ;



__attribute__((used)) static void FUNC_0(struct stats * const VAR_0,
    unsigned long VAR_1, unsigned long VAR_2)
{
 VAR_0->total += VAR_1;
 VAR_0->bytes += VAR_2;
 VAR_0->count++;
}
