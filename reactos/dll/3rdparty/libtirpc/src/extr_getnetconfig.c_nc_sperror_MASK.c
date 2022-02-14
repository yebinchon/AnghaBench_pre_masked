
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int VAR_1 ;

char *
FUNC_0()
{
    const char *VAR_2;

    switch(VAR_1) {
    case 130:
  VAR_2 = VAR_0[0];
  break;
    case 131:
  VAR_2 = VAR_0[1];
  break;
    case 128:
  VAR_2 = VAR_0[2];
  break;
    case 132:
  VAR_2 = VAR_0[3];
  break;
    case 129:
  VAR_2 = VAR_0[4];
  break;
    default:
  VAR_2 = "Unknown network selection error";
    }

    return ((char *)VAR_2);
}
