
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_size ;
typedef int mp_result ;
typedef int * mp_int ;


 int VAR_0 ;
 unsigned char* FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

mp_result
FUNC_5(mp_int VAR_4, unsigned char *VAR_5, int VAR_6)
{
 FUNC_1(VAR_4 != ((void*)0) && VAR_5 != ((void*)0) && VAR_6 > 0);


 mp_size VAR_7 = ((VAR_6 * VAR_0) + (VAR_1 - 1)) / VAR_1;

 if (!FUNC_3(VAR_4, VAR_7))
  return VAR_2;

 FUNC_2(VAR_4);

 unsigned char *VAR_8 = VAR_5;

 for (int VAR_9 = VAR_6; VAR_9 > 0; --VAR_9, ++VAR_8)
 {
  (void) FUNC_4(VAR_4, VAR_0);
  *FUNC_0(VAR_4) |= *VAR_8;
 }

 return VAR_3;
}
