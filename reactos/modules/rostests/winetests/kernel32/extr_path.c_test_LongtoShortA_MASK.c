
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CHAR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int const*) ;
 int FUNC_1 (int,char*,int *,...) ;
 int FUNC_2 (int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_3(CHAR *VAR_1,const CHAR *VAR_2,
                              const CHAR *VAR_3,const CHAR *VAR_4) {
  CHAR VAR_5[VAR_0],VAR_6[VAR_0],VAR_7[VAR_0];

  FUNC_2(VAR_1,VAR_5,VAR_6,VAR_7);
  FUNC_1(FUNC_0(VAR_5,VAR_2)==0,
     "GetShortPathNameA returned '%s' instead of '%s'\n",VAR_5,VAR_2);
  FUNC_1(FUNC_0(VAR_7,VAR_3)==0,
     "GetShortPathNameA returned '%s' with incorrect extension\n",VAR_7);
}
