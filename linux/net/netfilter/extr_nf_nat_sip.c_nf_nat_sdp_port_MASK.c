
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct sk_buff {int dummy; } ;


 unsigned int FUNC_0 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*) ;
 int FUNC_1 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,unsigned int,unsigned int,char*,unsigned int) ;
 unsigned int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static unsigned int FUNC_3(struct sk_buff *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2,
        const char **VAR_3, unsigned int *VAR_4,
        unsigned int VAR_5,
        unsigned int VAR_6,
        u_int16_t VAR_7)
{
 char VAR_8[sizeof("nnnnn")];
 unsigned int VAR_9;

 VAR_9 = FUNC_2(VAR_8, "%u", VAR_7);
 if (!FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_8, VAR_9))
  return 0;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
