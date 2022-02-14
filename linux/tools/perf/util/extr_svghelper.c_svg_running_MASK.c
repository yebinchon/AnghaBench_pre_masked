
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 double VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 double FUNC_1 (double) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 double FUNC_2 (scalar_t__) ;
 char* FUNC_3 (scalar_t__) ;

void FUNC_4(int VAR_5, int VAR_6, u64 VAR_7, u64 VAR_8, const char *VAR_9)
{
 double VAR_10;
 const char *VAR_11;

 if (!VAR_4)
  return;

 if (VAR_3 && VAR_8 - VAR_7 > VAR_3)
  VAR_11 = "sample_hi";
 else
  VAR_11 = "sample";
 FUNC_0(VAR_4, "<g>\n");

 FUNC_0(VAR_4, "<title>#%d running %s</title>\n",
  VAR_6, FUNC_3(VAR_8 - VAR_7));
 if (VAR_9)
  FUNC_0(VAR_4, "<desc>Switched because:\n%s</desc>\n", VAR_9);
 FUNC_0(VAR_4, "<rect x=\"%.8f\" width=\"%.8f\" y=\"%.1d\" height=\"%.1f\" class=\"%s\"/>\n",
  FUNC_2(VAR_7), FUNC_2(VAR_8)-FUNC_2(VAR_7), VAR_5 * VAR_2, VAR_1,
  VAR_11);

 VAR_10 = (FUNC_2(VAR_8)-FUNC_2(VAR_7));
 if (VAR_6 > 9)
  VAR_10 = VAR_10/2;
 if (VAR_10 > 1.25)
  VAR_10 = 1.25;
 VAR_10 = FUNC_1(VAR_10);

 if (VAR_10 > VAR_0)
  FUNC_0(VAR_4, "<text x=\"%.8f\" y=\"%.8f\" font-size=\"%.8fpt\">%i</text>\n",
   FUNC_2(VAR_7), VAR_5 * VAR_2 + VAR_1 - 1, VAR_10, VAR_6 + 1);

 FUNC_0(VAR_4, "</g>\n");
}
