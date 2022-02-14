
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {void** pagemap; int fpm; } ;
typedef TYPE_1__ dsa_segment_map ;
typedef void* dsa_pointer ;
struct TYPE_11__ {void* nextspan; size_t nallocatable; void* prevspan; int fclass; } ;
typedef TYPE_2__ dsa_area_span ;
struct TYPE_12__ {void** spans; } ;
typedef TYPE_3__ dsa_area_pool ;
typedef int dsa_area ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 void* FUNC_2 (int ,size_t) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;
 size_t VAR_3 ;
 int FUNC_4 (void*) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_5 (int ,size_t,size_t*) ;
 void* VAR_6 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 void* FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,void*) ;
 size_t* VAR_8 ;
 int FUNC_11 (int ,char*,size_t) ;
 TYPE_1__* FUNC_12 (int *,size_t) ;
 int FUNC_13 (int *,TYPE_1__*) ;
 int FUNC_14 (int *,void*,TYPE_3__*,void*,size_t,int) ;
 TYPE_1__* FUNC_15 (int *,size_t) ;
 scalar_t__ FUNC_16 (int *,TYPE_3__*,int,int) ;

__attribute__((used)) static bool
FUNC_17(dsa_area *VAR_9, dsa_area_pool *VAR_10,
       int VAR_11)
{
 dsa_pointer VAR_12;
 dsa_pointer VAR_13;
 size_t VAR_14 = VAR_8[VAR_11];
 size_t VAR_15;
 int VAR_16;
 size_t VAR_17 = 1;
 size_t VAR_18;
 size_t VAR_19;
 dsa_segment_map *VAR_20;

 FUNC_0(FUNC_7(FUNC_3(VAR_9, VAR_11)));







 if (VAR_11 == VAR_2)
  VAR_15 = VAR_5 / VAR_14 - 1;
 else
  VAR_15 = VAR_3 / VAR_14;






 for (VAR_16 = 2; VAR_16 < VAR_0 - 1; ++VAR_16)
 {
  VAR_12 = VAR_10->spans[VAR_16];

  while (FUNC_4(VAR_12))
  {
   int VAR_21;
   dsa_area_span *VAR_22;
   dsa_area_span *VAR_23;
   dsa_area_span *VAR_24;
   dsa_pointer VAR_25;

   VAR_22 = (dsa_area_span *)
    FUNC_10(VAR_9, VAR_12);
   VAR_25 = VAR_22->nextspan;


   VAR_21 = (VAR_15 - VAR_22->nallocatable)
    * (VAR_0 - 1) / VAR_15;


   if (FUNC_4(VAR_22->nextspan))
    VAR_23 = (dsa_area_span *)
     FUNC_10(VAR_9, VAR_22->nextspan);
   else
    VAR_23 = ((void*)0);





   if (VAR_21 < VAR_16)
   {

    if (VAR_10->spans[VAR_16] == VAR_12)
    {

     FUNC_0(!FUNC_4(VAR_22->prevspan));
     VAR_10->spans[VAR_16] = VAR_22->nextspan;
     if (VAR_23 != ((void*)0))
      VAR_23->prevspan = VAR_6;
    }
    else
    {

     FUNC_0(FUNC_4(VAR_22->prevspan));
     VAR_24 = (dsa_area_span *)
      FUNC_10(VAR_9, VAR_22->prevspan);
     VAR_24->nextspan = VAR_22->nextspan;
    }
    if (VAR_23 != ((void*)0))
     VAR_23->prevspan = VAR_22->prevspan;


    VAR_22->nextspan = VAR_10->spans[VAR_21];
    VAR_10->spans[VAR_21] = VAR_12;
    VAR_22->prevspan = VAR_6;
    if (FUNC_4(VAR_22->nextspan))
    {
     VAR_23 = (dsa_area_span *)
      FUNC_10(VAR_9, VAR_22->nextspan);
     VAR_23->prevspan = VAR_12;
    }
    VAR_22->fclass = VAR_21;
   }


   VAR_12 = VAR_25;
  }


  if (FUNC_4(VAR_10->spans[1]))
   return 1;
 }
 FUNC_0(!FUNC_4(VAR_10->spans[1]));
 for (VAR_16 = 2; VAR_16 < VAR_0 - 1; ++VAR_16)
  if (FUNC_16(VAR_9, VAR_10, VAR_16, 1))
   return 1;
 if (!FUNC_4(VAR_10->spans[1]) &&
  FUNC_16(VAR_9, VAR_10, 0, 1))
  return 1;
 if (VAR_11 != VAR_2)
 {
  VAR_12 = FUNC_9(VAR_9, VAR_2);
  if (!FUNC_4(VAR_12))
   return 0;
  VAR_17 = VAR_1;
 }


 FUNC_6(FUNC_1(VAR_9), VAR_7);
 VAR_20 = FUNC_12(VAR_9, VAR_17);
 if (VAR_20 == ((void*)0))
 {
  VAR_20 = FUNC_15(VAR_9, VAR_17);
  if (VAR_20 == ((void*)0))
  {
   FUNC_8(FUNC_1(VAR_9));
   return 0;
  }
 }





 if (!FUNC_5(VAR_20->fpm, VAR_17, &VAR_18))
  FUNC_11(VAR_4,
    "dsa_allocate could not find %zu free pages for superblock",
    VAR_17);
 FUNC_8(FUNC_1(VAR_9));


 VAR_13 =
  FUNC_2(FUNC_13(VAR_9, VAR_20),
       VAR_18 * VAR_5);





 if (VAR_11 == VAR_2)
 {




  VAR_12 = VAR_13;
 }


 FUNC_14(VAR_9, VAR_12, VAR_10, VAR_13, VAR_17, VAR_11);
 for (VAR_19 = 0; VAR_19 < VAR_17; ++VAR_19)
  VAR_20->pagemap[VAR_18 + VAR_19] = VAR_12;

 return 1;
}
