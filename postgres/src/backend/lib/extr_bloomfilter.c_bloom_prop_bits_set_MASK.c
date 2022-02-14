
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef double uint64 ;
struct TYPE_3__ {int m; scalar_t__ bitset; } ;
typedef TYPE_1__ bloom_filter ;


 int VAR_0 ;
 double FUNC_0 (char*,int) ;

double
FUNC_1(bloom_filter *VAR_1)
{
 int VAR_2 = VAR_1->m / VAR_0;
 uint64 VAR_3 = FUNC_0((char *) VAR_1->bitset, VAR_2);

 return VAR_3 / (double) VAR_1->m;
}
