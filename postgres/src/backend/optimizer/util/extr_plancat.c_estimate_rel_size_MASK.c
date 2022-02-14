
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_8__ {TYPE_1__* rd_rel; } ;
struct TYPE_7__ {int relkind; double relpages; double reltuples; int relallvisible; } ;
typedef TYPE_2__* Relation ;
typedef int ItemIdData ;
typedef double BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int ) ;






 double FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int*) ;
 double FUNC_3 (double) ;
 int FUNC_4 (TYPE_2__*,int*,double*,double*,double*) ;

void
FUNC_5(Relation VAR_3, int32 *VAR_4,
      BlockNumber *VAR_5, double *VAR_6, double *VAR_7)
{
 BlockNumber VAR_8;
 BlockNumber VAR_9;
 double VAR_10;
 BlockNumber VAR_11;
 double VAR_12;

 switch (VAR_3->rd_rel->relkind)
 {
  case 130:
  case 131:
  case 128:
   FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6,
           VAR_7);
   break;

  case 132:







   VAR_8 = FUNC_1(VAR_3);


   VAR_9 = (BlockNumber) VAR_3->rd_rel->relpages;
   VAR_10 = (double) VAR_3->rd_rel->reltuples;
   VAR_11 = (BlockNumber) VAR_3->rd_rel->relallvisible;


   *VAR_5 = VAR_8;

   if (VAR_8 == 0)
   {
    *VAR_6 = 0;
    *VAR_7 = 0;
    break;
   }

   VAR_9 = (BlockNumber) VAR_3->rd_rel->relpages;
   VAR_10 = (double) VAR_3->rd_rel->reltuples;
   VAR_11 = (BlockNumber) VAR_3->rd_rel->relallvisible;







   if (VAR_9 > 0)
   {
    VAR_8--;
    VAR_9--;
   }


   if (VAR_9 > 0)
    VAR_12 = VAR_10 / (double) VAR_9;
   else
   {
    int32 VAR_13;

    VAR_13 = FUNC_2(VAR_3, VAR_4);
    VAR_13 += FUNC_0(VAR_2);
    VAR_13 += sizeof(ItemIdData);

    VAR_12 = (VAR_0 - VAR_1) / VAR_13;
   }
   *VAR_6 = FUNC_3(VAR_12 * (double) VAR_8);







   if (VAR_11 == 0 || VAR_8 <= 0)
    *VAR_7 = 0;
   else if ((double) VAR_11 >= VAR_8)
    *VAR_7 = 1;
   else
    *VAR_7 = (double) VAR_11 / VAR_8;
   break;

  case 129:

   *VAR_5 = 1;
   *VAR_6 = 1;
   *VAR_7 = 0;
   break;
  case 133:

   *VAR_5 = VAR_3->rd_rel->relpages;
   *VAR_6 = VAR_3->rd_rel->reltuples;
   *VAR_7 = 0;
   break;
  default:

   *VAR_5 = 0;
   *VAR_6 = 0;
   *VAR_7 = 0;
   break;
 }
}
