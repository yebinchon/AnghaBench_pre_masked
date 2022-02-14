
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*,size_t,int*,int ,int *) ;
 int VAR_0 ;
 char* FUNC_2 (scalar_t__) ;
 char VAR_1 ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_2, size_t VAR_3, int *VAR_4)
{
 char *VAR_5, *VAR_6;

 VAR_6 = VAR_5 = FUNC_1(VAR_2 + 1, VAR_3 - 1, VAR_4, FUNC_0(VAR_0), ((void*)0));
 if (VAR_5) {
  VAR_5 = FUNC_2(FUNC_4(VAR_6) + 2);
  VAR_5[0] = '#';
  FUNC_3(&VAR_5[1], VAR_6);
  VAR_1 = '=';
 }
 return VAR_5;
}
