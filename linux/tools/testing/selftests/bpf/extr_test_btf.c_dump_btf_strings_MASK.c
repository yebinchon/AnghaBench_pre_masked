
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 int FUNC_0 (int ,char*,int,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_1, __u32 VAR_2)
{
 const char *VAR_3 = VAR_1;
 int VAR_4 = 0;

 while (VAR_3 < VAR_1 + VAR_2) {
  FUNC_0(VAR_0, "string #%d: '%s'\n", VAR_4, VAR_3);
  VAR_3 += FUNC_1(VAR_3) + 1;
  VAR_4++;
 }
}
