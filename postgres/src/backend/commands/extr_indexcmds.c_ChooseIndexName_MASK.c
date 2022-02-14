
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;


 int * FUNC_0 (int *) ;
 char* FUNC_1 (char const*,int *,char*,int ,int) ;
 int * VAR_0 ;

__attribute__((used)) static char *
FUNC_2(const char *VAR_1, Oid VAR_2,
    List *VAR_3, List *VAR_4,
    bool VAR_5, bool VAR_6)
{
 char *VAR_7;

 if (VAR_5)
 {

  VAR_7 = FUNC_1(VAR_1,
            ((void*)0),
            "pkey",
            VAR_2,
            1);
 }
 else if (VAR_4 != VAR_0)
 {
  VAR_7 = FUNC_1(VAR_1,
            FUNC_0(VAR_3),
            "excl",
            VAR_2,
            1);
 }
 else if (VAR_6)
 {
  VAR_7 = FUNC_1(VAR_1,
            FUNC_0(VAR_3),
            "key",
            VAR_2,
            1);
 }
 else
 {
  VAR_7 = FUNC_1(VAR_1,
            FUNC_0(VAR_3),
            "idx",
            VAR_2,
            0);
 }

 return VAR_7;
}
