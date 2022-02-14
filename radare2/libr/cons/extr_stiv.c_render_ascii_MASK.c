
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int (* PrintfCallback ) (char*,char const) ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static void FUNC_1(PrintfCallback VAR_0, const ut8 *VAR_1, const ut8 *VAR_2) {
 const char *VAR_3 = " `.,-:+*%$#";
 int VAR_4, VAR_5 = FUNC_0 (VAR_3);
 float VAR_6 = (VAR_1[0]+VAR_1[1]+VAR_1[2])/3;
 float VAR_7 = (VAR_2[0]+VAR_2[1]+VAR_2[2])/3;
 VAR_4 = ((VAR_6+VAR_7)/2) / (255/VAR_5);
 if (VAR_4 >= VAR_5) VAR_4 = VAR_5-1;
 VAR_0 ("%c", VAR_3[VAR_4]);
}
