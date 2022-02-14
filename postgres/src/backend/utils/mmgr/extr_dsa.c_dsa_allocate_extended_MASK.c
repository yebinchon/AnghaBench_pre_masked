
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_18__ {int * pagemap; int fpm; } ;
typedef TYPE_2__ dsa_segment_map ;
typedef int dsa_pointer ;
typedef int dsa_area_pool ;
struct TYPE_19__ {TYPE_1__* control; } ;
typedef TYPE_3__ dsa_area ;
struct TYPE_17__ {int * pools; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,size_t) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_3__*,size_t) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_7 (int ,size_t,size_t*) ;
 int VAR_10 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int VAR_11 ;
 int FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 size_t* VAR_12 ;
 size_t* VAR_13 ;
 int FUNC_13 (int ,char*,size_t) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,size_t) ;
 int FUNC_17 (char*) ;
 size_t FUNC_18 (size_t) ;
 TYPE_2__* FUNC_19 (TYPE_3__*,size_t) ;
 int FUNC_20 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_21 (TYPE_3__*,int ,int *,int ,size_t,size_t) ;
 int FUNC_22 (size_t*) ;
 TYPE_2__* FUNC_23 (TYPE_3__*,size_t) ;
 int FUNC_24 (int ,int ,size_t) ;

dsa_pointer
FUNC_25(dsa_area *VAR_14, size_t VAR_15, int VAR_16)
{
 uint16 VAR_17;
 dsa_pointer VAR_18;
 dsa_segment_map *VAR_19;
 dsa_pointer VAR_20;

 FUNC_2(VAR_15 > 0);


 if (((VAR_16 & VAR_0) != 0 && !FUNC_0(VAR_15)) ||
  ((VAR_16 & VAR_0) == 0 && !FUNC_1(VAR_15)))
  FUNC_13(VAR_7, "invalid DSA memory alloc request size %zu", VAR_15);
 if (VAR_15 > VAR_13[FUNC_22(VAR_13) - 1])
 {
  size_t VAR_21 = FUNC_18(VAR_15);
  size_t VAR_22;
  dsa_pointer VAR_23;
  dsa_area_pool *VAR_24 = &VAR_14->control->pools[VAR_4];


  VAR_23 = FUNC_10(VAR_14, VAR_3);
  if (!FUNC_6(VAR_23))
  {

   if ((VAR_16 & VAR_1) == 0)
    FUNC_14(VAR_7,
      (FUNC_15(VAR_6),
       FUNC_17("out of memory"),
       FUNC_16("Failed on DSA request of size %zu.",
           VAR_15)));
   return VAR_10;
  }

  FUNC_8(FUNC_3(VAR_14), VAR_11);


  VAR_19 = FUNC_19(VAR_14, VAR_21);
  if (VAR_19 == ((void*)0))
   VAR_19 = FUNC_23(VAR_14, VAR_21);
  if (VAR_19 == ((void*)0))
  {

   FUNC_9(FUNC_3(VAR_14));
   FUNC_11(VAR_14, VAR_23);


   if ((VAR_16 & VAR_1) == 0)
    FUNC_14(VAR_7,
      (FUNC_15(VAR_6),
       FUNC_17("out of memory"),
       FUNC_16("Failed on DSA request of size %zu.",
           VAR_15)));
   return VAR_10;
  }
  if (!FUNC_7(VAR_19->fpm, VAR_21, &VAR_22))
   FUNC_13(VAR_8,
     "dsa_allocate could not find %zu free pages", VAR_21);
  FUNC_9(FUNC_3(VAR_14));

  VAR_18 = FUNC_4(FUNC_20(VAR_14, VAR_19),
           VAR_22 * VAR_9);


  FUNC_8(FUNC_5(VAR_14, VAR_4),
       VAR_11);
  FUNC_21(VAR_14, VAR_23, VAR_24, VAR_18, VAR_21,
      VAR_4);
  VAR_19->pagemap[VAR_22] = VAR_23;
  FUNC_9(FUNC_5(VAR_14, VAR_4));


  if ((VAR_16 & VAR_2) != 0)
   FUNC_24(FUNC_12(VAR_14, VAR_18), 0, VAR_15);

  return VAR_18;
 }


 if (VAR_15 < FUNC_22(VAR_12) * VAR_5)
 {
  int VAR_25;


  VAR_25 = ((VAR_15 + VAR_5 - 1) /
      VAR_5) - 1;
  VAR_17 = VAR_12[VAR_25];
 }
 else
 {
  uint16 VAR_26;
  uint16 VAR_27;


  VAR_26 = VAR_12[FUNC_22(VAR_12) - 1];
  VAR_27 = FUNC_22(VAR_13) - 1;

  while (VAR_26 < VAR_27)
  {
   uint16 VAR_28 = (VAR_26 + VAR_27) / 2;
   uint16 VAR_29 = VAR_13[VAR_28];

   if (VAR_29 < VAR_15)
    VAR_26 = VAR_28 + 1;
   else
    VAR_27 = VAR_28;
  }

  VAR_17 = VAR_26;
 }
 FUNC_2(VAR_15 <= VAR_13[VAR_17]);
 FUNC_2(VAR_17 == 0 || VAR_15 > VAR_13[VAR_17 - 1]);


 VAR_20 = FUNC_10(VAR_14, VAR_17);


 if (!FUNC_6(VAR_20))
 {

  if ((VAR_16 & VAR_1) == 0)
   FUNC_14(VAR_7,
     (FUNC_15(VAR_6),
      FUNC_17("out of memory"),
      FUNC_16("Failed on DSA request of size %zu.", VAR_15)));
  return VAR_10;
 }


 if ((VAR_16 & VAR_2) != 0)
  FUNC_24(FUNC_12(VAR_14, VAR_20), 0, VAR_15);

 return VAR_20;
}
