
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int mtu ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int,int ,int ,unsigned int*,int*) ;
 int VAR_5 ;

__attribute__((used)) static unsigned int FUNC_3(int VAR_6, bool VAR_7)
{
 socklen_t VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_8 = sizeof(VAR_9);
 if (VAR_7)
  VAR_10 = FUNC_2(VAR_6, VAR_2, VAR_1, &VAR_9, &VAR_8);
 else
  VAR_10 = FUNC_2(VAR_6, VAR_3, VAR_0, &VAR_9, &VAR_8);

 if (VAR_10)
  FUNC_0(1, VAR_4, "getsockopt mtu");


 FUNC_1(VAR_5, "path mtu (read):  %u\n", VAR_9);
 return VAR_9;
}
