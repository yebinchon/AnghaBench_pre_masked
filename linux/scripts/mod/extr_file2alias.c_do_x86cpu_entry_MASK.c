
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,scalar_t__) ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*,char*,scalar_t__) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_6(const char *VAR_9, void *VAR_10,
      char *VAR_11)
{
 FUNC_1(VAR_10, VAR_8, VAR_5);
 FUNC_1(VAR_10, VAR_8, VAR_4);
 FUNC_1(VAR_10, VAR_8, VAR_6);
 FUNC_1(VAR_10, VAR_8, VAR_7);

 FUNC_4(VAR_11, "cpu:type:x86,");
 FUNC_0(VAR_11, "ven", VAR_7 != VAR_3, VAR_7);
 FUNC_0(VAR_11, "fam", VAR_4 != VAR_0, VAR_4);
 FUNC_0(VAR_11, "mod", VAR_6 != VAR_2, VAR_6);
 FUNC_3(VAR_11, ":feature:*");
 if (VAR_5 != VAR_1)
  FUNC_2(VAR_11 + FUNC_5(VAR_11), "%04X*", VAR_5);
 return 1;
}
