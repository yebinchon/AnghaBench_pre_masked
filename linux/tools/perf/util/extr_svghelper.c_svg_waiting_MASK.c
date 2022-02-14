
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 double VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 double FUNC_1 (double) ;
 int VAR_4 ;
 double FUNC_2 (int) ;
 char* FUNC_3 (int) ;

void FUNC_4(int VAR_5, int VAR_6, u64 VAR_7, u64 VAR_8, const char *VAR_9)
{
 char *VAR_10;
 const char *VAR_11;
 double VAR_12;

 if (!VAR_4)
  return;

 VAR_11 = "waiting";

 if (VAR_8-VAR_7 > 10 * VAR_1)
  VAR_11 = "WAITING";

 VAR_10 = FUNC_3(VAR_8-VAR_7);

 VAR_12 = 1.0 * (FUNC_2(VAR_8)-FUNC_2(VAR_7));

 if (VAR_12 > 3)
  VAR_12 = 3;

 VAR_12 = FUNC_1(VAR_12);

 FUNC_0(VAR_4, "<g transform=\"translate(%.8f,%.8d)\">\n", FUNC_2(VAR_7), VAR_5 * VAR_3);
 FUNC_0(VAR_4, "<title>#%d waiting %s</title>\n", VAR_6, FUNC_3(VAR_8 - VAR_7));
 if (VAR_9)
  FUNC_0(VAR_4, "<desc>Waiting on:\n%s</desc>\n", VAR_9);
 FUNC_0(VAR_4, "<rect x=\"0\" width=\"%.8f\" y=\"0\" height=\"%.1f\" class=\"%s\"/>\n",
  FUNC_2(VAR_8)-FUNC_2(VAR_7), VAR_2, VAR_11);
 if (VAR_12 > VAR_0)
  FUNC_0(VAR_4, "<text transform=\"rotate(90)\" font-size=\"%.8fpt\"> %s</text>\n",
   VAR_12, VAR_10);
 FUNC_0(VAR_4, "</g>\n");
}
