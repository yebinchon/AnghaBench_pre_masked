
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int prio ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,unsigned int*,int*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static unsigned int FUNC_2(int VAR_2)
{
 unsigned int VAR_3 = 0;
 socklen_t VAR_4 = sizeof(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_1, &VAR_3, &VAR_4);
 if (VAR_5 < 0)
  FUNC_1("getsockopt(SO_PRIORITY)");

 return VAR_3;
}
