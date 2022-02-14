
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int,double,double,char const*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(int VAR_2, const char *VAR_3, const char *VAR_4)
{
 double VAR_5;
 VAR_5 = VAR_0 / 2;

 FUNC_0(VAR_1, "<rect x=\"%i\" width=\"%.8f\" y=\"0\" height=\"%.1f\" class=\"%s\"/>\n",
  VAR_2, VAR_5, VAR_5, VAR_4);
 FUNC_0(VAR_1, "<text transform=\"translate(%.8d, %.8f)\" font-size=\"%.8fpt\">%s</text>\n",
  VAR_2 + VAR_5 + 5, VAR_5, 0.8 * VAR_5, VAR_3);
}
