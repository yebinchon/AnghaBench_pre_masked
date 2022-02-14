
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
const char *
FUNC_0(uint32 VAR_0)
{
 uint32 VAR_1;
 const char *VAR_2;


 if (VAR_0 == 0)
  return ((void*)0);

 VAR_1 = VAR_0 & 0xFF000000;

 switch (VAR_1)
 {
  case 129:
   VAR_2 = "LWLock";
   break;
  case 130:
   VAR_2 = "Lock";
   break;
  case 135:
   VAR_2 = "BufferPin";
   break;
  case 136:
   VAR_2 = "Activity";
   break;
  case 134:
   VAR_2 = "Client";
   break;
  case 133:
   VAR_2 = "Extension";
   break;
  case 131:
   VAR_2 = "IPC";
   break;
  case 128:
   VAR_2 = "Timeout";
   break;
  case 132:
   VAR_2 = "IO";
   break;
  default:
   VAR_2 = "???";
   break;
 }

 return VAR_2;
}
