
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
  case 135:
   VAR_2 = "ADD_LEAF";
   break;
  case 133:
   VAR_2 = "MOVE_LEAFS";
   break;
  case 134:
   VAR_2 = "ADD_NODE";
   break;
  case 131:
   VAR_2 = "SPLIT_TUPLE";
   break;
  case 132:
   VAR_2 = "PICKSPLIT";
   break;
  case 130:
   VAR_2 = "VACUUM_LEAF";
   break;
  case 128:
   VAR_2 = "VACUUM_ROOT";
   break;
  case 129:
   VAR_2 = "VACUUM_REDIRECT";
   break;
 }

 return VAR_2;
}
