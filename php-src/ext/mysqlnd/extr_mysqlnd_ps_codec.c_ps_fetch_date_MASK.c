
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef scalar_t__ zend_ulong ;
typedef scalar_t__ zend_uchar ;
typedef int t ;
struct st_mysqlnd_time {unsigned int year; unsigned int month; unsigned int day; void* time_type; scalar_t__ second; scalar_t__ minute; scalar_t__ hour; scalar_t__ second_part; scalar_t__ neg; int member_0; } ;
typedef int MYSQLND_FIELD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (struct st_mysqlnd_time*,int ,int) ;
 scalar_t__ FUNC_4 (char**,int ,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (scalar_t__ const**) ;
 scalar_t__ FUNC_7 (scalar_t__ const*) ;

__attribute__((used)) static void
FUNC_8(zval * VAR_2, const MYSQLND_FIELD * const VAR_3, const unsigned int VAR_4, const zend_uchar ** VAR_5)
{
 struct st_mysqlnd_time VAR_6 = {0};
 zend_ulong VAR_7;
 char * VAR_8;
 FUNC_0("ps_fetch_date");

 if ((VAR_7 = FUNC_6(VAR_5))) {
  const zend_uchar * VAR_9 = *VAR_5;

  VAR_6.time_type = VAR_1;
  VAR_6.neg = 0;

  VAR_6.second_part = VAR_6.hour = VAR_6.minute = VAR_6.second = 0;

  VAR_6.year = (unsigned int) FUNC_7(VAR_9);
  VAR_6.month = (unsigned int) VAR_9[2];
  VAR_6.day = (unsigned int) VAR_9[3];

  (*VAR_5)+= VAR_7;
 } else {
  FUNC_3(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.time_type = VAR_1;
 }

 VAR_7 = FUNC_4(&VAR_8, 0, "%04u-%02u-%02u", VAR_6.year, VAR_6.month, VAR_6.day);

 FUNC_1("%s", VAR_8);
 FUNC_2(VAR_2, VAR_8, VAR_7);
 FUNC_5(VAR_8);
 VAR_0;
}
