
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int * MMBitmapRef ;
typedef int MMBMPStringError ;


 int VAR_0 ;
 size_t VAR_1 ;
 int * FUNC_0 (int const*,size_t,int *) ;
 int * FUNC_1 (int *,size_t,size_t,size_t,int ,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const*,size_t,size_t*,size_t*,size_t*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_4 (int *,size_t*) ;

MMBitmapRef FUNC_5(const uint8_t *VAR_6, size_t VAR_7,
                                     MMBMPStringError *VAR_8)
{
 uint8_t *VAR_9, *VAR_10;
 size_t VAR_11, VAR_12;
 size_t VAR_13, VAR_14;

 if (*VAR_6++ != 'b' || !FUNC_3(VAR_6, --VAR_7,
                                            &VAR_11, &VAR_12, &VAR_13)) {
  if (VAR_8 != ((void*)0)) *VAR_8 = VAR_4;
  return ((void*)0);
 }
 VAR_6 += VAR_13;
 VAR_7 -= VAR_13;

 VAR_9 = FUNC_0(VAR_6, VAR_7, ((void*)0));
 if (VAR_9 == ((void*)0)) {
  if (VAR_8 != ((void*)0)) *VAR_8 = VAR_2;
  return ((void*)0);
 }

 VAR_10 = FUNC_4(VAR_9, &VAR_13);
 FUNC_2(VAR_9);

 if (VAR_10 == ((void*)0)) {
  if (VAR_8 != ((void*)0)) *VAR_8 = VAR_3;
  return ((void*)0);
 }

 VAR_14 = VAR_11 * VAR_1;

 if (VAR_12 * VAR_14 != VAR_13) {
  if (VAR_8 != ((void*)0)) *VAR_8 = VAR_5;
  return ((void*)0);
 }

 return FUNC_1(VAR_10, VAR_11, VAR_12,
                       VAR_14, VAR_0, VAR_1);
}
