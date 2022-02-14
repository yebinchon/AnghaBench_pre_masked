
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dsize; int max_dsize; } ;
typedef int Size ;
typedef int HASHSEGMENT ;
typedef int HASHHDR ;
typedef TYPE_1__ HASHCTL ;


 int FUNC_0 (int) ;
 int VAR_0 ;

Size
FUNC_1(HASHCTL *VAR_1, int VAR_2)
{
 FUNC_0(VAR_2 & VAR_0);
 FUNC_0(VAR_1->dsize == VAR_1->max_dsize);
 return sizeof(HASHHDR) + VAR_1->dsize * sizeof(HASHSEGMENT);
}
