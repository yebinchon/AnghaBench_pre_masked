
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float,int ,char,char,char*) ;
 int FUNC_1 (char*,char*,int,float) ;
 double FUNC_2 (char*,int *) ;

__attribute__((used)) static inline double FUNC_3(float VAR_2, int VAR_3) {
 char VAR_4[VAR_1];

 if (VAR_3 < 0) {
  FUNC_0(VAR_2, VAR_0, '.', 'e', VAR_4);
 } else {
  FUNC_1(VAR_4, "%.*f", VAR_3, VAR_2);
 }

 return FUNC_2(VAR_4, ((void*)0));
}
