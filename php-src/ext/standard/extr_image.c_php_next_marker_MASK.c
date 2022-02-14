
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int php_stream ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,int ,char*,size_t) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static unsigned int FUNC_2(php_stream * VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6=0, VAR_7;


 if (!VAR_5) {
  size_t VAR_8 = 0;

  while ((VAR_7 = FUNC_1(VAR_3)) != 0xff) {
   if (VAR_7 == VAR_0) {
    return VAR_2;
 }
   VAR_8++;
 }
  if (VAR_8) {
   FUNC_0(((void*)0), VAR_1, "corrupt JPEG data: %zu extraneous bytes before marker", VAR_8);
  }
 }
 VAR_6 = 1;
 do {
  if ((VAR_7 = FUNC_1(VAR_3)) == VAR_0)
  {
   return VAR_2;
  }
  VAR_6++;
 } while (VAR_7 == 0xff);
 if (VAR_6 < 2)
 {
  return VAR_2;
 }
 return (unsigned int)VAR_7;
}
