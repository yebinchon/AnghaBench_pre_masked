
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sdb_classes_attrs; } ;
typedef int RAnalClassAttrType ;
typedef TYPE_1__ RAnal ;


 char* FUNC_0 (int ) ;
 char* FUNC_1 (char const*,char const*,char const*) ;
 char* FUNC_2 (char const*,char const*,char const*) ;
 char* FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static char *FUNC_4(RAnal *VAR_0, const char *VAR_1, RAnalClassAttrType VAR_2, const char *VAR_3, bool VAR_4) {
 const char *VAR_5 = FUNC_0 (VAR_2);
 char *VAR_6 = VAR_4
   ? FUNC_2 (VAR_1, VAR_5, VAR_3)
   : FUNC_1 (VAR_1, VAR_5, VAR_3);
 char *VAR_7 = FUNC_3 (VAR_0->sdb_classes_attrs, VAR_6, 0);
 return VAR_7;
}
