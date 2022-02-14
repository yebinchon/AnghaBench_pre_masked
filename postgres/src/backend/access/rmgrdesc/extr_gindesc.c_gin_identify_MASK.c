
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
 int VAR_0 ;

const char *
FUNC_0(uint8 VAR_1)
{
 const char *VAR_2 = ((void*)0);

 switch (VAR_1 & ~VAR_0)
 {
  case 136:
   VAR_2 = "CREATE_PTREE";
   break;
  case 133:
   VAR_2 = "INSERT";
   break;
  case 131:
   VAR_2 = "SPLIT";
   break;
  case 128:
   VAR_2 = "VACUUM_PAGE";
   break;
  case 129:
   VAR_2 = "VACUUM_DATA_LEAF_PAGE";
   break;
  case 134:
   VAR_2 = "DELETE_PAGE";
   break;
  case 130:
   VAR_2 = "UPDATE_META_PAGE";
   break;
  case 132:
   VAR_2 = "INSERT_LISTPAGE";
   break;
  case 135:
   VAR_2 = "DELETE_LISTPAGE";
   break;
 }

 return VAR_2;
}
