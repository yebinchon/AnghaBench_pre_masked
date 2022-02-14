
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,size_t) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 void* FUNC_4 (size_t) ;
 int VAR_3 ;

__attribute__((used)) static inline void *
FUNC_5(size_t VAR_4, int VAR_5)
{
 void *VAR_6;


 if (VAR_4 == 0)
  VAR_4 = 1;
 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6 == ((void*)0))
 {
  if ((VAR_5 & VAR_1) == 0)
  {
   FUNC_3(VAR_3, "%s", FUNC_1("out of memory\n"));
   FUNC_2(VAR_0);
  }
  return ((void*)0);
 }

 if ((VAR_5 & VAR_2) != 0)
  FUNC_0(VAR_6, 0, VAR_4);
 return VAR_6;
}
