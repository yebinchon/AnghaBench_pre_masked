
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ long_name; int short_name; } ;


 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const struct option *VAR_2 = VAR_0, *VAR_3 = VAR_1;
 int VAR_4 = FUNC_1(VAR_2->short_name), VAR_5 = FUNC_1(VAR_3->short_name), VAR_6;

 if (VAR_4 == 0)
  VAR_4 = 'z' + 1;
 if (VAR_5 == 0)
  VAR_5 = 'z' + 1;

 VAR_6 = VAR_4 - VAR_5;

 if (VAR_6 == 0) {
  const char *VAR_7 = VAR_2->long_name ?: "",
      *VAR_8 = VAR_3->long_name ?: "";
  VAR_6 = FUNC_0(VAR_7, VAR_8);
 }

 return VAR_6;
}
