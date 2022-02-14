
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef size_t uint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static size_t FUNC_1(char *VAR_2, const char *VAR_3, size_t VAR_4)
{
 if (!VAR_3 || !VAR_2 || !VAR_4)
  return 0;

 ulong *VAR_5, *VAR_6;
 size_t VAR_7 = FUNC_0(VAR_3) + 1, VAR_8;
 const uint VAR_9 = (VAR_0 == 8) ? 3 : 2;

 if (VAR_4 > VAR_7)
  VAR_4 = VAR_7;
 else if (VAR_7 > VAR_4)

  VAR_7 = VAR_4;





 if ((VAR_4 >= VAR_0) && (((ulong)VAR_3 & VAR_1) == 0 &&
     ((ulong)VAR_2 & VAR_1) == 0)) {
  VAR_5 = (ulong *)VAR_3;
  VAR_6 = (ulong *)VAR_2;
  VAR_8 = VAR_4 >> VAR_9;
  VAR_4 &= VAR_0 - 1;

  while (VAR_8) {
   *VAR_6 = *VAR_5;
   ++VAR_6, ++VAR_5;
   --VAR_8;
  }

  if (!VAR_4) {
   VAR_2 = (char *)VAR_6;
   *--VAR_2 = '\0';
   return VAR_7;
  }

  VAR_3 = (char *)VAR_5;
  VAR_2 = (char *)VAR_6;
 }

 while (--VAR_4 && (*VAR_2 = *VAR_3))
  ++VAR_2, ++VAR_3;

 if (!VAR_4)
  *VAR_2 = '\0';

 return VAR_7;
}
