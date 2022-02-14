
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int const VAR_0 ;
const char *FUNC_0(const int VAR_1)
{
 static const char *const VAR_2[] = {
  [132] = "REQUEST",
  [130] = "RESPONSE",
  [134] = "DATA",
  [137] = "ACK",
  [133] = "DATAACK",
  [135] = "CLOSEREQ",
  [136] = "CLOSE",
  [131] = "RESET",
  [129] = "SYNC",
  [128] = "SYNCACK",
 };

 if (VAR_1 >= VAR_0)
  return "INVALID";
 else
  return VAR_2[VAR_1];
}
