
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int leaf_type; scalar_t__ get_print_type; scalar_t__ get_mlist; scalar_t__ get_index; scalar_t__ get_arglist; scalar_t__ get_this_type; scalar_t__ get_class_type; scalar_t__ get_return_type; scalar_t__ get_utype; scalar_t__ get_vshape; scalar_t__ get_derived; scalar_t__ get_base_type; scalar_t__ get_index_type; scalar_t__ get_element_type; scalar_t__ get_arg_type; scalar_t__ get_members; scalar_t__ get_name_len; scalar_t__ get_val; scalar_t__ get_name; scalar_t__ free_; scalar_t__ is_fwdref; scalar_t__ get_modified_type; } ;
typedef TYPE_1__ STypeInfo ;
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
 scalar_t__ VAR_30 ;
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
 scalar_t__ VAR_73 ;
 scalar_t__ VAR_74 ;
 scalar_t__ VAR_75 ;
 scalar_t__ VAR_76 ;

__attribute__((used)) static void FUNC_0(STypeInfo *VAR_77)
{
 VAR_77->free_ = 0;
 VAR_77->get_members = 0;
 VAR_77->get_name = 0;
 VAR_77->get_val = 0;
 VAR_77->get_name_len = 0;
 VAR_77->get_arg_type = 0;
 VAR_77->get_element_type = 0;
 VAR_77->get_index_type = 0;
 VAR_77->get_base_type = 0;
 VAR_77->get_derived = 0;
 VAR_77->get_vshape = 0;
 VAR_77->get_utype = 0;
 VAR_77->get_return_type = 0;
 VAR_77->get_class_type = 0;
 VAR_77->get_this_type = 0;
 VAR_77->get_arglist = 0;
 VAR_77->get_index = 0;
 VAR_77->get_mlist = 0;
 VAR_77->get_modified_type = 0;
 VAR_77->is_fwdref = 0;
 VAR_77->get_print_type = 0;

 switch (VAR_77->leaf_type) {
 case 140:
  VAR_77->get_members = VAR_36;
  VAR_77->free_ = VAR_5;
  VAR_77->get_print_type = VAR_37;
  break;
 case 142:
  VAR_77->get_name = VAR_28;
  VAR_77->get_name_len = VAR_29;
  VAR_77->get_members = VAR_27;
  VAR_77->get_utype = VAR_31;
  VAR_77->free_ = VAR_3;
  VAR_77->get_print_type = VAR_30;
  break;
 case 143:
 case 130:
  VAR_77->get_name = VAR_22;
  VAR_77->get_val = VAR_25;
  VAR_77->get_name_len = VAR_23;
  VAR_77->get_members = VAR_68;
  VAR_77->get_derived = VAR_21;
  VAR_77->get_vshape = VAR_26;
  VAR_77->is_fwdref = VAR_75;
  VAR_77->free_ = VAR_2;
  VAR_77->get_print_type = VAR_24;
  break;
 case 132:
  VAR_77->get_utype = VAR_64;
  VAR_77->get_print_type = VAR_63;
  break;
 case 145:
  VAR_77->get_name = VAR_15;
  VAR_77->get_val = VAR_18;
  VAR_77->get_name_len = VAR_16;
  VAR_77->get_element_type = VAR_13;
  VAR_77->get_index_type = VAR_14;
  VAR_77->free_ = VAR_1;
  VAR_77->get_print_type = VAR_17;
  break;
 case 135:
  VAR_77->get_modified_type = VAR_52;
  VAR_77->get_print_type = VAR_53;
  break;
 case 146:
  VAR_77->free_ = VAR_0;
  VAR_77->get_print_type = VAR_12;
  break;
 case 136:
  VAR_77->get_return_type = VAR_50;
  VAR_77->get_class_type = VAR_48;
  VAR_77->get_this_type = VAR_51;
  VAR_77->get_arglist = VAR_47;
  VAR_77->get_print_type = VAR_49;
  break;
 case 137:
  break;
 case 131:
  VAR_77->get_return_type = VAR_67;
  VAR_77->get_arglist = VAR_65;
  VAR_77->get_print_type = VAR_66;
  break;
 case 129:
  VAR_77->get_name = VAR_70;
  VAR_77->get_val = VAR_73;
  VAR_77->get_name_len = VAR_71;
  VAR_77->get_members = VAR_69;
  VAR_77->is_fwdref = VAR_76;
  VAR_77->free_ = VAR_10;
  VAR_77->get_print_type = VAR_72;
  break;
 case 144:
  VAR_77->get_base_type = VAR_19;
  VAR_77->get_print_type = VAR_20;
  break;
 case 128:
  VAR_77->free_ = VAR_11;
  VAR_77->get_print_type = VAR_74;
  break;
 case 141:
  VAR_77->get_name = VAR_32;
  VAR_77->get_val = VAR_35;
  VAR_77->get_name_len = VAR_33;
  VAR_77->free_ = VAR_4;
  VAR_77->get_print_type = VAR_34;
  break;
 case 134:
  VAR_77->get_name = VAR_55;
  VAR_77->get_name_len = VAR_56;
  VAR_77->get_index = VAR_54;
  VAR_77->free_ = VAR_8;
  VAR_77->get_print_type = VAR_57;
  break;
 case 138:
  VAR_77->get_name = VAR_44;
  VAR_77->get_name_len = VAR_45;
  VAR_77->get_mlist = VAR_43;
  VAR_77->free_ = VAR_7;
  VAR_77->get_print_type = VAR_46;
  break;
 case 139:
  VAR_77->get_name = VAR_39;
  VAR_77->get_val = VAR_42;
  VAR_77->get_name_len = VAR_40;
  VAR_77->get_index = VAR_38;
  VAR_77->free_ = VAR_6;
  VAR_77->get_print_type = VAR_41;
  break;
 case 133:
  VAR_77->get_name = VAR_59;
  VAR_77->get_name_len = VAR_60;
  VAR_77->get_val = VAR_62;
  VAR_77->get_index = VAR_58;
  VAR_77->free_ = VAR_9;
  VAR_77->get_print_type = VAR_61;
  break;
 default:

  VAR_77->get_name = 0;
  VAR_77->get_val = 0;
  VAR_77->get_name_len = 0;
  VAR_77->get_members = 0;
  VAR_77->get_arg_type = 0;
  VAR_77->get_element_type = 0;
  VAR_77->get_index_type = 0;
  VAR_77->get_base_type = 0;
  VAR_77->get_derived = 0;
  VAR_77->get_vshape = 0;
  VAR_77->get_utype = 0;
  VAR_77->get_return_type = 0;
  VAR_77->get_class_type = 0;
  VAR_77->get_this_type = 0;
  VAR_77->get_arglist = 0;
  VAR_77->get_index = 0;
  VAR_77->get_mlist = 0;
  VAR_77->get_print_type = 0;
  break;
 }
}
