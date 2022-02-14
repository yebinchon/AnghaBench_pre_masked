
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 double VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 double FUNC_1 (double) ;
 int VAR_2 ;
 double FUNC_2 (int ) ;

void FUNC_3(int VAR_3, u64 VAR_4, u64 VAR_5, double VAR_6, const char *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 double VAR_11 = FUNC_2(VAR_5) - FUNC_2(VAR_4);
 VAR_6 = FUNC_1(VAR_6);

 if (!VAR_2)
  return;

 FUNC_0(VAR_2, "<g>\n");
 FUNC_0(VAR_2, "<title>fd=%d error=%d merges=%d</title>\n", VAR_8, VAR_9, VAR_10);
 FUNC_0(VAR_2, "<rect x=\"%.8f\" width=\"%.8f\" y=\"%.1d\" height=\"%.1f\" class=\"%s\"/>\n",
  FUNC_2(VAR_4),
  VAR_11,
  VAR_3 * VAR_1,
  VAR_0 * VAR_6,
  VAR_7);
 FUNC_0(VAR_2, "</g>\n");
}
