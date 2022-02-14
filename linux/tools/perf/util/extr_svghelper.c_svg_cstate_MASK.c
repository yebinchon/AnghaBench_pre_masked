
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 double FUNC_2 (double) ;
 int FUNC_3 (char*,char*,int) ;
 int VAR_3 ;
 double FUNC_4 (int ) ;

void FUNC_5(int VAR_4, u64 VAR_5, u64 VAR_6, int VAR_7)
{
 double VAR_8;
 char VAR_9[128];

 if (!VAR_3)
  return;


 FUNC_1(VAR_3, "<g>\n");

 if (VAR_7 > 6)
  VAR_7 = 6;
 FUNC_3(VAR_9, "c%i", VAR_7);

 FUNC_1(VAR_3, "<rect class=\"%s\" x=\"%.8f\" width=\"%.8f\" y=\"%.1f\" height=\"%.1f\"/>\n",
  VAR_9,
  FUNC_4(VAR_5), FUNC_4(VAR_6)-FUNC_4(VAR_5),
  FUNC_0(VAR_4), VAR_2+VAR_1);

 VAR_8 = (FUNC_4(VAR_6)-FUNC_4(VAR_5))/2.0;
 if (VAR_8 > 6)
  VAR_8 = 6;

 VAR_8 = FUNC_2(VAR_8);

 if (VAR_8 > VAR_0)
  FUNC_1(VAR_3, "<text x=\"%.8f\" y=\"%.8f\" font-size=\"%.8fpt\">C%i</text>\n",
   FUNC_4(VAR_5), FUNC_0(VAR_4)+VAR_8, VAR_8, VAR_7);

 FUNC_1(VAR_3, "</g>\n");
}
