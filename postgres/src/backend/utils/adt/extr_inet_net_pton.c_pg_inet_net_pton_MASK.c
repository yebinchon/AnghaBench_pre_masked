
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (char const*,void*,size_t) ;
 int FUNC_1 (char const*,void*,size_t) ;
 int FUNC_2 (char const*,void*) ;
 int FUNC_3 (char const*,void*) ;

int
FUNC_4(int VAR_2, const char *VAR_3, void *VAR_4, size_t VAR_5)
{
 switch (VAR_2)
 {
  case 129:
   return VAR_5 == -1 ?
    FUNC_2(VAR_3, VAR_4) :
    FUNC_0(VAR_3, VAR_4, VAR_5);
  case 128:
   return VAR_5 == -1 ?
    FUNC_3(VAR_3, VAR_4) :
    FUNC_1(VAR_3, VAR_4, VAR_5);
  default:
   VAR_1 = VAR_0;
   return -1;
 }
}
