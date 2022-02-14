
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_6){
  if(FUNC_1(VAR_6)==1){
   if(FUNC_0(VAR_6,"w")==0)
     return VAR_5|VAR_1|VAR_4;
   else if(FUNC_0(VAR_6, "r")==0)
     return VAR_2;
   else if(FUNC_0(VAR_6, "a")==0)
     return VAR_5|VAR_1|VAR_0;
   else
     return VAR_2;
  } else if (FUNC_1(VAR_6)==2){
   if(FUNC_0(VAR_6,"r+")==0)
     return VAR_3;
   else if(FUNC_0(VAR_6, "w+")==0)
     return VAR_3|VAR_1|VAR_4;
   else if(FUNC_0(VAR_6, "a+")==0)
     return VAR_3|VAR_1|VAR_0;
   else
     return VAR_2;
  } else {
   return VAR_2;
  }
}
