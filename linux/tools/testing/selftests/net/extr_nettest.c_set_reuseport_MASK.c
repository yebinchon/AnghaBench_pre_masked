
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int one ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int ,int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{
 unsigned int VAR_3 = 1;
 int VAR_4 = 0;

 if (FUNC_1(VAR_2, VAR_0, VAR_1, &VAR_3, sizeof(VAR_3)) != 0) {
  FUNC_0("setsockopt(SO_REUSEPORT)");
  VAR_4 = -1;
 }

 return VAR_4;
}
