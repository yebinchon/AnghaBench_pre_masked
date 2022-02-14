
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector {unsigned int elt_size; int shift; scalar_t__ num_elts; scalar_t__ buckets_allocated; scalar_t__ num_buckets; int * buckets; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct vector* VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    VAR_0->buckets = ((void*)0);

    VAR_0->elt_size = (VAR_1 + 3) & ~3;
    switch (VAR_2)
    {
    case 2: VAR_0->shift = 1; break;
    case 4: VAR_0->shift = 2; break;
    case 8: VAR_0->shift = 3; break;
    case 16: VAR_0->shift = 4; break;
    case 32: VAR_0->shift = 5; break;
    case 64: VAR_0->shift = 6; break;
    case 128: VAR_0->shift = 7; break;
    case 256: VAR_0->shift = 8; break;
    case 512: VAR_0->shift = 9; break;
    case 1024: VAR_0->shift = 10; break;
    default: FUNC_0(0);
    }
    VAR_0->num_buckets = 0;
    VAR_0->buckets_allocated = 0;
    VAR_0->num_elts = 0;
}
