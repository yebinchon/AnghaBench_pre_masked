
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
typedef int ut32 ;
struct TYPE_5__ {int num; int offset; } ;
typedef int TSNode ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char const*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int ,char*) ;
 char* FUNC_5 (char*,int,char const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static bool FUNC_9(RCore *VAR_0, const char *VAR_1, TSNode VAR_2, bool VAR_3) {
 TSNode VAR_4 = FUNC_7 (VAR_2, 0);
 TSNode VAR_5 = FUNC_7 (VAR_2, 1);
 ut32 VAR_6 = FUNC_8 (VAR_5);
 ut32 VAR_7 = FUNC_6 (VAR_5);
 char *VAR_8 = FUNC_5 ("%.*s", VAR_7 - VAR_6, VAR_1 + VAR_6);
 ut64 VAR_9 = VAR_0->offset;
 FUNC_0 ("tmp_seek command, command X on tmp_seek %s\n", VAR_8);
 FUNC_3 (VAR_0, FUNC_4 (VAR_0->num, VAR_8), 1);
 bool VAR_10 = FUNC_2 (VAR_0, VAR_1, VAR_4, VAR_3);
 FUNC_3 (VAR_0, VAR_9, 1);
 FUNC_1 (VAR_8);
 return VAR_10;
}
