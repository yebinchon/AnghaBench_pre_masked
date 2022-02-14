
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char*) ;
 char* VAR_2 ;
 int FUNC_1 (char*,int,char*,char*,int,char*) ;

__attribute__((used)) static void
FUNC_2(bool VAR_3, bool VAR_4, Oid VAR_5,
     char *VAR_6, int VAR_7)
{
 int VAR_8;


 VAR_8 = FUNC_1(VAR_6, VAR_7, "%s/db_%u.%s",
        VAR_3 ? VAR_1 :
        VAR_2,
        VAR_5,
        VAR_4 ? "tmp" : "stat");
 if (VAR_8 >= VAR_7)
  FUNC_0(VAR_0, "overlength pgstat path");
}
