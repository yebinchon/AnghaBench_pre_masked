
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int smart_str ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (double,int,char,char,char*) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,size_t) ;
 int * FUNC_3 (char*,char) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static inline void FUNC_5(smart_str *VAR_3, double VAR_4, int VAR_5)
{
 size_t VAR_6;
 char VAR_7[VAR_0];

 FUNC_1(VAR_4, (int)FUNC_0(VAR_2), '.', 'e', VAR_7);
 VAR_6 = FUNC_4(VAR_7);
 if (VAR_5 & VAR_1 && FUNC_3(VAR_7, '.') == ((void*)0) && VAR_6 < VAR_0 - 2) {
  VAR_7[VAR_6++] = '.';
  VAR_7[VAR_6++] = '0';
  VAR_7[VAR_6] = '\0';
 }
 FUNC_2(VAR_3, VAR_7, VAR_6);
}
