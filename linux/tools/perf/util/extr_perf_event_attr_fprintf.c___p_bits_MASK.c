
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct bit_names {int bit; int * name; } ;


 int FUNC_0 (char*,size_t,char*,char*,int *) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, size_t VAR_1, u64 VAR_2, struct bit_names *VAR_3)
{
 bool VAR_4 = 1;
 int VAR_5 = 0;

 do {
  if (VAR_2 & VAR_3[VAR_5].bit) {
   VAR_0 += FUNC_0(VAR_0, VAR_1, "%s%s", VAR_4 ? "" : "|", VAR_3[VAR_5].name);
   VAR_4 = 0;
  }
 } while (VAR_3[++VAR_5].name != ((void*)0));
}
