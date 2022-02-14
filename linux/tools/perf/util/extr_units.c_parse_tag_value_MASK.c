
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_tag {unsigned long mult; scalar_t__ tag; } ;


 unsigned long VAR_0 ;
 char* FUNC_0 (char const*,scalar_t__) ;
 unsigned long FUNC_1 (char const*,char**,int) ;

unsigned long FUNC_2(const char *VAR_1, struct parse_tag *VAR_2)
{
 struct parse_tag *VAR_3 = VAR_2;

 while (VAR_3->tag) {
  char *VAR_4 = FUNC_0(VAR_1, VAR_3->tag);

  if (VAR_4) {
   unsigned long int VAR_5;
   char *VAR_6;

   VAR_5 = FUNC_1(VAR_1, &VAR_6, 10);
   if (VAR_4 != VAR_6)
    break;

   if (VAR_5 > VAR_0 / VAR_3->mult)
    break;
   VAR_5 *= VAR_3->mult;
   return VAR_5;
  }
  VAR_3++;
 }

 return (unsigned long) -1;
}
