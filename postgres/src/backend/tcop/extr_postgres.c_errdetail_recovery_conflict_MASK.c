
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(void)
{
 switch (VAR_0)
 {
  case 133:
   FUNC_0("User was holding shared buffer pin for too long.");
   break;
  case 131:
   FUNC_0("User was holding a relation lock for too long.");
   break;
  case 128:
   FUNC_0("User was or might have been using tablespace that must be dropped.");
   break;
  case 130:
   FUNC_0("User query might have needed to see row versions that must be removed.");
   break;
  case 129:
   FUNC_0("User transaction caused buffer deadlock with recovery.");
   break;
  case 132:
   FUNC_0("User was connected to a database that must be dropped.");
   break;
  default:
   break;

 }

 return 0;
}
