
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (void*,int ,int,int,int,int ) ;
 scalar_t__ FUNC_1 (void*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,void*) ;

__attribute__((used)) static int FUNC_4(void)
{
 void *VAR_7;
 char *VAR_8;

 VAR_7 = (void *)0xa0000000;

 VAR_8 = FUNC_0(VAR_7, VAR_6, VAR_4 | VAR_5,
   VAR_2 | VAR_0 | VAR_3, -1, 0);
 if (VAR_8 != VAR_1) {







  if (FUNC_1(VAR_7, VAR_6)) {
   FUNC_2("munmap");
   return 1;
  }
 }

 VAR_8 = FUNC_0(VAR_7, VAR_6, VAR_4 | VAR_5,
   VAR_0 | VAR_3, -1, 0);
 if (VAR_8 == VAR_1) {
  FUNC_3("Mapping failed @ %p\n", VAR_7);
  FUNC_2("mmap");
  return 1;
 }
 *VAR_8 = 0xf;

 FUNC_1(VAR_7, VAR_6);

 return 0;
}
