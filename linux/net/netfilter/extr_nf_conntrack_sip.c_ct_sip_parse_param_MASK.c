
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn {int dummy; } ;


 char* FUNC_0 (char const*,char const*,char const*,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const struct nf_conn *VAR_0, const char *VAR_1,
         unsigned int VAR_2, unsigned int VAR_3,
         const char *VAR_4,
         unsigned int *VAR_5, unsigned int *VAR_6)
{
 const char *VAR_7 = VAR_1 + VAR_3;
 const char *VAR_8;
 const char *VAR_9;

 VAR_7 = FUNC_0(VAR_1 + VAR_2, VAR_7, ",", FUNC_1(","));
 if (!VAR_7)
  VAR_7 = VAR_1 + VAR_3;

 VAR_8 = FUNC_0(VAR_1 + VAR_2, VAR_7, VAR_4, FUNC_1(VAR_4));
 if (!VAR_8)
  return 0;
 VAR_8 += FUNC_1(VAR_4);

 VAR_9 = FUNC_0(VAR_8, VAR_7, ";", FUNC_1(";"));
 if (!VAR_9)
  VAR_9 = VAR_7;

 *VAR_5 = VAR_8 - VAR_1;
 *VAR_6 = VAR_9 - VAR_8;
 return 1;
}
