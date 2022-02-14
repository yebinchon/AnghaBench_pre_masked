
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ float8 ;
typedef scalar_t__ float4 ;
struct TYPE_7__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_6__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_8__ {TYPE_2__ low; TYPE_1__ high; } ;
struct TYPE_9__ {int entriesCount; int first; int dim; scalar_t__ overlap; scalar_t__ ratio; scalar_t__ range; scalar_t__ leftUpper; scalar_t__ rightLower; TYPE_3__ boundingBox; } ;
typedef TYPE_4__ ConsiderSplitContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static inline void
FUNC_5(ConsiderSplitContext *VAR_1, int VAR_2,
      float8 VAR_3, int VAR_4,
      float8 VAR_5, int VAR_6)
{
 int VAR_7,
    VAR_8;
 float4 VAR_9,
    VAR_10;
 float8 VAR_11;





 if (VAR_4 >= (VAR_1->entriesCount + 1) / 2)
 {
  VAR_7 = VAR_4;
 }
 else
 {
  if (VAR_6 <= VAR_1->entriesCount / 2)
   VAR_7 = VAR_6;
  else
   VAR_7 = VAR_1->entriesCount / 2;
 }
 VAR_8 = VAR_1->entriesCount - VAR_7;





 VAR_9 = FUNC_1(FUNC_0(VAR_7, VAR_8), VAR_1->entriesCount);

 if (VAR_9 > VAR_0)
 {
  bool VAR_12 = 0;
  if (VAR_2 == 0)
   VAR_11 = FUNC_3(VAR_1->boundingBox.high.x,
         VAR_1->boundingBox.low.x);
  else
   VAR_11 = FUNC_3(VAR_1->boundingBox.high.y,
         VAR_1->boundingBox.low.y);

  VAR_10 = FUNC_2(FUNC_3(VAR_5, VAR_3), VAR_11);


  if (VAR_1->first)
   VAR_12 = 1;
  else if (VAR_1->dim == VAR_2)
  {




   if (VAR_10 < VAR_1->overlap ||
    (VAR_10 == VAR_1->overlap && VAR_9 > VAR_1->ratio))
    VAR_12 = 1;
  }
  else
  {
   if (FUNC_4(VAR_10) < FUNC_4(VAR_1->overlap) ||
    (VAR_11 > VAR_1->range &&
     FUNC_4(VAR_10) <= FUNC_4(VAR_1->overlap)))
    VAR_12 = 1;
  }

  if (VAR_12)
  {

   VAR_1->first = 0;
   VAR_1->ratio = VAR_9;
   VAR_1->range = VAR_11;
   VAR_1->overlap = VAR_10;
   VAR_1->rightLower = VAR_3;
   VAR_1->leftUpper = VAR_5;
   VAR_1->dim = VAR_2;
  }
 }
}
