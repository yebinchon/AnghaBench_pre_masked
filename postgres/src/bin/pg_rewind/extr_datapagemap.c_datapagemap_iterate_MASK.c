
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int datapagemap_t ;
struct TYPE_4__ {scalar_t__ nextblkno; int * map; } ;
typedef TYPE_1__ datapagemap_iterator_t ;


 TYPE_1__* FUNC_0 (int) ;

datapagemap_iterator_t *
FUNC_1(datapagemap_t *VAR_0)
{
 datapagemap_iterator_t *VAR_1;

 VAR_1 = FUNC_0(sizeof(datapagemap_iterator_t));
 VAR_1->map = VAR_0;
 VAR_1->nextblkno = 0;

 return VAR_1;
}
