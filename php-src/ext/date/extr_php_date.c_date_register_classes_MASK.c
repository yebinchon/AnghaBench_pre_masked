
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int zend_object_handlers ;
struct TYPE_19__ {void* create_object; } ;
typedef TYPE_1__ zend_class_entry ;
struct TYPE_22__ {int write_property; int read_property; void* get_gc; int get_property_ptr_ptr; int get_properties; void* clone_obj; int free_obj; void* offset; void* compare; int has_property; int get_debug_info; void* get_properties_for; } ;
struct TYPE_21__ {int get_iterator; } ;
struct TYPE_20__ {int interface_gets_implemented; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__,char*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 void* FUNC_4 (int ,int ) ;
 TYPE_5__* VAR_25 ;
 TYPE_5__* VAR_26 ;
 TYPE_2__* VAR_27 ;
 void* VAR_28 ;
 TYPE_5__* VAR_29 ;
 void* VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 void* VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 void* VAR_42 ;
 void* VAR_43 ;
 void* VAR_44 ;
 void* VAR_45 ;
 void* VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 void* VAR_52 ;
 void* VAR_53 ;
 void* VAR_54 ;
 void* VAR_55 ;
 void* VAR_56 ;
 void* VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 TYPE_8__ VAR_60 ;
 TYPE_8__ VAR_61 ;
 TYPE_8__ VAR_62 ;
 TYPE_8__ VAR_63 ;
 TYPE_8__ VAR_64 ;
 void* VAR_65 ;
 void* VAR_66 ;
 void* VAR_67 ;
 void* VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int FUNC_5 (TYPE_8__*,int *,int) ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 TYPE_2__* VAR_80 ;
 int FUNC_6 (TYPE_5__*,int,TYPE_2__*) ;
 void* FUNC_7 (TYPE_1__*,int *) ;
 TYPE_2__* FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(void)
{
 zend_class_entry VAR_81, VAR_82, VAR_83, VAR_84, VAR_85, VAR_86;

 FUNC_0(VAR_86, "DateTimeInterface", VAR_33);
 VAR_27 = FUNC_8(&VAR_86);
 VAR_27->interface_gets_implemented = VAR_73;




 FUNC_0(VAR_27, "ATOM", sizeof("ATOM")-1, VAR_5, sizeof(VAR_5)-1);;
 FUNC_0(VAR_27, "COOKIE", sizeof("COOKIE")-1, VAR_0, sizeof(VAR_0)-1);;
 FUNC_0(VAR_27, "ISO8601", sizeof("ISO8601")-1, VAR_1, sizeof(VAR_1)-1);;
 FUNC_0(VAR_27, "RFC822", sizeof("RFC822")-1, VAR_8, sizeof(VAR_8)-1);;
 FUNC_0(VAR_27, "RFC850", sizeof("RFC850")-1, VAR_9, sizeof(VAR_9)-1);;
 FUNC_0(VAR_27, "RFC1036", sizeof("RFC1036")-1, VAR_2, sizeof(VAR_2)-1);;
 FUNC_0(VAR_27, "RFC1123", sizeof("RFC1123")-1, VAR_3, sizeof(VAR_3)-1);;
 FUNC_0(VAR_27, "RFC7231", sizeof("RFC7231")-1, VAR_7, sizeof(VAR_7)-1);;
 FUNC_0(VAR_27, "RFC2822", sizeof("RFC2822")-1, VAR_4, sizeof(VAR_4)-1);;
 FUNC_0(VAR_27, "RFC3339", sizeof("RFC3339")-1, VAR_5, sizeof(VAR_5)-1);;
 FUNC_0(VAR_27, "RFC3339_EXTENDED", sizeof("RFC3339_EXTENDED")-1, VAR_6, sizeof(VAR_6)-1);;
 FUNC_0(VAR_27, "RSS", sizeof("RSS")-1, VAR_3, sizeof(VAR_3)-1);;
 FUNC_0(VAR_27, "W3C", sizeof("W3C")-1, VAR_5, sizeof(VAR_5)-1);;

 FUNC_0(VAR_81, "DateTime", VAR_31);
 VAR_81.create_object = VAR_65;
 VAR_25 = FUNC_7(&VAR_81, ((void*)0));
 FUNC_5(&VAR_60, &VAR_79, sizeof(zend_object_handlers));
 VAR_60.offset = FUNC_4(VAR_74, VAR_78);
 VAR_60.free_obj = VAR_47;
 VAR_60.clone_obj = VAR_42;
 VAR_60.compare = VAR_46;
 VAR_60.get_properties_for = VAR_56;
 VAR_60.get_gc = VAR_52;
 FUNC_6(VAR_25, 1, VAR_27);

 FUNC_0(VAR_82, "DateTimeImmutable", VAR_32);
 VAR_82.create_object = VAR_65;
 VAR_26 = FUNC_7(&VAR_82, ((void*)0));
 FUNC_5(&VAR_61, &VAR_79, sizeof(zend_object_handlers));
 VAR_61.clone_obj = VAR_42;
 VAR_61.compare = VAR_46;
 VAR_61.get_properties_for = VAR_56;
 VAR_61.get_gc = VAR_52;
 FUNC_6(VAR_26, 1, VAR_27);

 FUNC_0(VAR_83, "DateTimeZone", VAR_36);
 VAR_83.create_object = VAR_68;
 VAR_30 = FUNC_7(&VAR_83, ((void*)0));
 FUNC_5(&VAR_64, &VAR_79, sizeof(zend_object_handlers));
 VAR_64.offset = FUNC_4(VAR_77, VAR_78);
 VAR_64.free_obj = VAR_50;
 VAR_64.clone_obj = VAR_45;
 VAR_64.get_properties_for = VAR_57;
 VAR_64.get_gc = VAR_55;
 VAR_64.get_debug_info = VAR_51;




 FUNC_0(VAR_30, "AFRICA", sizeof("AFRICA")-1, VAR_11);;
 FUNC_0(VAR_30, "AMERICA", sizeof("AMERICA")-1, VAR_14);;
 FUNC_0(VAR_30, "ANTARCTICA", sizeof("ANTARCTICA")-1, VAR_15);;
 FUNC_0(VAR_30, "ARCTIC", sizeof("ARCTIC")-1, VAR_16);;
 FUNC_0(VAR_30, "ASIA", sizeof("ASIA")-1, VAR_17);;
 FUNC_0(VAR_30, "ATLANTIC", sizeof("ATLANTIC")-1, VAR_18);;
 FUNC_0(VAR_30, "AUSTRALIA", sizeof("AUSTRALIA")-1, VAR_19);;
 FUNC_0(VAR_30, "EUROPE", sizeof("EUROPE")-1, VAR_20);;
 FUNC_0(VAR_30, "INDIAN", sizeof("INDIAN")-1, VAR_21);;
 FUNC_0(VAR_30, "PACIFIC", sizeof("PACIFIC")-1, VAR_22);;
 FUNC_0(VAR_30, "UTC", sizeof("UTC")-1, VAR_23);;
 FUNC_0(VAR_30, "ALL", sizeof("ALL")-1, VAR_12);;
 FUNC_0(VAR_30, "ALL_WITH_BC", sizeof("ALL_WITH_BC")-1, VAR_13);;
 FUNC_0(VAR_30, "PER_COUNTRY", sizeof("PER_COUNTRY")-1, VAR_24);;

 FUNC_0(VAR_84, "DateInterval", VAR_34);
 VAR_84.create_object = VAR_66;
 VAR_28 = FUNC_7(&VAR_84, ((void*)0));
 FUNC_5(&VAR_62, &VAR_79, sizeof(zend_object_handlers));
 VAR_62.offset = FUNC_4(VAR_75, VAR_78);
 VAR_62.free_obj = VAR_48;
 VAR_62.clone_obj = VAR_43;
 VAR_62.has_property = VAR_39;
 VAR_62.read_property = VAR_40;
 VAR_62.write_property = VAR_41;
 VAR_62.get_properties = VAR_58;
 VAR_62.get_property_ptr_ptr = VAR_38;
 VAR_62.get_gc = VAR_53;
 VAR_62.compare = VAR_37;

 FUNC_0(VAR_85, "DatePeriod", VAR_35);
 VAR_85.create_object = VAR_67;
 VAR_29 = FUNC_7(&VAR_85, ((void*)0));
 VAR_29->get_iterator = VAR_69;
 FUNC_6(VAR_29, 1, VAR_80);
 FUNC_5(&VAR_63, &VAR_79, sizeof(zend_object_handlers));
 VAR_63.offset = FUNC_4(VAR_76, VAR_78);
 VAR_63.free_obj = VAR_49;
 VAR_63.clone_obj = VAR_44;
 VAR_63.get_properties = VAR_59;
 VAR_63.get_property_ptr_ptr = VAR_70;
 VAR_63.get_gc = VAR_54;
 VAR_63.read_property = VAR_71;
 VAR_63.write_property = VAR_72;




 FUNC_0(VAR_29, "EXCLUDE_START_DATE", sizeof("EXCLUDE_START_DATE")-1, VAR_10);;
}
