
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 double FUNC_1 (double) ;
 int VAR_3 ;
 double FUNC_2 (int ) ;

void FUNC_3(int VAR_4, u64 VAR_5, u64 VAR_6, double VAR_7, const char *VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 double VAR_12 = FUNC_2(VAR_6) - FUNC_2(VAR_5);
 VAR_7 = FUNC_1(VAR_7);

 if (!VAR_3)
  return;

 FUNC_0(VAR_3, "<g>\n");
 FUNC_0(VAR_3, "<title>fd=%d error=%d merges=%d</title>\n", VAR_9, VAR_10, VAR_11);
 FUNC_0(VAR_3, "<rect x=\"%.8f\" width=\"%.8f\" y=\"%.1f\" height=\"%.1f\" class=\"%s\"/>\n",
  FUNC_2(VAR_5),
  VAR_12,
  VAR_4 * VAR_2 + VAR_1 - VAR_0 * VAR_7,
  VAR_0 * VAR_7,
  VAR_8);
 FUNC_0(VAR_3, "</g>\n");
}
