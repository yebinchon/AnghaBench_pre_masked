
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t max_kw_len; int num_keywords; } ;


 char* FUNC_0 (int,TYPE_1__*) ;
 int* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char const*,size_t) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 size_t FUNC_3 (char const*) ;

int
FUNC_4(const char *VAR_2)
{
 size_t VAR_3;
 int VAR_4;
 const char *VAR_5;





 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 > VAR_1.max_kw_len)
  return -1;





 VAR_4 = FUNC_1(VAR_2, VAR_3);


 if (VAR_4 < 0 || VAR_4 >= VAR_1.num_keywords)
  return -1;

 VAR_5 = FUNC_0(VAR_4, &VAR_1);

 if (FUNC_2(VAR_5, VAR_2) == 0)
  return VAR_0[VAR_4];

 return -1;
}
