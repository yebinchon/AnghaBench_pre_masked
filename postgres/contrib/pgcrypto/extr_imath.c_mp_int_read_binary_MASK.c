
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int mp_size ;
typedef int mp_result ;
typedef TYPE_1__* mp_int ;
typedef unsigned char mp_digit ;
struct TYPE_8__ {scalar_t__ sign; } ;


 int VAR_0 ;
 unsigned char* FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;

mp_result
FUNC_7(mp_int VAR_5, unsigned char *VAR_6, int VAR_7)
{
 FUNC_2(VAR_5 != ((void*)0) && VAR_6 != ((void*)0) && VAR_7 > 0);


 mp_size VAR_8 = ((VAR_7 * VAR_0) + (VAR_1 - 1)) / VAR_1;

 if (!FUNC_5(VAR_5, VAR_8))
  return VAR_2;

 FUNC_3(VAR_5);





 if (VAR_6[0] >> (VAR_0 - 1))
 {
  VAR_5->sign = VAR_3;
  FUNC_4(VAR_6, VAR_7);
 }

 mp_digit *VAR_9 = FUNC_0(VAR_5);
 unsigned char *VAR_10 = VAR_6;

 for (int VAR_11 = VAR_7; VAR_11 > 0; --VAR_11, ++VAR_10)
 {
  FUNC_6(VAR_5, (mp_size) VAR_0);
  *VAR_9 |= *VAR_10;
 }


 if (FUNC_1(VAR_5) == VAR_3)
  FUNC_4(VAR_6, VAR_7);

 return VAR_4;
}
