
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(uint16 VAR_1)
{
 char *VAR_2;

 switch (VAR_1)
 {
  case 134:
   VAR_2 = "No information available";
   break;

  case 147:
   VAR_2 = "Server initiated disconnect";
   break;

  case 146:
   VAR_2 = "Server initiated logoff";
   break;

  case 129:
   VAR_2 = "Server idle timeout reached";
   break;

  case 128:
   VAR_2 = "Server logon timeout reached";
   break;

  case 132:
   VAR_2 = "The session was replaced";
   break;

  case 133:
   VAR_2 = "The server is out of memory";
   break;

  case 131:
   VAR_2 = "The server denied the connection";
   break;

  case 130:
   VAR_2 = "The server denied the connection for security reason";
   break;

  case 138:
   VAR_2 = "Internal licensing error";
   break;

  case 136:
   VAR_2 = "No license server available";
   break;

  case 137:
   VAR_2 = "No valid license available";
   break;

  case 140:
   VAR_2 = "Invalid licensing message";
   break;

  case 139:
   VAR_2 = "Hardware id doesn't match software license";
   break;

  case 141:
   VAR_2 = "Client license error";
   break;

  case 145:
   VAR_2 = "Network error during licensing protocol";
   break;

  case 143:
   VAR_2 = "Licensing protocol was not completed";
   break;

  case 142:
   VAR_2 = "Incorrect client license enryption";
   break;

  case 144:
   VAR_2 = "Can't upgrade license";
   break;

  case 135:
   VAR_2 = "The server is not licensed to accept remote connections";
   break;

  default:
   if (VAR_1 > 0x1000 && VAR_1 < 0x7fff)
   {
    VAR_2 = "Internal protocol error";
   }
   else
   {
    VAR_2 = "Unknown reason";
   }
 }
 FUNC_0(VAR_0, "disconnect: %s.\n", VAR_2);
}
