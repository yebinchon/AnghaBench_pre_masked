
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(void)
{
 switch(VAR_0)
 {
  case 0:
   FUNC_0("(no errno set) - ");
   break;
  case 129:
   FUNC_0("(errno == PGTYPES_NUM_OVERFLOW) - ");
   break;
  case 128:
   FUNC_0("(errno == PGTYPES_NUM_UNDERFLOW) - ");
   break;
  case 131:
   FUNC_0("(errno == PGTYPES_NUM_BAD_NUMERIC) - ");
   break;
  case 130:
   FUNC_0("(errno == PGTYPES_NUM_DIVIDE_ZERO) - ");
   break;
  default:
   FUNC_0("(unknown errno (%d))\n", VAR_0);
   FUNC_0("(libc: (%s)) ", FUNC_1(VAR_0));
   break;
 }

}
