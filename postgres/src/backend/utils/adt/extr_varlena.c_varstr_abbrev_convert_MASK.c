
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint32 ;
typedef int int32_t ;
struct TYPE_10__ {scalar_t__ typid; int buflen1; char* buf1; int last_len1; int cache_blob; char* buf2; int last_len2; int buflen2; int abbr_card; int full_card; TYPE_3__* locale; scalar_t__ collate_c; } ;
typedef TYPE_4__ VarStringSortSupport ;
typedef char VarString ;
typedef int UErrorCode ;
typedef int UCharIterator ;
typedef char UChar ;
struct TYPE_11__ {scalar_t__ ssup_extra; } ;
struct TYPE_7__ {int ucol; } ;
struct TYPE_8__ {int lt; TYPE_1__ icu; } ;
struct TYPE_9__ {scalar_t__ provider; TYPE_2__ info; } ;
typedef TYPE_5__* SortSupport ;
typedef int Size ;
typedef int Datum ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 void* FUNC_4 (int,int) ;
 int VAR_4 ;
 int FUNC_5 (int,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_7 ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (unsigned char*,int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char**,char*,int) ;
 scalar_t__ FUNC_17 (char*,char*,int) ;
 int FUNC_18 (char*,char*,int) ;
 int FUNC_19 (char*,int ,int) ;
 void* FUNC_20 (int) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*,char*,int) ;
 int FUNC_23 (char*,char*,int,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,char*,int,int *,int) ;
 int FUNC_26 (int ,int *,scalar_t__*,int *,int,int *) ;
 int FUNC_27 (int *,char*,int) ;

__attribute__((used)) static Datum
FUNC_28(Datum VAR_8, SortSupport VAR_9)
{
 VarStringSortSupport *VAR_10 = (VarStringSortSupport *) VAR_9->ssup_extra;
 VarString *VAR_11 = FUNC_2(VAR_8);
 char *VAR_12 = FUNC_8(VAR_11);


 Datum VAR_13;
 char *VAR_14;
 int VAR_15;
 uint32 VAR_16;

 VAR_14 = (char *) &VAR_13;

 FUNC_19(VAR_14, 0, sizeof(Datum));
 VAR_15 = FUNC_9(VAR_11);


 if (VAR_10->typid == VAR_0)
  VAR_15 = FUNC_11(VAR_12, VAR_15);
 if (VAR_10->collate_c)
  FUNC_18(VAR_14, VAR_12, FUNC_5(VAR_15, sizeof(Datum)));
 else
 {
  Size VAR_17;
  if (VAR_15 >= VAR_10->buflen1)
  {
   FUNC_21(VAR_10->buf1);
   VAR_10->buflen1 = FUNC_4(VAR_15 + 1, FUNC_5(VAR_10->buflen1 * 2, VAR_4));
   VAR_10->buf1 = FUNC_20(VAR_10->buflen1);
  }


  if (VAR_10->last_len1 == VAR_15 && VAR_10->cache_blob &&
   FUNC_17(VAR_10->buf1, VAR_12, VAR_15) == 0)
  {
   FUNC_18(VAR_14, VAR_10->buf2, FUNC_5(sizeof(Datum), VAR_10->last_len2));

   goto done;
  }

  FUNC_18(VAR_10->buf1, VAR_12, VAR_15);





  VAR_10->buf1[VAR_15] = '\0';
  VAR_10->last_len1 = VAR_15;
  for (;;)
  {
    VAR_17 = FUNC_22(VAR_10->buf2, VAR_10->buf1, VAR_10->buflen2);

   VAR_10->last_len2 = VAR_17;
   if (VAR_17 < VAR_10->buflen2)
    break;




   FUNC_21(VAR_10->buf2);
   VAR_10->buflen2 = FUNC_4(VAR_17 + 1,
          FUNC_5(VAR_10->buflen2 * 2, VAR_4));
   VAR_10->buf2 = FUNC_20(VAR_10->buflen2);
  }
  FUNC_18(VAR_14, VAR_10->buf2, FUNC_5(sizeof(Datum), VAR_17));





 }
 VAR_16 = FUNC_1(FUNC_14((unsigned char *) VAR_12,
           FUNC_5(VAR_15, VAR_5)));

 if (VAR_15 > VAR_5)
  VAR_16 ^= FUNC_1(FUNC_15((uint32) VAR_15));

 FUNC_10(&VAR_10->full_card, VAR_16);
 VAR_16 = FUNC_1(FUNC_15((uint32) VAR_13));


 FUNC_10(&VAR_10->abbr_card, VAR_16);


 VAR_10->cache_blob = 1;
done:
 VAR_13 = FUNC_0(VAR_13);


 if (FUNC_6(VAR_11) != VAR_8)
  FUNC_21(VAR_11);

 return VAR_13;
}
