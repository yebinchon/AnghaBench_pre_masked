
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (unsigned char const*) ;

unsigned char * FUNC_1(unsigned char *VAR_0, const unsigned char *VAR_1)
{
  const unsigned char *VAR_2;
  int VAR_3, VAR_4;
  unsigned char *VAR_5;
  static unsigned char *VAR_6;


  if (VAR_0 == ((void*)0) && (VAR_0 = VAR_6) == ((void*)0))
    return (((void*)0));




 cont:
  VAR_3 = *VAR_0;
  VAR_0 = FUNC_0(VAR_0);

  for (VAR_2 = VAR_1; (VAR_4 = *VAR_2) != 0; VAR_2 = FUNC_0(VAR_2)) {
    if (VAR_3 == VAR_4)
      goto cont;
  }

  if (VAR_3 == 0) {
    VAR_6 = ((void*)0);
    return (((void*)0));
  }
  VAR_5 = VAR_0 - 1;





  for (;;) {
    VAR_3 = *VAR_0;
    VAR_0 = FUNC_0(VAR_0);
    VAR_2 = VAR_1;
    do {
      if ((VAR_4 = *VAR_2) == VAR_3) {
 if (VAR_3 == 0)
   VAR_0 = ((void*)0);
 else
   VAR_0[-1] = 0;
 VAR_6 = VAR_0;
 return (VAR_5);
      }
      VAR_2 = FUNC_0(VAR_2);
    } while (VAR_4 != 0);
  }

}
