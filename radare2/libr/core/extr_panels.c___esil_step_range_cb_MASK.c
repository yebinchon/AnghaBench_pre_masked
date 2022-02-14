
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_6__ {scalar_t__ offset; int num; } ;
typedef int RStrBuf ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 char* FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;

int FUNC_9(void *VAR_0) {
 RStrBuf *VAR_1 = FUNC_8 (((void*)0));
 RCore *VAR_2 = (RCore *)VAR_0;
 FUNC_5 (VAR_1, "start addr: ");
 char *VAR_3 = FUNC_3 (VAR_2, FUNC_7 (VAR_1));
 FUNC_5 (VAR_1, VAR_3);
 FUNC_5 (VAR_1, " end addr: ");
 char *VAR_4 = FUNC_3 (VAR_2, FUNC_7 (VAR_1));
 FUNC_6 (VAR_1);
 ut64 VAR_5 = FUNC_4 (VAR_2->num, VAR_3);
 ut64 VAR_6 = FUNC_4 (VAR_2->num, VAR_4);
 if (VAR_5 >= VAR_6) {
  return 0;
 }
 ut64 VAR_7 = VAR_2->offset;
 VAR_2->offset = VAR_5;
 FUNC_0 (VAR_2);
 FUNC_1 (VAR_2, VAR_6);
 VAR_2->offset = VAR_7;
 FUNC_2 ((RCore *)VAR_0, 0, 0);
 return 0;
}
