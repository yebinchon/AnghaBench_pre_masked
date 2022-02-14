
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;


 int VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (int) ;
 char* FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_3 (char*,char*,int) ;
 int VAR_5 ;
 double FUNC_4 (int ) ;
 void* VAR_6 ;

void FUNC_5(int VAR_7, u64 VAR_8, u64 VAR_9)
{
 char VAR_10[80];
 if (!VAR_5)
  return;

 VAR_4 = VAR_8;
 VAR_6 = VAR_9;

 FUNC_2(VAR_5, "<g>\n");

 FUNC_2(VAR_5, "<rect x=\"%.8f\" width=\"%.8f\" y=\"%.1f\" height=\"%.1f\" class=\"cpu\"/>\n",
  FUNC_4(VAR_2),
  FUNC_4(VAR_3)-FUNC_4(VAR_2),
  FUNC_0(VAR_7), VAR_1+VAR_0);

 FUNC_3(VAR_10, "CPU %i", (int)VAR_7);
 FUNC_2(VAR_5, "<text x=\"%.8f\" y=\"%.8f\">%s</text>\n",
  10+FUNC_4(VAR_2), FUNC_0(VAR_7) + VAR_0/2, VAR_10);

 FUNC_2(VAR_5, "<text transform=\"translate(%.8f,%.8f)\" font-size=\"1.25pt\">%s</text>\n",
  10+FUNC_4(VAR_2), FUNC_0(VAR_7) + VAR_1 + VAR_0 - 4, FUNC_1());

 FUNC_2(VAR_5, "</g>\n");
}
