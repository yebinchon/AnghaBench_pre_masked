
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct word_at_a_time {int dummy; } ;
typedef long ssize_t ;


 long VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 struct word_at_a_time VAR_3 ;
 unsigned long FUNC_1 (unsigned long) ;
 long FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long*,struct word_at_a_time const*) ;
 unsigned long FUNC_4 (unsigned long,unsigned long,struct word_at_a_time const*) ;
 unsigned long FUNC_5 (char const*) ;
 unsigned long FUNC_6 (unsigned long) ;

ssize_t FUNC_7(char *VAR_4, const char *VAR_5, size_t VAR_6)
{
 const struct word_at_a_time VAR_7 = VAR_3;
 size_t VAR_8 = VAR_6;
 long VAR_9 = 0;

 if (VAR_6 == 0 || FUNC_0(VAR_6 > VAR_1))
  return -VAR_0;
 if (((long) VAR_4 | (long) VAR_5) & (sizeof(long) - 1))
  VAR_8 = 0;


 while (VAR_8 >= sizeof(unsigned long)) {
  unsigned long VAR_10, VAR_11;

  VAR_10 = FUNC_5(VAR_5+VAR_9);
  if (FUNC_3(VAR_10, &VAR_11, &VAR_7)) {
   VAR_11 = FUNC_4(VAR_10, VAR_11, &VAR_7);
   VAR_11 = FUNC_1(VAR_11);
   *(unsigned long *)(VAR_4+VAR_9) = VAR_10 & FUNC_6(VAR_11);
   return VAR_9 + FUNC_2(VAR_11);
  }
  *(unsigned long *)(VAR_4+VAR_9) = VAR_10;
  VAR_9 += sizeof(unsigned long);
  VAR_6 -= sizeof(unsigned long);
  VAR_8 -= sizeof(unsigned long);
 }

 while (VAR_6) {
  char VAR_12;

  VAR_12 = VAR_5[VAR_9];
  VAR_4[VAR_9] = VAR_12;
  if (!VAR_12)
   return VAR_9;
  VAR_9++;
  VAR_6--;
 }


 if (VAR_9)
  VAR_4[VAR_9-1] = '\0';

 return -VAR_0;
}
