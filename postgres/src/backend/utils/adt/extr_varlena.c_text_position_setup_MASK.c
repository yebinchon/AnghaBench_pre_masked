
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int text ;
typedef TYPE_1__* pg_locale_t ;
struct TYPE_6__ {int is_multibyte; int is_multibyte_char_in_char; char* str2; int len1; int len2; int skiptablemask; int* skiptable; scalar_t__ refpos; void* str1; void* refpoint; int * last_match; } ;
typedef TYPE_2__ TextPositionState ;
struct TYPE_5__ {int deterministic; } ;
typedef scalar_t__ Oid ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_3 ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 TYPE_1__* FUNC_10 (scalar_t__) ;

__attribute__((used)) static void
FUNC_11(text *VAR_4, text *VAR_5, Oid VAR_6, TextPositionState *VAR_7)
{
 int VAR_8 = FUNC_3(VAR_4);
 int VAR_9 = FUNC_3(VAR_5);
 pg_locale_t VAR_10 = 0;

 FUNC_4(VAR_6);

 if (!FUNC_8(VAR_6) && VAR_6 != VAR_0)
  VAR_10 = FUNC_10(VAR_6);

 if (VAR_10 && !VAR_10->deterministic)
  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),
     FUNC_7("nondeterministic collations are not supported for substring searches")));

 FUNC_0(VAR_8 > 0);
 FUNC_0(VAR_9 > 0);
 if (FUNC_9() == 1)
 {
  VAR_7->is_multibyte = 0;
  VAR_7->is_multibyte_char_in_char = 0;
 }
 else if (FUNC_1() == VAR_3)
 {
  VAR_7->is_multibyte = 1;
  VAR_7->is_multibyte_char_in_char = 0;
 }
 else
 {
  VAR_7->is_multibyte = 1;
  VAR_7->is_multibyte_char_in_char = 1;
 }

 VAR_7->str1 = FUNC_2(VAR_4);
 VAR_7->str2 = FUNC_2(VAR_5);
 VAR_7->len1 = VAR_8;
 VAR_7->len2 = VAR_9;
 VAR_7->last_match = ((void*)0);
 VAR_7->refpoint = VAR_7->str1;
 VAR_7->refpos = 0;
 if (VAR_8 >= VAR_9 && VAR_9 > 1)
 {
  int VAR_11 = VAR_8 - VAR_9;
  int VAR_12;
  int VAR_13;
  int VAR_14;
  const char *VAR_15 = VAR_7->str2;
  if (VAR_11 < 16)
   VAR_12 = 3;
  else if (VAR_11 < 64)
   VAR_12 = 7;
  else if (VAR_11 < 128)
   VAR_12 = 15;
  else if (VAR_11 < 512)
   VAR_12 = 31;
  else if (VAR_11 < 2048)
   VAR_12 = 63;
  else if (VAR_11 < 4096)
   VAR_12 = 127;
  else
   VAR_12 = 255;
  VAR_7->skiptablemask = VAR_12;






  for (VAR_14 = 0; VAR_14 <= VAR_12; VAR_14++)
   VAR_7->skiptable[VAR_14] = VAR_9;
  VAR_13 = VAR_9 - 1;

  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
   VAR_7->skiptable[(unsigned char) VAR_15[VAR_14] & VAR_12] = VAR_13 - VAR_14;
 }
}
