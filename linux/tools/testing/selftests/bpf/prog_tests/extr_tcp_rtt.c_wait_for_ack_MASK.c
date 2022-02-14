
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_info {scalar_t__ tcpi_unacked; } ;
typedef int socklen_t ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,struct tcp_info*,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(int VAR_2, int VAR_3)
{
 struct tcp_info VAR_4;
 socklen_t VAR_5;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5 = sizeof(VAR_4);
  VAR_7 = FUNC_0(VAR_2, VAR_0, VAR_1, &VAR_4, &VAR_5);
  if (VAR_7 < 0) {
   FUNC_1("Failed to lookup TCP stats");
   return VAR_7;
  }

  if (VAR_4.tcpi_unacked == 0)
   return 0;

  FUNC_2(10);
 }

 FUNC_1("Did not receive ACK");
 return -1;
}
