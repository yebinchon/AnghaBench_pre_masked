
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
  case 139:
   VAR_2 = "INSERT_LEAF";
   break;
  case 137:
   VAR_2 = "INSERT_UPPER";
   break;
  case 138:
   VAR_2 = "INSERT_META";
   break;
  case 132:
   VAR_2 = "SPLIT_L";
   break;
  case 131:
   VAR_2 = "SPLIT_R";
   break;
  case 128:
   VAR_2 = "VACUUM";
   break;
  case 140:
   VAR_2 = "DELETE";
   break;
  case 136:
   VAR_2 = "MARK_PAGE_HALFDEAD";
   break;
  case 130:
   VAR_2 = "UNLINK_PAGE";
   break;
  case 129:
   VAR_2 = "UNLINK_PAGE_META";
   break;
  case 134:
   VAR_2 = "NEWROOT";
   break;
  case 133:
   VAR_2 = "REUSE_PAGE";
   break;
  case 135:
   VAR_2 = "META_CLEANUP";
   break;
 }

 return VAR_2;
}
