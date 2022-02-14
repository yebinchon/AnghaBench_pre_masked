
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* pg_locale_t ;
struct TYPE_7__ {int buflen1; int buflen2; int last_len1; int last_len2; int cache_blob; int collate_c; double prop_card; int full_card; int abbr_card; scalar_t__ typid; TYPE_1__* locale; scalar_t__ last_returned; void* buf2; void* buf1; } ;
typedef TYPE_2__ VarStringSortSupport ;
struct TYPE_8__ {int abbreviate; int abbrev_abort; int abbrev_converter; int comparator; int abbrev_full_comparator; TYPE_2__* ssup_extra; } ;
struct TYPE_6__ {scalar_t__ provider; } ;
typedef TYPE_3__* SortSupport ;
typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void
FUNC_6(SortSupport VAR_14, Oid VAR_15, Oid VAR_16)
{
 bool VAR_17 = VAR_14->abbreviate;
 bool VAR_18 = 0;
 VarStringSortSupport *VAR_19;
 pg_locale_t VAR_20 = 0;

 FUNC_1(VAR_16);
 if (FUNC_3(VAR_16))
 {
  if (VAR_15 == VAR_0)
   VAR_14->comparator = VAR_6;
  else if (VAR_15 == VAR_3)
  {
   VAR_14->comparator = VAR_7;

   VAR_17 = 0;
  }
  else
   VAR_14->comparator = VAR_13;

  VAR_18 = 1;
 }
 else
 {





  if (VAR_16 != VAR_2)
   VAR_20 = FUNC_5(VAR_16);
  if (VAR_15 == VAR_3)
  {
   VAR_14->comparator = VAR_8;

   VAR_17 = 0;
  }
  else
   VAR_14->comparator = VAR_9;
 }
 if (!VAR_18 && !(VAR_20 && VAR_20->provider == VAR_1))
  VAR_17 = 0;
 if (VAR_17 || !VAR_18)
 {
  VAR_19 = FUNC_4(sizeof(VarStringSortSupport));
  VAR_19->buf1 = FUNC_4(VAR_5);
  VAR_19->buflen1 = VAR_5;
  VAR_19->buf2 = FUNC_4(VAR_5);
  VAR_19->buflen2 = VAR_5;

  VAR_19->last_len1 = -1;
  VAR_19->last_len2 = -1;

  VAR_19->last_returned = 0;
  VAR_19->locale = VAR_20;
  VAR_19->cache_blob = 1;
  VAR_19->collate_c = VAR_18;
  VAR_19->typid = VAR_15;
  VAR_14->ssup_extra = VAR_19;






  if (VAR_17)
  {
   VAR_19->prop_card = 0.20;
   FUNC_2(&VAR_19->abbr_card, 10);
   FUNC_2(&VAR_19->full_card, 10);
   VAR_14->abbrev_full_comparator = VAR_14->comparator;
   VAR_14->comparator = VAR_12;
   VAR_14->abbrev_converter = VAR_11;
   VAR_14->abbrev_abort = VAR_10;
  }
 }
}
