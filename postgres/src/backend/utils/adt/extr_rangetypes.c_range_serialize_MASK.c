
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_14__ {int type_id; TYPE_1__* rngelemtype; } ;
typedef TYPE_2__ TypeCacheEntry ;
struct TYPE_16__ {int lower; void* val; scalar_t__ inclusive; scalar_t__ infinite; } ;
struct TYPE_15__ {int rangetypid; } ;
struct TYPE_13__ {int typlen; int typbyval; char typalign; char typstorage; } ;
typedef int Size ;
typedef TYPE_3__ RangeType ;
typedef TYPE_4__ RangeBound ;
typedef char* Pointer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ) ;
 char VAR_2 ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char) ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (int,void*,int,char,int,char) ;
 char* FUNC_8 (char*,void*,int,char,int,char) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (TYPE_2__*,TYPE_4__*,TYPE_4__*) ;

RangeType *
FUNC_14(TypeCacheEntry *VAR_7, RangeBound *VAR_8, RangeBound *VAR_9,
    bool VAR_10)
{
 RangeType *VAR_11;
 int VAR_12;
 Size VAR_13;
 Pointer VAR_14;
 int16 VAR_15;
 bool VAR_16;
 char VAR_17;
 char VAR_18;
 char VAR_19 = 0;





 FUNC_0(VAR_8->lower);
 FUNC_0(!VAR_9->lower);

 if (VAR_10)
  VAR_19 |= VAR_2;
 else
 {
  VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_9);


  if (VAR_12 > 0)
   FUNC_9(VAR_1,
     (FUNC_10(VAR_0),
      FUNC_11("range lower bound must be less than or equal to range upper bound")));


  if (VAR_12 == 0 && !(VAR_8->inclusive && VAR_9->inclusive))
   VAR_19 |= VAR_2;
  else
  {

   if (VAR_8->infinite)
    VAR_19 |= VAR_4;
   else if (VAR_8->inclusive)
    VAR_19 |= VAR_3;
   if (VAR_9->infinite)
    VAR_19 |= VAR_6;
   else if (VAR_9->inclusive)
    VAR_19 |= VAR_5;
  }
 }


 VAR_15 = VAR_7->rngelemtype->typlen;
 VAR_16 = VAR_7->rngelemtype->typbyval;
 VAR_17 = VAR_7->rngelemtype->typalign;
 VAR_18 = VAR_7->rngelemtype->typstorage;


 VAR_13 = sizeof(RangeType);
 FUNC_0(VAR_13 == FUNC_1(VAR_13));


 if (FUNC_4(VAR_19))
 {
  if (VAR_15 == -1)
   VAR_8->val = FUNC_3(FUNC_2(VAR_8->val));

  VAR_13 = FUNC_7(VAR_13, VAR_8->val, VAR_16, VAR_17,
           VAR_15, VAR_18);
 }

 if (FUNC_5(VAR_19))
 {

  if (VAR_15 == -1)
   VAR_9->val = FUNC_3(FUNC_2(VAR_9->val));

  VAR_13 = FUNC_7(VAR_13, VAR_9->val, VAR_16, VAR_17,
           VAR_15, VAR_18);
 }


 VAR_13 += sizeof(char);


 VAR_11 = (RangeType *) FUNC_12(VAR_13);
 FUNC_6(VAR_11, VAR_13);


 VAR_11->rangetypid = VAR_7->type_id;

 VAR_14 = (char *) (VAR_11 + 1);

 if (FUNC_4(VAR_19))
 {
  FUNC_0(VAR_8->lower);
  VAR_14 = FUNC_8(VAR_14, VAR_8->val, VAR_16, VAR_17, VAR_15,
        VAR_18);
 }

 if (FUNC_5(VAR_19))
 {
  FUNC_0(!VAR_9->lower);
  VAR_14 = FUNC_8(VAR_14, VAR_9->val, VAR_16, VAR_17, VAR_15,
        VAR_18);
 }

 *((char *) VAR_14) = VAR_19;

 return VAR_11;
}
