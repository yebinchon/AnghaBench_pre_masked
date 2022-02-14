
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_1(int VAR_2, void* VAR_3, size_t VAR_4) {
 ssize_t VAR_5;
 unsigned char *VAR_6 = VAR_3;
again:
 VAR_5 = FUNC_0(VAR_2, VAR_6, VAR_4);
 switch(VAR_5) {
  case -1:
   if(VAR_1 == VAR_0) goto again;
  case 0:
   return 0;
  default:
   if(VAR_5 == VAR_4 || !VAR_4) return 1;
   VAR_6 += VAR_5;
   VAR_4 -= VAR_5;
   goto again;
 }
}
