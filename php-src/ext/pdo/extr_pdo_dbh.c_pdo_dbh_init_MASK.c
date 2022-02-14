
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_object_handlers ;
typedef int zend_long ;
typedef int zend_class_entry ;
struct TYPE_6__ {int get_gc; int compare; int get_method; int * clone_obj; int free_obj; int dtor_obj; int offset; } ;
struct TYPE_5__ {int unserialize; int serialize; int create_object; } ;


 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 scalar_t__ VAR_61 ;
 scalar_t__ VAR_62 ;
 scalar_t__ VAR_63 ;
 scalar_t__ VAR_64 ;
 scalar_t__ VAR_65 ;
 scalar_t__ VAR_66 ;
 scalar_t__ VAR_67 ;
 scalar_t__ VAR_68 ;
 scalar_t__ VAR_69 ;
 scalar_t__ VAR_70 ;
 scalar_t__ VAR_71 ;
 scalar_t__ VAR_72 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int FUNC_4 (TYPE_2__*,int *,int) ;
 TYPE_1__* VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 TYPE_2__ VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 TYPE_1__* FUNC_5 (int *) ;

void FUNC_6(void)
{
 zend_class_entry VAR_87;

 FUNC_0(VAR_87, "PDO", VAR_78);
 VAR_76 = FUNC_5(&VAR_87);
 VAR_76->create_object = VAR_79;
 VAR_76->serialize = VAR_84;
 VAR_76->unserialize = VAR_85;

 FUNC_4(&VAR_80, &VAR_83, sizeof(zend_object_handlers));
 VAR_80.offset = FUNC_3(VAR_81, VAR_82);
 VAR_80.dtor_obj = VAR_86;
 VAR_80.free_obj = VAR_77;
 VAR_80.clone_obj = ((void*)0);
 VAR_80.get_method = VAR_75;
 VAR_80.compare = VAR_73;
 VAR_80.get_gc = VAR_74;

 FUNC_1("PARAM_BOOL", (zend_long)VAR_57);
 FUNC_1("PARAM_NULL", (zend_long)VAR_68);
 FUNC_1("PARAM_INT", (zend_long)VAR_66);
 FUNC_1("PARAM_STR", (zend_long)VAR_70);
 FUNC_1("PARAM_LOB", (zend_long)VAR_67);
 FUNC_1("PARAM_STMT", (zend_long)VAR_69);
 FUNC_1("PARAM_INPUT_OUTPUT", (zend_long)VAR_65);
 FUNC_1("PARAM_STR_NATL", (zend_long)VAR_72);
 FUNC_1("PARAM_STR_CHAR", (zend_long)VAR_71);


 FUNC_1("PARAM_EVT_ALLOC", (zend_long)VAR_58);
 FUNC_1("PARAM_EVT_FREE", (zend_long)VAR_63);
 FUNC_1("PARAM_EVT_EXEC_PRE", (zend_long)VAR_60);
 FUNC_1("PARAM_EVT_EXEC_POST", (zend_long)VAR_59);
 FUNC_1("PARAM_EVT_FETCH_PRE", (zend_long)VAR_62);
 FUNC_1("PARAM_EVT_FETCH_POST", (zend_long)VAR_61);
 FUNC_1("PARAM_EVT_NORMALIZE", (zend_long)VAR_64);

 FUNC_1("FETCH_LAZY", (zend_long)VAR_41);
 FUNC_1("FETCH_ASSOC", (zend_long)VAR_31);
 FUNC_1("FETCH_NUM", (zend_long)VAR_43);
 FUNC_1("FETCH_BOTH", (zend_long)VAR_32);
 FUNC_1("FETCH_OBJ", (zend_long)VAR_44);
 FUNC_1("FETCH_BOUND", (zend_long)VAR_33);
 FUNC_1("FETCH_COLUMN", (zend_long)VAR_36);
 FUNC_1("FETCH_CLASS", (zend_long)VAR_34);
 FUNC_1("FETCH_INTO", (zend_long)VAR_39);
 FUNC_1("FETCH_FUNC", (zend_long)VAR_37);
 FUNC_1("FETCH_GROUP", (zend_long)VAR_38);
 FUNC_1("FETCH_UNIQUE", (zend_long)VAR_53);
 FUNC_1("FETCH_KEY_PAIR", (zend_long)VAR_40);
 FUNC_1("FETCH_CLASSTYPE", (zend_long)VAR_35);

 FUNC_1("FETCH_SERIALIZE",(zend_long)VAR_52);
 FUNC_1("FETCH_PROPS_LATE", (zend_long)VAR_51);
 FUNC_1("FETCH_NAMED", (zend_long)VAR_42);

 FUNC_1("ATTR_AUTOCOMMIT", (zend_long)VAR_0);
 FUNC_1("ATTR_PREFETCH", (zend_long)VAR_16);
 FUNC_1("ATTR_TIMEOUT", (zend_long)VAR_21);
 FUNC_1("ATTR_ERRMODE", (zend_long)VAR_10);
 FUNC_1("ATTR_SERVER_VERSION", (zend_long)VAR_18);
 FUNC_1("ATTR_CLIENT_VERSION", (zend_long)VAR_2);
 FUNC_1("ATTR_SERVER_INFO", (zend_long)VAR_17);
 FUNC_1("ATTR_CONNECTION_STATUS", (zend_long)VAR_3);
 FUNC_1("ATTR_CASE", (zend_long)VAR_1);
 FUNC_1("ATTR_CURSOR_NAME", (zend_long)VAR_5);
 FUNC_1("ATTR_CURSOR", (zend_long)VAR_4);
 FUNC_1("ATTR_ORACLE_NULLS", (zend_long)VAR_14);
 FUNC_1("ATTR_PERSISTENT", (zend_long)VAR_15);
 FUNC_1("ATTR_STATEMENT_CLASS", (zend_long)VAR_19);
 FUNC_1("ATTR_FETCH_TABLE_NAMES", (zend_long)VAR_12);
 FUNC_1("ATTR_FETCH_CATALOG_NAMES", (zend_long)VAR_11);
 FUNC_1("ATTR_DRIVER_NAME", (zend_long)VAR_8);
 FUNC_1("ATTR_STRINGIFY_FETCHES", (zend_long)VAR_20);
 FUNC_1("ATTR_MAX_COLUMN_LEN", (zend_long)VAR_13);
 FUNC_1("ATTR_EMULATE_PREPARES", (zend_long)VAR_9);
 FUNC_1("ATTR_DEFAULT_FETCH_MODE", (zend_long)VAR_6);
 FUNC_1("ATTR_DEFAULT_STR_PARAM", (zend_long)VAR_7);

 FUNC_1("ERRMODE_SILENT", (zend_long)VAR_28);
 FUNC_1("ERRMODE_WARNING", (zend_long)VAR_29);
 FUNC_1("ERRMODE_EXCEPTION", (zend_long)VAR_27);

 FUNC_1("CASE_NATURAL", (zend_long)VAR_23);
 FUNC_1("CASE_LOWER", (zend_long)VAR_22);
 FUNC_1("CASE_UPPER", (zend_long)VAR_24);

 FUNC_1("NULL_NATURAL", (zend_long)VAR_55);
 FUNC_1("NULL_EMPTY_STRING", (zend_long)VAR_54);
 FUNC_1("NULL_TO_STRING", (zend_long)VAR_56);

 FUNC_2("ERR_NONE", VAR_30);

 FUNC_1("FETCH_ORI_NEXT", (zend_long)VAR_48);
 FUNC_1("FETCH_ORI_PRIOR", (zend_long)VAR_49);
 FUNC_1("FETCH_ORI_FIRST", (zend_long)VAR_46);
 FUNC_1("FETCH_ORI_LAST", (zend_long)VAR_47);
 FUNC_1("FETCH_ORI_ABS", (zend_long)VAR_45);
 FUNC_1("FETCH_ORI_REL", (zend_long)VAR_50);

 FUNC_1("CURSOR_FWDONLY", (zend_long)VAR_25);
 FUNC_1("CURSOR_SCROLL", (zend_long)VAR_26);
}
