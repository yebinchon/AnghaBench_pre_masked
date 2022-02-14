
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ dsa_pointer ;
struct TYPE_13__ {scalar_t__ nallocatable; size_t firstfree; size_t ninitialized; scalar_t__ start; } ;
typedef TYPE_2__ dsa_area_span ;
struct TYPE_14__ {scalar_t__* spans; } ;
typedef TYPE_3__ dsa_area_pool ;
struct TYPE_15__ {TYPE_1__* control; } ;
typedef TYPE_4__ dsa_area ;
struct TYPE_12__ {TYPE_3__* pools; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int) ;
 size_t VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 size_t FUNC_6 (char*) ;
 char* FUNC_7 (TYPE_4__*,scalar_t__) ;
 size_t* VAR_5 ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_9 (TYPE_4__*,TYPE_3__*,int,scalar_t__) ;

__attribute__((used)) static inline dsa_pointer
FUNC_10(dsa_area *VAR_6, int VAR_7)
{
 dsa_area_pool *VAR_8 = &VAR_6->control->pools[VAR_7];
 dsa_area_span *VAR_9;
 dsa_pointer VAR_10;
 dsa_pointer VAR_11;
 char *VAR_12;
 size_t VAR_13;







 FUNC_0(!FUNC_4(FUNC_1(VAR_6, VAR_7)));
 FUNC_3(FUNC_1(VAR_6, VAR_7), VAR_4);





 if (!FUNC_2(VAR_8->spans[1]) &&
  !FUNC_8(VAR_6, VAR_8, VAR_7))
 {
  VAR_11 = VAR_3;
 }
 else
 {





  FUNC_0(FUNC_2(VAR_8->spans[1]));
  VAR_9 = (dsa_area_span *)
   FUNC_7(VAR_6, VAR_8->spans[1]);
  FUNC_0(VAR_9->nallocatable > 0);
  VAR_10 = VAR_9->start;
  FUNC_0(VAR_7 < VAR_1);
  VAR_13 = VAR_5[VAR_7];
  if (VAR_9->firstfree != VAR_2)
  {
   VAR_11 = VAR_10 + VAR_9->firstfree * VAR_13;
   VAR_12 = FUNC_7(VAR_6, VAR_11);
   VAR_9->firstfree = FUNC_6(VAR_12);
  }
  else
  {
   VAR_11 = VAR_10 + VAR_9->ninitialized * VAR_13;
   ++VAR_9->ninitialized;
  }
  --VAR_9->nallocatable;


  if (VAR_9->nallocatable == 0)
   FUNC_9(VAR_6, VAR_8, 1, VAR_0 - 1);
 }

 FUNC_0(FUNC_4(FUNC_1(VAR_6, VAR_7)));
 FUNC_5(FUNC_1(VAR_6, VAR_7));

 return VAR_11;
}
