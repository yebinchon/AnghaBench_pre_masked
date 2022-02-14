
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int floating_decimal_32 ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (char*,int const,int,int) ;
 int FUNC_1 (int const,int const) ;
 int FUNC_2 (int const,int const,int *) ;
 int FUNC_3 (float) ;
 int FUNC_4 (int ,int const,char*) ;

int
FUNC_5(float VAR_2, char *VAR_3)
{




 const uint32 VAR_4 = FUNC_3(VAR_2);


 const bool VAR_5 = ((VAR_4 >> (VAR_1 + VAR_0)) & 1) != 0;
 const uint32 VAR_6 = VAR_4 & ((1u << VAR_1) - 1);
 const uint32 VAR_7 = (VAR_4 >> VAR_1) & ((1u << VAR_0) - 1);


 if (VAR_7 == ((1u << VAR_0) - 1u) || (VAR_7 == 0 && VAR_6 == 0))
 {
  return FUNC_0(VAR_3, VAR_5, (VAR_7 != 0), (VAR_6 != 0));
 }

 floating_decimal_32 VAR_8;
 const bool VAR_9 = FUNC_2(VAR_6, VAR_7, &VAR_8);

 if (!VAR_9)
 {
  VAR_8 = FUNC_1(VAR_6, VAR_7);
 }

 return FUNC_4(VAR_8, VAR_5, VAR_3);
}
