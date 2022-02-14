
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_14__ {scalar_t__ oper; } ;
struct TYPE_17__ {scalar_t__ type; TYPE_1__ qoperator; } ;
struct TYPE_16__ {int size; } ;
struct TYPE_15__ {scalar_t__ size; } ;
typedef TYPE_2__* TSVector ;
typedef TYPE_3__* TSQuery ;
typedef TYPE_4__ QueryItem ;


 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 float FUNC_1 (float const*,TYPE_2__*,TYPE_3__*) ;
 float FUNC_2 (float const*,TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 float FUNC_4 (double) ;

__attribute__((used)) static float
FUNC_5(const float *VAR_8, TSVector VAR_9, TSQuery VAR_10, int32 VAR_11)
{
 QueryItem *VAR_12 = FUNC_0(VAR_10);
 float VAR_13 = 0.0;
 int VAR_14;

 if (!VAR_9->size || !VAR_10->size)
  return 0.0;


 VAR_13 = (VAR_12->type == VAR_2 && (VAR_12->qoperator.oper == VAR_0 ||
         VAR_12->qoperator.oper == VAR_1)) ?
  FUNC_1(VAR_8, VAR_9, VAR_10) :
  FUNC_2(VAR_8, VAR_9, VAR_10);

 if (VAR_13 < 0)
  VAR_13 = 1e-20f;

 if ((VAR_11 & VAR_4) && VAR_9->size > 0)
  VAR_13 /= FUNC_4((double) (FUNC_3(VAR_9) + 1)) / FUNC_4(2.0);

 if (VAR_11 & VAR_3)
 {
  VAR_14 = FUNC_3(VAR_9);
  if (VAR_14 > 0)
   VAR_13 /= (float) VAR_14;
 }



 if ((VAR_11 & VAR_7) && VAR_9->size > 0)
  VAR_13 /= (float) (VAR_9->size);

 if ((VAR_11 & VAR_5) && VAR_9->size > 0)
  VAR_13 /= FUNC_4((double) (VAR_9->size + 1)) / FUNC_4(2.0);

 if (VAR_11 & VAR_6)
  VAR_13 /= (VAR_13 + 1);

 return VAR_13;
}
