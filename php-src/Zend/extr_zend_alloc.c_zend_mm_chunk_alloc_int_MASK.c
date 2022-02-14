
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (void*,size_t) ;
 int FUNC_1 (void*,size_t,int ) ;
 void* FUNC_2 (size_t) ;
 void* FUNC_3 (void*,size_t) ;
 int FUNC_4 (char*,size_t) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void *FUNC_5(size_t VAR_3, size_t VAR_4)
{
 void *VAR_5 = FUNC_2(VAR_3);

 if (VAR_5 == ((void*)0)) {
  return ((void*)0);
 } else if (FUNC_0(VAR_5, VAR_4) == 0) {





  return VAR_5;
 } else {
  size_t VAR_6;


  FUNC_4(VAR_5, VAR_3);
  VAR_5 = FUNC_2(VAR_3 + VAR_4 - VAR_1);
  VAR_6 = FUNC_0(VAR_5, VAR_4);
  if (VAR_6 != 0) {
   VAR_6 = VAR_4 - VAR_6;
   FUNC_4(VAR_5, VAR_6);
   VAR_5 = (char*)VAR_5 + VAR_6;
   VAR_4 -= VAR_6;
  }
  if (VAR_4 > VAR_1) {
   FUNC_4((char*)VAR_5 + VAR_3, VAR_4 - VAR_1);
  }






  return VAR_5;
 }
}
