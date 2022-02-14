
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 double VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 double FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 double FUNC_2 (double) ;
 scalar_t__ FUNC_3 (char const*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 double FUNC_4 (scalar_t__) ;
 char* FUNC_5 (scalar_t__) ;

void FUNC_6(int VAR_6, u64 VAR_7, u64 VAR_8, int VAR_9, const char *VAR_10, const char *VAR_11)
{
 double VAR_12;
 const char *VAR_13;

 if (!VAR_5)
  return;

 if (VAR_3 && VAR_8 - VAR_7 >= VAR_3)
  VAR_13 = "sample_hi";
 else if (VAR_4 && FUNC_3(VAR_10, VAR_4))
  VAR_13 = "sample_hi";
 else
  VAR_13 = "sample";

 FUNC_1(VAR_5, "<g transform=\"translate(%.8f,%.8f)\">\n", FUNC_4(VAR_7), FUNC_0(VAR_6));
 FUNC_1(VAR_5, "<title>%d %s running %s</title>\n", VAR_9, VAR_10, FUNC_5(VAR_8 - VAR_7));
 if (VAR_11)
  FUNC_1(VAR_5, "<desc>Switched because:\n%s</desc>\n", VAR_11);
 FUNC_1(VAR_5, "<rect x=\"0\" width=\"%.8f\" y=\"0\" height=\"%.1f\" class=\"%s\"/>\n",
  FUNC_4(VAR_8)-FUNC_4(VAR_7), VAR_2+VAR_1, VAR_13);
 VAR_12 = FUNC_4(VAR_8)-FUNC_4(VAR_7);
 if (VAR_12 > 6)
  VAR_12 = 6;

 VAR_12 = FUNC_2(VAR_12);

 if (VAR_12 > VAR_0)
  FUNC_1(VAR_5, "<text transform=\"rotate(90)\" font-size=\"%.8fpt\">%s</text>\n",
   VAR_12, VAR_10);

 FUNC_1(VAR_5, "</g>\n");
}
