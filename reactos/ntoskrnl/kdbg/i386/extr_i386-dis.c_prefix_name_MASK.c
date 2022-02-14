
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

__attribute__((used)) static const char *
FUNC_0 (int VAR_3, int VAR_4)
{
  switch (VAR_3)
    {

    case 0x40:
      return "rex";
    case 0x41:
      return "rexZ";
    case 0x42:
      return "rexY";
    case 0x43:
      return "rexYZ";
    case 0x44:
      return "rexX";
    case 0x45:
      return "rexXZ";
    case 0x46:
      return "rexXY";
    case 0x47:
      return "rexXYZ";
    case 0x48:
      return "rex64";
    case 0x49:
      return "rex64Z";
    case 0x4a:
      return "rex64Y";
    case 0x4b:
      return "rex64YZ";
    case 0x4c:
      return "rex64X";
    case 0x4d:
      return "rex64XZ";
    case 0x4e:
      return "rex64XY";
    case 0x4f:
      return "rex64XYZ";
    case 0xf3:
      return "repz";
    case 0xf2:
      return "repnz";
    case 0xf0:
      return "lock";
    case 0x2e:
      return "cs";
    case 0x36:
      return "ss";
    case 0x3e:
      return "ds";
    case 0x26:
      return "es";
    case 0x64:
      return "fs";
    case 0x65:
      return "gs";
    case 0x66:
      return (VAR_4 & VAR_1) ? "data16" : "data32";
    case 0x67:
      if (VAR_2)
 return (VAR_4 & VAR_0) ? "addr32" : "addr64";
      else
 return ((VAR_4 & VAR_0) && !VAR_2) ? "addr16" : "addr32";
    case 128:
      return "fwait";
    default:
      return ((void*)0);
    }
}
