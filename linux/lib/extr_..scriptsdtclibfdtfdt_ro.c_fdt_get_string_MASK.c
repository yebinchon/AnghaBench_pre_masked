
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (void const*) ;
 scalar_t__ FUNC_1 (void const*) ;
 int FUNC_2 (void const*) ;
 int FUNC_3 (void const*) ;
 scalar_t__ FUNC_4 (void const*) ;
 int FUNC_5 (void const*) ;
 char* FUNC_6 (char const*,char,size_t) ;

const char *FUNC_7(const void *VAR_5, int VAR_6, int *VAR_7)
{
 uint32_t VAR_8 = VAR_6 + FUNC_1(VAR_5);
 size_t VAR_9;
 int VAR_10;
 const char *VAR_11, *VAR_12;

 VAR_10 = FUNC_2(VAR_5);
 if (VAR_10 != 0)
  goto fail;

 VAR_10 = -VAR_0;
 if (VAR_8 >= FUNC_4(VAR_5))
  goto fail;
 VAR_9 = FUNC_4(VAR_5) - VAR_8;

 if (FUNC_0(VAR_5) == VAR_3) {
  if (VAR_6 < 0)
   goto fail;
  if (FUNC_5(VAR_5) >= 17) {
   if (VAR_6 >= FUNC_3(VAR_5))
    goto fail;
   if ((FUNC_3(VAR_5) - VAR_6) < VAR_9)
    VAR_9 = FUNC_3(VAR_5) - VAR_6;
  }
 } else if (FUNC_0(VAR_5) == VAR_4) {
  if ((VAR_6 >= 0)
      || (VAR_6 < -FUNC_3(VAR_5)))
   goto fail;
  if ((-VAR_6) < VAR_9)
   VAR_9 = -VAR_6;
 } else {
  VAR_10 = -VAR_1;
  goto fail;
 }

 VAR_11 = (const char *)VAR_5 + VAR_8;
 VAR_12 = FUNC_6(VAR_11, '\0', VAR_9);
 if (!VAR_12) {

  VAR_10 = -VAR_2;
  goto fail;
 }

 if (VAR_7)
  *VAR_7 = VAR_12 - VAR_11;
 return VAR_11;

fail:
 if (VAR_7)
  *VAR_7 = VAR_10;
 return ((void*)0);
}
