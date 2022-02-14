
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
  case 137:
   VAR_2 = "INIT_META_PAGE";
   break;
  case 138:
   VAR_2 = "INIT_BITMAP_PAGE";
   break;
  case 136:
   VAR_2 = "INSERT";
   break;
  case 140:
   VAR_2 = "ADD_OVFL_PAGE";
   break;
  case 134:
   VAR_2 = "SPLIT_ALLOCATE_PAGE";
   break;
  case 131:
   VAR_2 = "SPLIT_PAGE";
   break;
  case 132:
   VAR_2 = "SPLIT_COMPLETE";
   break;
  case 135:
   VAR_2 = "MOVE_PAGE_CONTENTS";
   break;
  case 130:
   VAR_2 = "SQUEEZE_PAGE";
   break;
  case 139:
   VAR_2 = "DELETE";
   break;
  case 133:
   VAR_2 = "SPLIT_CLEANUP";
   break;
  case 129:
   VAR_2 = "UPDATE_META_PAGE";
   break;
  case 128:
   VAR_2 = "VACUUM_ONE_PAGE";
 }

 return VAR_2;
}
