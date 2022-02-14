
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_inc; } ;
typedef TYPE_1__ RAsmOp ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,char,char) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static inline int FUNC_8(RAsmOp *VAR_0, char *VAR_1) {
 int VAR_2 = 0;
 FUNC_5 (VAR_1, ',', ' ');

 FUNC_7 (VAR_1);

 int VAR_3 = (int)FUNC_4 (((void*)0), FUNC_6 (VAR_1, 1));
 int VAR_4 = (int)FUNC_4 (((void*)0),FUNC_6 (VAR_1, 2));
 char *VAR_5 = FUNC_3 (VAR_1, &VAR_2);
 if (VAR_3 > 0) {
  VAR_3 = VAR_3 > VAR_2 ? VAR_2 : VAR_3;
 }
 if (VAR_4 > 0) {
  VAR_4 = VAR_4 > VAR_2 ? 0 : VAR_4;
 } else {
  VAR_4 = VAR_2;
 }

 FUNC_1 (VAR_0->buf_inc);
 VAR_0->buf_inc = FUNC_2 (VAR_5 + VAR_3);

 FUNC_0 (VAR_5);
 return VAR_4;
}
