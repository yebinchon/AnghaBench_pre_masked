
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,unsigned long) ;
 int FUNC_1 (int,int ) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static char *FUNC_3(unsigned long VAR_6)
{
 char *VAR_7;
 gfp_t VAR_8 = VAR_0 | VAR_2 |
     VAR_5 | VAR_4 | VAR_3;

 VAR_7 = (char *) FUNC_0(VAR_8, VAR_6);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_2(FUNC_1((1 << VAR_6), VAR_1));
 if (VAR_7)
  return VAR_7;


 VAR_8 &= ~VAR_3;
 VAR_7 = (char *) FUNC_0(VAR_8, VAR_6);
 if (VAR_7)
  return VAR_7;


 return ((void*)0);
}
