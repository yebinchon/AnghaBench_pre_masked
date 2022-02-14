
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int,int) ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_6)
{
 int VAR_7 = 0;

 if (FUNC_0(VAR_2, VAR_1 | VAR_0,
    VAR_6 == VAR_3 ? 0 :
    VAR_4 * VAR_5,
    VAR_4 * VAR_5)) {
  FUNC_1("fallocate");
  VAR_7 = 1;
 }

 return VAR_7;
}
