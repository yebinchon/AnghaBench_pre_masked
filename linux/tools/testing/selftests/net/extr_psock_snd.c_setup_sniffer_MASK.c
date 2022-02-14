
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv ;
struct timeval {int tv_usec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,int ,struct timeval*,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 struct timeval VAR_5 = { .tv_usec = 100 * 1000 };
 int VAR_6;

 VAR_6 = FUNC_4(VAR_0, VAR_1, 0);
 if (VAR_6 == -1)
  FUNC_1(1, VAR_4, "socket p");

 if (FUNC_3(VAR_6, VAR_2, VAR_3, &VAR_5, sizeof(VAR_5)))
  FUNC_1(1, VAR_4, "setsockopt rcv timeout");

 FUNC_2(VAR_6);
 FUNC_0(VAR_6);

 return VAR_6;
}
