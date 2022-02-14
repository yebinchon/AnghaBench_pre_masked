
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* rd_rel; } ;
struct TYPE_4__ {double relpages; double reltuples; } ;
typedef TYPE_2__* Relation ;
typedef double BlockNumber ;


 double FUNC_0 (double) ;

double
FUNC_1(Relation VAR_0,
        BlockNumber VAR_1,
        BlockNumber VAR_2,
        double VAR_3)
{
 BlockNumber VAR_4 = VAR_0->rd_rel->relpages;
 double VAR_5 = VAR_0->rd_rel->reltuples;
 double VAR_6;
 double VAR_7;
 double VAR_8;


 if (VAR_2 >= VAR_1)
  return VAR_3;







 if (VAR_2 == 0)
  return VAR_5;





 if (VAR_4 == 0)
  return FUNC_0((VAR_3 / VAR_2) * VAR_1 + 0.5);







 VAR_6 = VAR_5 / VAR_4;
 VAR_7 = (double) VAR_1 - (double) VAR_2;
 VAR_8 = VAR_6 * VAR_7 + VAR_3;
 return FUNC_0(VAR_8 + 0.5);
}
