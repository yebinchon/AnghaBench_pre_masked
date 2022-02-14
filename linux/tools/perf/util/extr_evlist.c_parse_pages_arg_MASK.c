
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_tag {char tag; int mult; } ;
typedef int buf ;


 long VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_2 (char const*,struct parse_tag*) ;
 int FUNC_3 (char*,char*,unsigned long) ;
 unsigned long FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (char const*,char**,int) ;
 int FUNC_6 (char*,int,unsigned long) ;

__attribute__((used)) static long FUNC_7(const char *VAR_2, unsigned long VAR_3,
       unsigned long VAR_4)
{
 unsigned long VAR_5, VAR_6;
 static struct parse_tag VAR_7[] = {
  { .tag = 'B', .mult = 1 },
  { .tag = 'K', .mult = 1 << 10 },
  { .tag = 'M', .mult = 1 << 20 },
  { .tag = 'G', .mult = 1 << 30 },
  { .tag = 0 },
 };

 if (VAR_2 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_2, VAR_7);
 if (VAR_6 != (unsigned long) -1) {

  VAR_5 = FUNC_0(VAR_6, VAR_1) / VAR_1;
 } else {

  char *VAR_8;
  VAR_5 = FUNC_5(VAR_2, &VAR_8, 10);
  if (*VAR_8 != '\0')
   return -VAR_0;
 }

 if (VAR_5 == 0 && VAR_3 == 0) {

 } else if (!FUNC_1(VAR_5)) {
  char VAR_9[100];


  VAR_5 = FUNC_4(VAR_5);
  if (!VAR_5)
   return -VAR_0;

  FUNC_6(VAR_9, sizeof(VAR_9), VAR_5 * VAR_1);
  FUNC_3("rounding mmap pages size to %s (%lu pages)\n",
   VAR_9, VAR_5);
 }

 if (VAR_5 > VAR_4)
  return -VAR_0;

 return VAR_5;
}
