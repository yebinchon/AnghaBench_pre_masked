
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char const) ;
 size_t FUNC_2 (unsigned long,scalar_t__*,size_t) ;
 scalar_t__* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (char const*) ;
 unsigned long FUNC_5 (char const*,char**,int) ;

__attribute__((used)) static uint8_t* FUNC_6(const char* VAR_0, size_t* VAR_1)
{
 uint8_t* VAR_2 = ((void*)0);
 unsigned long VAR_3 = 0, VAR_4;
 const char *VAR_5;
 int VAR_6 = 0;
 size_t VAR_7 = 0;

 if ((VAR_0 == ((void*)0)) || (VAR_0[0] == 0))
  return ((void*)0);


 VAR_2 = FUNC_3(1 + FUNC_4(VAR_0) + 2);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 do {
  VAR_6++;
  VAR_4 = FUNC_5(VAR_0, (char**)&VAR_5, 10);
  if (!FUNC_1(*VAR_0) || !(*VAR_5 == '.' || !*VAR_5))
   goto err;
  if (*VAR_5 == '.')
   VAR_0 = VAR_5 + 1;

  if (VAR_6 == 1) {
   if (VAR_4 > 2)
    break;
   VAR_3 = VAR_4;
  } else if (VAR_6 == 2) {

   if (VAR_3 < 2) {
    if (VAR_4 > 39)
     goto err;
    VAR_2[VAR_7++] = (uint8_t)(VAR_3 * 40 + VAR_4);
   } else {
    VAR_4 += 80;
    VAR_7 = FUNC_2(VAR_4, VAR_2, VAR_7);
   }
  } else {
   VAR_7 = FUNC_2(VAR_4, VAR_2, VAR_7);
  }
 } while (*VAR_5 == '.');


 if (VAR_6 == 1 || VAR_7 < 2 || VAR_7 > 254)
  goto err;

 *VAR_1 = VAR_7;
 return VAR_2;

err:
 FUNC_0(VAR_2);
 return ((void*)0);
}
