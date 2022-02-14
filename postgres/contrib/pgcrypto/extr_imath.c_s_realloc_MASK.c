
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t mp_size ;
typedef int mp_digit ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,size_t) ;
 int * FUNC_2 (int *,size_t) ;
 int * FUNC_3 (size_t) ;

__attribute__((used)) static mp_digit *
FUNC_4(mp_digit *VAR_1, mp_size VAR_2, mp_size VAR_3)
{
 mp_digit *VAR_4 = FUNC_2(VAR_1, VAR_3 * sizeof(mp_digit));

 FUNC_0(VAR_4 != ((void*)0));


 return VAR_4;
}
