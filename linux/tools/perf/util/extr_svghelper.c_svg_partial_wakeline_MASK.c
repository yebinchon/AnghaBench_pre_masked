
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 double VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 double FUNC_1 (int ) ;

void FUNC_2(u64 VAR_3, int VAR_4, char *VAR_5, int VAR_6, char *VAR_7, const char *VAR_8)
{
 double VAR_9;

 if (!VAR_2)
  return;


 FUNC_0(VAR_2, "<g>\n");

 FUNC_0(VAR_2, "<title>%s wakes up %s</title>\n",
  VAR_5 ? VAR_5 : "?",
  VAR_7 ? VAR_7 : "?");

 if (VAR_8)
  FUNC_0(VAR_2, "<desc>%s</desc>\n", VAR_8);

 if (VAR_4 < VAR_6) {
  if (VAR_4) {
   FUNC_0(VAR_2, "<line x1=\"%.8f\" y1=\"%.2f\" x2=\"%.8f\" y2=\"%.2f\" style=\"stroke:rgb(32,255,32);stroke-width:0.009\"/>\n",
    FUNC_1(VAR_3), VAR_4 * VAR_1 + VAR_0, FUNC_1(VAR_3), VAR_4 * VAR_1 + VAR_0 + VAR_1/32);
   if (VAR_7)
    FUNC_0(VAR_2, "<g transform=\"translate(%.8f,%.8f)\"><text transform=\"rotate(90)\" font-size=\"0.02pt\">%s &gt;</text></g>\n",
     FUNC_1(VAR_3), VAR_4 * VAR_1 + VAR_0 + VAR_0/48, VAR_7);
  }
  if (VAR_6) {
   FUNC_0(VAR_2, "<line x1=\"%.8f\" y1=\"%.2d\" x2=\"%.8f\" y2=\"%.2d\" style=\"stroke:rgb(32,255,32);stroke-width:0.009\"/>\n",
    FUNC_1(VAR_3), VAR_6 * VAR_1 - VAR_1/32, FUNC_1(VAR_3), VAR_6 * VAR_1);
   if (VAR_5)
    FUNC_0(VAR_2, "<g transform=\"translate(%.8f,%.8d)\"><text transform=\"rotate(90)\" font-size=\"0.02pt\">%s &gt;</text></g>\n",
     FUNC_1(VAR_3), VAR_6 * VAR_1 - VAR_1/32, VAR_5);
  }
 } else {
  if (VAR_6) {
   FUNC_0(VAR_2, "<line x1=\"%.8f\" y1=\"%.2f\" x2=\"%.8f\" y2=\"%.2f\" style=\"stroke:rgb(32,255,32);stroke-width:0.009\"/>\n",
    FUNC_1(VAR_3), VAR_6 * VAR_1 + VAR_0, FUNC_1(VAR_3), VAR_6 * VAR_1 + VAR_0 + VAR_1/32);
   if (VAR_5)
    FUNC_0(VAR_2, "<g transform=\"translate(%.8f,%.8f)\"><text transform=\"rotate(90)\" font-size=\"0.02pt\">%s &lt;</text></g>\n",
     FUNC_1(VAR_3), VAR_6 * VAR_1 + VAR_0 + VAR_1/48, VAR_5);
  }
  if (VAR_4) {
   FUNC_0(VAR_2, "<line x1=\"%.8f\" y1=\"%.2d\" x2=\"%.8f\" y2=\"%.2d\" style=\"stroke:rgb(32,255,32);stroke-width:0.009\"/>\n",
    FUNC_1(VAR_3), VAR_4 * VAR_1 - VAR_1/32, FUNC_1(VAR_3), VAR_4 * VAR_1);
   if (VAR_7)
    FUNC_0(VAR_2, "<g transform=\"translate(%.8f,%.8f)\"><text transform=\"rotate(90)\" font-size=\"0.02pt\">%s &lt;</text></g>\n",
     FUNC_1(VAR_3), VAR_4 * VAR_1 - VAR_0/32, VAR_7);
  }
 }
 VAR_9 = VAR_4 * VAR_1;
 if (VAR_6 > VAR_4)
  VAR_9 += VAR_0;
 if (VAR_4)
  FUNC_0(VAR_2, "<circle  cx=\"%.8f\" cy=\"%.2f\" r = \"0.01\"  style=\"fill:rgb(32,255,32)\"/>\n",
   FUNC_1(VAR_3), VAR_9);

 FUNC_0(VAR_2, "</g>\n");
}
