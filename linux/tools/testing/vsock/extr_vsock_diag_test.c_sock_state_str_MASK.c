
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(int VAR_0)
{
 switch (VAR_0) {
 case 132:
  return "UNCONNECTED";
 case 128:
  return "CONNECTING";
 case 130:
  return "CONNECTED";
 case 131:
  return "DISCONNECTING";
 case 129:
  return "LISTEN";
 default:
  return "INVALID STATE";
 }
}
