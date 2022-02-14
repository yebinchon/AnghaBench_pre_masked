
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef double int32 ;
struct TYPE_7__ {TYPE_1__* rd_rel; } ;
struct TYPE_6__ {int relhassubclass; scalar_t__ relallvisible; scalar_t__ reltuples; scalar_t__ relpages; } ;
typedef double Size ;
typedef TYPE_2__* Relation ;
typedef int BlockNumber ;


 int FUNC_0 (TYPE_2__*) ;
 double FUNC_1 (TYPE_2__*,double*) ;
 double FUNC_2 (double) ;

void
FUNC_3(Relation VAR_0, int32 *VAR_1,
           BlockNumber *VAR_2, double *VAR_3,
           double *VAR_4,
           Size VAR_5,
           Size VAR_6)
{
 BlockNumber VAR_7;
 BlockNumber VAR_8;
 double VAR_9;
 BlockNumber VAR_10;
 double VAR_11;


 VAR_7 = FUNC_0(VAR_0);


 VAR_8 = (BlockNumber) VAR_0->rd_rel->relpages;
 VAR_9 = (double) VAR_0->rd_rel->reltuples;
 VAR_10 = (BlockNumber) VAR_0->rd_rel->relallvisible;
 if (VAR_7 < 10 &&
  VAR_8 == 0 &&
  !VAR_0->rd_rel->relhassubclass)
  VAR_7 = 10;


 *VAR_2 = VAR_7;

 if (VAR_7 == 0)
 {
  *VAR_3 = 0;
  *VAR_4 = 0;
  return;
 }


 if (VAR_8 > 0)
  VAR_11 = VAR_9 / (double) VAR_8;
 else
 {
  int32 VAR_12;

  VAR_12 = FUNC_1(VAR_0, VAR_1);
  VAR_12 += VAR_5;

  VAR_11 = VAR_6 / VAR_12;
 }
 *VAR_3 = FUNC_2(VAR_11 * (double) VAR_7);







 if (VAR_10 == 0 || VAR_7 <= 0)
  *VAR_4 = 0;
 else if ((double) VAR_10 >= VAR_7)
  *VAR_4 = 1;
 else
  *VAR_4 = (double) VAR_10 / VAR_7;
}
