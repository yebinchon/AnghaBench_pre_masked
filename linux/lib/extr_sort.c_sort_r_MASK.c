
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void FUNC_0 (void*,void*,int) ;
 void FUNC_1 (void*,void*,int) ;
 void FUNC_2 (void*,void*,int) ;
 scalar_t__ FUNC_3 (void*,void*,int (*) (void const*,void const*,void const*),void const*) ;
 int FUNC_4 (void*,void*,size_t,void (*) (void*,void*,int)) ;
 scalar_t__ FUNC_5 (void*,size_t,int) ;
 size_t FUNC_6 (size_t,unsigned int const,size_t) ;

void FUNC_7(void *VAR_0, size_t VAR_1, size_t VAR_2,
     int (*VAR_3)(const void *, const void *, const void *),
     void (*VAR_4)(void *, void *, int VAR_5),
     const void *VAR_6)
{

 size_t VAR_7 = VAR_1 * VAR_2, VAR_8 = (VAR_1/2) * VAR_2;
 const unsigned int VAR_9 = VAR_2 & -VAR_2;

 if (!VAR_8)
  return;

 if (!VAR_4) {
  if (FUNC_5(VAR_0, VAR_2, 8))
   VAR_4 = FUNC_2;
  else if (FUNC_5(VAR_0, VAR_2, 4))
   VAR_4 = FUNC_1;
  else
   VAR_4 = FUNC_0;
 }
 for (;;) {
  size_t VAR_10, VAR_11, VAR_12;

  if (VAR_8)
   VAR_8 -= VAR_2;
  else if (VAR_7 -= VAR_2)
   FUNC_4(VAR_0, VAR_0 + VAR_7, VAR_2, VAR_4);
  else
   break;
  for (VAR_10 = VAR_8; VAR_11 = 2*VAR_10 + VAR_2, (VAR_12 = VAR_11 + VAR_2) < VAR_7;)
   VAR_10 = FUNC_3(VAR_0 + VAR_11, VAR_0 + VAR_12, VAR_3, VAR_6) >= 0 ? VAR_11 : VAR_12;
  if (VAR_12 == VAR_7)
   VAR_10 = VAR_11;


  while (VAR_10 != VAR_8 && FUNC_3(VAR_0 + VAR_8, VAR_0 + VAR_10, VAR_3, VAR_6) >= 0)
   VAR_10 = FUNC_6(VAR_10, VAR_9, VAR_2);
  VAR_11 = VAR_10;
  while (VAR_10 != VAR_8) {
   VAR_10 = FUNC_6(VAR_10, VAR_9, VAR_2);
   FUNC_4(VAR_0 + VAR_10, VAR_0 + VAR_11, VAR_2, VAR_4);
  }
 }
}
