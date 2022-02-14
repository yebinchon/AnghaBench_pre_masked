
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_5)
{
 int VAR_6 = -VAR_0;

 if (!FUNC_2(VAR_5, "9p2000")) {
  VAR_6 = VAR_4;
  FUNC_0(VAR_1, "Protocol version: Legacy\n");
 } else if (!FUNC_2(VAR_5, "9p2000.u")) {
  VAR_6 = VAR_3;
  FUNC_0(VAR_1, "Protocol version: 9P2000.u\n");
 } else if (!FUNC_2(VAR_5, "9p2000.L")) {
  VAR_6 = VAR_2;
  FUNC_0(VAR_1, "Protocol version: 9P2000.L\n");
 } else
  FUNC_1("Unknown protocol version %s\n", VAR_5);

 return VAR_6;
}
