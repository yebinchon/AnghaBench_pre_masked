
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int * FUNC_1 (char const*,char) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(const char *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3),
    VAR_5 = 0;


 if (VAR_4 > VAR_1)
  VAR_5 += ((VAR_4 - 1) / VAR_1) * FUNC_2(VAR_2);


 if (FUNC_1(VAR_3, '.') != ((void*)0))
  VAR_5 += FUNC_2(VAR_0) - 1;

 return VAR_5;
}
