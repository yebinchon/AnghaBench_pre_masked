
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int ,char*) ;
 char* VAR_6 ;

__attribute__((used)) static void FUNC_4(int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;

 if (VAR_3 && (VAR_7 == VAR_1 || VAR_8 != VAR_2))
  FUNC_3(1, 0, "can only cork udp sockets");

 FUNC_1(VAR_4);

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  VAR_6[VAR_10] = 'a' + (VAR_10 % 26);

 if (VAR_5)
  FUNC_0(VAR_7, VAR_8, VAR_9);
 else
  FUNC_2(VAR_7, VAR_8, VAR_9);
}
