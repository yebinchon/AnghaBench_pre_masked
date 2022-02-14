
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int natts; } ;
struct TYPE_11__ {scalar_t__ attlen; } ;
struct TYPE_10__ {int freespace; int bufferingMode; int gfbb; scalar_t__ indtuples; scalar_t__ indtuplesSize; TYPE_1__* indexrel; } ;
struct TYPE_9__ {TYPE_8__* rd_att; } ;
typedef double Size ;
typedef TYPE_1__* Relation ;
typedef int ItemIdData ;
typedef int IndexTupleData ;
typedef int GISTPageOpaqueData ;
typedef TYPE_2__ GISTBuildState ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 TYPE_7__* FUNC_1 (TYPE_8__*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int VAR_6 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (double,double) ;

__attribute__((used)) static void
FUNC_8(GISTBuildState *VAR_8)
{
 Relation VAR_9 = VAR_8->indexrel;
 int VAR_10;
 Size VAR_11;
 Size VAR_12,
    VAR_13;
 double VAR_14,
    VAR_15;
 int VAR_16;
 int VAR_17;


 VAR_11 = VAR_0 - VAR_4 - sizeof(GISTPageOpaqueData)
  - sizeof(ItemIdData)
  - VAR_8->freespace;





 VAR_12 = (double) VAR_8->indtuplesSize /
  (double) VAR_8->indtuples;
 VAR_13 = (Size) FUNC_0(sizeof(IndexTupleData));
 for (VAR_16 = 0; VAR_16 < VAR_9->rd_att->natts; VAR_16++)
 {
  if (FUNC_1(VAR_9->rd_att, VAR_16)->attlen < 0)
   VAR_13 += VAR_5;
  else
   VAR_13 += FUNC_1(VAR_9->rd_att, VAR_16)->attlen;
 }


 VAR_14 = VAR_11 / VAR_12;
 VAR_15 = VAR_11 / VAR_13;
 VAR_17 = 1;
 for (;;)
 {
  double VAR_18;
  double VAR_19;


  VAR_18 =
   (1 - FUNC_7(VAR_14, (double) (VAR_17 + 1))) /
   (1 - VAR_14);


  VAR_19 = FUNC_7(VAR_15, (double) VAR_17);


  if (VAR_18 > VAR_6 / 4)
   break;


  if (VAR_19 > ((double) VAR_7 * 1024) / VAR_0)
   break;


  VAR_17++;
 }





 VAR_17--;





 if (VAR_17 <= 0)
 {
  FUNC_3(VAR_1, "failed to switch to buffered GiST build");
  VAR_8->bufferingMode = VAR_3;
  return;
 }






 VAR_10 = FUNC_2(VAR_8, VAR_17);


 VAR_8->gfbb = FUNC_5(VAR_10, VAR_17,
           FUNC_4(VAR_9));

 FUNC_6(VAR_8);

 VAR_8->bufferingMode = VAR_2;

 FUNC_3(VAR_1, "switched to buffered GiST build; level step = %d, pagesPerBuffer = %d",
   VAR_17, VAR_10);
}
