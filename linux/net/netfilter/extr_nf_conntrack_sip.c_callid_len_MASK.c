
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn {int dummy; } ;


 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int FUNC_1(const struct nf_conn *VAR_0, const char *VAR_1,
        const char *VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 VAR_1 += VAR_4;
 if (!VAR_4 || VAR_1 == VAR_2 || *VAR_1 != '@')
  return VAR_4;
 VAR_1++;
 VAR_4++;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_5)
  return 0;
 return VAR_4 + VAR_5;
}
