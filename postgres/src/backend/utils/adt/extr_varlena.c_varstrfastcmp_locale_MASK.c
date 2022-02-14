
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_10__ {scalar_t__ typid; int buflen1; char* buf1; int buflen2; char* buf2; int last_len1; int last_len2; int cache_blob; int last_returned; TYPE_3__* locale; } ;
typedef TYPE_4__ VarStringSortSupport ;
typedef int UErrorCode ;
typedef char UChar ;
struct TYPE_11__ {int ssup_cxt; scalar_t__ ssup_extra; } ;
struct TYPE_7__ {int ucol; } ;
struct TYPE_8__ {int lt; TYPE_1__ icu; } ;
struct TYPE_9__ {scalar_t__ provider; scalar_t__ deterministic; TYPE_2__ info; } ;
typedef TYPE_5__* SortSupport ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 void* FUNC_1 (int,int ) ;
 int VAR_3 ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char**,char*,int) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char*,int ,char*,int ) ;
 int FUNC_18 (int ,char*,int,char*,int,int *) ;

__attribute__((used)) static int
FUNC_19(char *VAR_6, int VAR_7, char *VAR_8, int VAR_9, SortSupport VAR_10)
{
 VarStringSortSupport *VAR_11 = (VarStringSortSupport *) VAR_10->ssup_extra;
 int VAR_12;
 bool VAR_13;


 if (VAR_7 == VAR_9 && FUNC_10(VAR_6, VAR_8, VAR_7) == 0)
 {
  return 0;
 }

 if (VAR_11->typid == VAR_0)
 {

  VAR_7 = FUNC_5(VAR_6, VAR_7);
  VAR_9 = FUNC_5(VAR_8, VAR_9);
 }

 if (VAR_7 >= VAR_11->buflen1)
 {
  FUNC_12(VAR_11->buf1);
  VAR_11->buflen1 = FUNC_1(VAR_7 + 1, FUNC_3(VAR_11->buflen1 * 2, VAR_3));
  VAR_11->buf1 = FUNC_2(VAR_10->ssup_cxt, VAR_11->buflen1);
 }
 if (VAR_9 >= VAR_11->buflen2)
 {
  FUNC_12(VAR_11->buf2);
  VAR_11->buflen2 = FUNC_1(VAR_9 + 1, FUNC_3(VAR_11->buflen2 * 2, VAR_3));
  VAR_11->buf2 = FUNC_2(VAR_10->ssup_cxt, VAR_11->buflen2);
 }
 VAR_13 = 1;
 if (VAR_7 != VAR_11->last_len1 || FUNC_10(VAR_11->buf1, VAR_6, VAR_7) != 0)
 {
  VAR_13 = 0;
  FUNC_11(VAR_11->buf1, VAR_6, VAR_7);
  VAR_11->buf1[VAR_7] = '\0';
  VAR_11->last_len1 = VAR_7;
 }







 if (VAR_9 != VAR_11->last_len2 || FUNC_10(VAR_11->buf2, VAR_8, VAR_9) != 0)
 {
  FUNC_11(VAR_11->buf2, VAR_8, VAR_9);
  VAR_11->buf2[VAR_9] = '\0';
  VAR_11->last_len2 = VAR_9;
 }
 else if (VAR_13 && !VAR_11->cache_blob)
 {

  return VAR_11->last_returned;
 }

 if (VAR_11->locale)
 {
  if (VAR_11->locale->provider == VAR_1)
  {
   FUNC_6(VAR_2, "unsupported collprovider: %c", VAR_11->locale->provider);

  }
  else
  {




   FUNC_6(VAR_2, "unsupported collprovider: %c", VAR_11->locale->provider);

  }
 }
 else
  VAR_12 = FUNC_14(VAR_11->buf1, VAR_11->buf2);


 if (VAR_12 == 0 &&
  (!VAR_11->locale || VAR_11->locale->deterministic))
  VAR_12 = FUNC_13(VAR_11->buf1, VAR_11->buf2);


 VAR_11->cache_blob = 0;
 VAR_11->last_returned = VAR_12;
 return VAR_12;
}
