
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint16 ;
typedef void* dsa_pointer ;
struct TYPE_6__ {void* nextspan; size_t npages; size_t size_class; int ninitialized; size_t nallocatable; size_t nmax; int fclass; int firstfree; void* start; void* prevspan; int pool; } ;
typedef TYPE_1__ dsa_area_span ;
struct TYPE_7__ {void** spans; } ;
typedef TYPE_2__ dsa_area_pool ;
typedef int dsa_area ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,size_t) ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_3 (void*) ;
 size_t VAR_4 ;
 void* VAR_5 ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int *,void*) ;
 size_t* VAR_6 ;

__attribute__((used)) static void
FUNC_6(dsa_area *VAR_7,
    dsa_pointer VAR_8,
    dsa_area_pool *VAR_9, dsa_pointer VAR_10, size_t VAR_11,
    uint16 VAR_12)
{
 dsa_area_span *VAR_13 = FUNC_5(VAR_7, VAR_8);
 size_t VAR_14 = VAR_6[VAR_12];





 FUNC_0(FUNC_4(FUNC_1(VAR_7, VAR_12)));


 if (FUNC_3(VAR_9->spans[1]))
 {
  dsa_area_span *VAR_15 = (dsa_area_span *)
  FUNC_5(VAR_7, VAR_9->spans[1]);

  VAR_15->prevspan = VAR_8;
 }
 VAR_13->pool = FUNC_2(VAR_7, VAR_9);
 VAR_13->nextspan = VAR_9->spans[1];
 VAR_13->prevspan = VAR_5;
 VAR_9->spans[1] = VAR_8;

 VAR_13->start = VAR_10;
 VAR_13->npages = VAR_11;
 VAR_13->size_class = VAR_12;
 VAR_13->ninitialized = 0;
 if (VAR_12 == VAR_0)
 {







  VAR_13->ninitialized = 1;
  VAR_13->nallocatable = VAR_4 / VAR_14 - 1;
 }
 else if (VAR_12 != VAR_1)
  VAR_13->nallocatable = VAR_3 / VAR_14;
 VAR_13->firstfree = VAR_2;
 VAR_13->nmax = VAR_13->nallocatable;
 VAR_13->fclass = 1;
}
