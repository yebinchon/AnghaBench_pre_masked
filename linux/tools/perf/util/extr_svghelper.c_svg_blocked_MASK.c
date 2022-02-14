
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,scalar_t__,scalar_t__,char*) ;
 int VAR_0 ;
 char* FUNC_2 (scalar_t__) ;

void FUNC_3(int VAR_1, int VAR_2, u64 VAR_3, u64 VAR_4, const char *VAR_5)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0, "<g>\n");
 FUNC_0(VAR_0, "<title>#%d blocked %s</title>\n", VAR_2,
  FUNC_2(VAR_4 - VAR_3));
 if (VAR_5)
  FUNC_0(VAR_0, "<desc>Blocked on:\n%s</desc>\n", VAR_5);
 FUNC_1(VAR_1, VAR_3, VAR_4, "blocked");
 FUNC_0(VAR_0, "</g>\n");
}
