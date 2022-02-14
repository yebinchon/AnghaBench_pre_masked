
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double u64 ;


 char* FUNC_0 (double) ;
 double VAR_0 ;
 double VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 double FUNC_3 (double) ;

void FUNC_4(int VAR_4, u64 VAR_5, u64 VAR_6, u64 VAR_7)
{
 double VAR_8 = 0;

 if (!VAR_3)
  return;

 FUNC_2(VAR_3, "<g>\n");

 if (VAR_2)
  VAR_8 = VAR_7 * 1.0 / VAR_2 * (VAR_0 + VAR_1);
 VAR_8 = 1 + FUNC_1(VAR_4) + VAR_1 + VAR_0 - VAR_8;
 FUNC_2(VAR_3, "<line x1=\"%.8f\" x2=\"%.8f\" y1=\"%.1f\" y2=\"%.1f\" class=\"pstate\"/>\n",
  FUNC_3(VAR_5), FUNC_3(VAR_6), VAR_8, VAR_8);
 FUNC_2(VAR_3, "<text x=\"%.8f\" y=\"%.8f\" font-size=\"0.25pt\">%s</text>\n",
  FUNC_3(VAR_5), VAR_8+0.9, FUNC_0(VAR_7));

 FUNC_2(VAR_3, "</g>\n");
}
