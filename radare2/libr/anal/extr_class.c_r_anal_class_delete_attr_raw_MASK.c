
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ev; int sdb_classes_attrs; } ;
struct TYPE_5__ {char const* class_name; char const* attr_id; int attr_type; } ;
typedef TYPE_1__ REventClassAttr ;
typedef int RAnalClassErr ;
typedef int RAnalClassAttrType ;
typedef TYPE_2__ RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 char* FUNC_1 (char const*,char const*,char const*) ;
 char* FUNC_2 (char const*,char const*,char const*) ;
 char* FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (int ,char*,char const*,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static RAnalClassErr FUNC_9(RAnal *VAR_2, const char *VAR_3, RAnalClassAttrType VAR_4, const char *VAR_5) {
 const char *VAR_6 = FUNC_0 (VAR_4);

 char *VAR_7 = FUNC_1 (VAR_3, VAR_6, VAR_5);
 FUNC_8 (VAR_2->sdb_classes_attrs, VAR_7, 0);
 VAR_7 = FUNC_2 (VAR_3, VAR_6, VAR_5);
 FUNC_8 (VAR_2->sdb_classes_attrs, VAR_7, 0);

 VAR_7 = FUNC_3 (VAR_3, VAR_6);
 FUNC_6 (VAR_2->sdb_classes_attrs, VAR_7, VAR_5, 0);
 if (!FUNC_7 (VAR_2->sdb_classes_attrs, VAR_7)) {
  FUNC_6 (VAR_2->sdb_classes_attrs, FUNC_4 (VAR_3), VAR_6, 0);
 }

 REventClassAttr VAR_8 = {
  .class_name = VAR_3,
  .attr_type = VAR_4,
  .attr_id = VAR_5
 };
 FUNC_5 (VAR_2->ev, VAR_1, &VAR_8);

 return VAR_0;
}
