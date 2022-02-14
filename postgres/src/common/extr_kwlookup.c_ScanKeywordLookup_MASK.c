
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t max_kw_len; int (* hash ) (char const*,size_t) ;int num_keywords; } ;
typedef TYPE_1__ ScanKeywordList ;


 char* FUNC_0 (int,TYPE_1__ const*) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (char const*,size_t) ;

int
FUNC_3(const char *VAR_0,
      const ScanKeywordList *VAR_1)
{
 size_t VAR_2;
 int VAR_3;
 const char *VAR_4;





 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 > VAR_1->max_kw_len)
  return -1;






 VAR_3 = VAR_1->hash(VAR_0, VAR_2);


 if (VAR_3 < 0 || VAR_3 >= VAR_1->num_keywords)
  return -1;







 VAR_4 = FUNC_0(VAR_3, VAR_1);
 while (*VAR_0 != '\0')
 {
  char VAR_5 = *VAR_0++;

  if (VAR_5 >= 'A' && VAR_5 <= 'Z')
   VAR_5 += 'a' - 'A';
  if (VAR_5 != *VAR_4++)
   return -1;
 }
 if (*VAR_4 != '\0')
  return -1;


 return VAR_3;
}
