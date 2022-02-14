
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ECPGdtype { ____Placeholder_ECPGdtype } ECPGdtype ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int) ;

const char *
FUNC_1(enum ECPGdtype VAR_2)
{
 switch (VAR_2)
 {
  case 142:
   return "ECPGd_countr";
   break;
  case 141:
   return "ECPGd_data";
   break;
  case 140:
   return "ECPGd_di_code";
   break;
  case 139:
   return "ECPGd_di_precision";
   break;
  case 138:
   return "ECPGd_indicator";
   break;
  case 137:
   return "ECPGd_key_member";
   break;
  case 136:
   return "ECPGd_length";
   break;
  case 135:
   return "ECPGd_name";
   break;
  case 134:
   return "ECPGd_nullable";
   break;
  case 133:
   return "ECPGd_octet";
   break;
  case 132:
   return "ECPGd_precision";
   break;
  case 131:
   return "ECPGd_ret_length";
  case 130:
   return "ECPGd_ret_octet";
   break;
  case 129:
   return "ECPGd_scale";
   break;
  case 128:
   return "ECPGd_type";
   break;
  case 143:
   return "ECPGd_cardinality";
  default:
   FUNC_0(VAR_1, VAR_0, "unrecognized descriptor item code %d", VAR_2);
 }

 return ((void*)0);
}
