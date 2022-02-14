
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 double FUNC_1 (int ) ;

void FUNC_2(u64 VAR_3, int VAR_4, const char *VAR_5)
{
 if (!VAR_2)
  return;

 FUNC_0(VAR_2, "<g>\n");

 FUNC_0(VAR_2, "<title>Wakeup from interrupt</title>\n");

 if (VAR_5)
  FUNC_0(VAR_2, "<desc>%s</desc>\n", VAR_5);

 FUNC_0(VAR_2, "<circle  cx=\"%.8f\" cy=\"%.2d\" r = \"0.01\"  style=\"fill:rgb(255,128,128)\"/>\n",
   FUNC_1(VAR_3), VAR_4 * VAR_1);
 FUNC_0(VAR_2, "<circle  cx=\"%.8f\" cy=\"%.2d\" r = \"0.01\"  style=\"fill:rgb(255,128,128)\"/>\n",
   FUNC_1(VAR_3), VAR_4 * VAR_1 + VAR_0);

 FUNC_0(VAR_2, "</g>\n");
}
