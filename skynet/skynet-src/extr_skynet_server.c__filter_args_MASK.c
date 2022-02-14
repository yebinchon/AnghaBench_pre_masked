
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,void*,size_t) ;
 int FUNC_2 (struct skynet_context*) ;
 char* FUNC_3 (size_t) ;

__attribute__((used)) static void
FUNC_4(struct skynet_context * VAR_3, int VAR_4, int *VAR_5, void ** VAR_6, size_t * VAR_7) {
 int VAR_8 = !(VAR_4 & VAR_2);
 int VAR_9 = VAR_4 & VAR_1;
 VAR_4 &= 0xff;

 if (VAR_9) {
  FUNC_0(*VAR_5 == 0);
  *VAR_5 = FUNC_2(VAR_3);
 }

 if (VAR_8 && *VAR_6) {
  char * VAR_10 = FUNC_3(*VAR_7+1);
  FUNC_1(VAR_10, *VAR_6, *VAR_7);
  VAR_10[*VAR_7] = '\0';
  *VAR_6 = VAR_10;
 }

 *VAR_7 |= (size_t)VAR_4 << VAR_0;
}
