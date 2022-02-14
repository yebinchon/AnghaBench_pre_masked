
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int COLORREF ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static COLORREF FUNC_2(int VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;


 VAR_3 = VAR_0 > 80 ? VAR_0-80 : VAR_0+160;
 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);

 VAR_3 = VAR_0 > 160 ? VAR_0-160 : VAR_0+80;
 VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_2);

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2);

 return FUNC_0(VAR_4, VAR_5, VAR_6);
}
