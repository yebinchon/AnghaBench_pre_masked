
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef long time_t ;
typedef int thetime ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_isdst; long tm_gmtoff; } ;
struct TYPE_6__ {int data; } ;
typedef TYPE_1__ ASN1_UTCTIME ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (struct tm*,int ,int) ;
 long FUNC_7 (struct tm*) ;
 int FUNC_8 (int *,int ,char*,...) ;
 size_t FUNC_9 (char const*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static time_t FUNC_10(ASN1_UTCTIME * VAR_4)
{







 time_t VAR_5;
 struct tm VAR_6;
 char * VAR_7;
 char * VAR_8;
 long VAR_9 = 0;
 size_t VAR_10;

 if (FUNC_2(VAR_4) != VAR_2 && FUNC_2(VAR_4) != VAR_1) {
  FUNC_8(((void*)0), VAR_0, "illegal ASN1 data type for timestamp");
  return (time_t)-1;
 }

 VAR_10 = (size_t)FUNC_1(VAR_4);

 if (VAR_10 != FUNC_9((const char *)FUNC_0(VAR_4))) {
  FUNC_8(((void*)0), VAR_0, "illegal length in timestamp");
  return (time_t)-1;
 }

 if (VAR_10 < 13 && VAR_10 != 11) {
  FUNC_8(((void*)0), VAR_0, "unable to parse time string %s correctly", VAR_4->data);
  return (time_t)-1;
 }

 if (FUNC_2(VAR_4) == VAR_1 && VAR_10 < 15) {
  FUNC_8(((void*)0), VAR_0, "unable to parse time string %s correctly", VAR_4->data);
  return (time_t)-1;
 }

 VAR_7 = FUNC_5((const char *)FUNC_0(VAR_4));

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));



 VAR_8 = VAR_7 + VAR_10 - 3;

 if (VAR_10 == 11) {
  VAR_6.tm_sec = 0;
 } else {
  VAR_6.tm_sec = FUNC_3(VAR_8);
  *VAR_8 = '\0';
  VAR_8 -= 2;
 }
 VAR_6.tm_min = FUNC_3(VAR_8);
 *VAR_8 = '\0';
 VAR_8 -= 2;
 VAR_6.tm_hour = FUNC_3(VAR_8);
 *VAR_8 = '\0';
 VAR_8 -= 2;
 VAR_6.tm_mday = FUNC_3(VAR_8);
 *VAR_8 = '\0';
 VAR_8 -= 2;
 VAR_6.tm_mon = FUNC_3(VAR_8)-1;

 *VAR_8 = '\0';
 if( FUNC_2(VAR_4) == VAR_2 ) {
  VAR_8 -= 2;
  VAR_6.tm_year = FUNC_3(VAR_8);

  if (VAR_6.tm_year < 68) {
   VAR_6.tm_year += 100;
  }
 } else if( FUNC_2(VAR_4) == VAR_1 ) {
  VAR_8 -= 4;
  VAR_6.tm_year = FUNC_3(VAR_8) - 1900;
 }


 VAR_6.tm_isdst = -1;
 VAR_5 = FUNC_7(&VAR_6);
 VAR_9 = -(VAR_6.tm_isdst ? (long)VAR_3 - 3600 : (long)VAR_3);

 VAR_5 += VAR_9;

 FUNC_4(VAR_7);

 return VAR_5;
}
