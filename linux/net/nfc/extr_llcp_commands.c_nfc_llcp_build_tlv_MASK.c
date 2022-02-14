
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t* FUNC_0 (int,int ) ;
 size_t* VAR_2 ;
 int FUNC_1 (size_t*,size_t*,size_t) ;
 int FUNC_2 (char*,size_t) ;

u8 *FUNC_3(u8 VAR_3, u8 *VAR_4, u8 VAR_5, u8 *VAR_6)
{
 u8 *VAR_7, VAR_8;

 FUNC_2("type %d\n", VAR_3);

 if (VAR_3 >= VAR_1)
  return ((void*)0);

 VAR_8 = VAR_2[VAR_3];
 if (VAR_8 == 0 && VAR_5 == 0)
  return ((void*)0);
 else if (VAR_8 == 0)
  VAR_8 = VAR_5;

 *VAR_6 = 2 + VAR_8;
 VAR_7 = FUNC_0(2 + VAR_8, VAR_0);
 if (VAR_7 == ((void*)0))
  return VAR_7;

 VAR_7[0] = VAR_3;
 VAR_7[1] = VAR_8;
 FUNC_1(VAR_7 + 2, VAR_4, VAR_8);

 return VAR_7;
}
