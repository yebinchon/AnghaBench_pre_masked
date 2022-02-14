
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,char*,int) ;

void
FUNC_6(void)
{
 char VAR_3[32];
 const int VAR_4 = 0x7F;
 bool VAR_5 = 1;
 VAR_3[7] = VAR_4;
 (void) FUNC_5(VAR_3, "ab", 7);
 if (VAR_3[7] != VAR_4)
  VAR_5 = 0;
 VAR_3[1] = VAR_4;
 (void) FUNC_5(VAR_3, "a", 1);
 if (VAR_3[1] != VAR_4)
  VAR_5 = 0;

 if (!VAR_5)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("strxfrm(), in locale \"%s\", writes past the specified array length",
         FUNC_4(VAR_2, ((void*)0))),
     FUNC_2("Apply system library package updates.")));
}
