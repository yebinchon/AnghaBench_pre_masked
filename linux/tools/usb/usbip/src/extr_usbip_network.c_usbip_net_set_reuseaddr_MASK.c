
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ,int ,int const*,int) ;

int FUNC_2(int VAR_2)
{
 const int VAR_3 = 1;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0, VAR_1, &VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0)
  FUNC_0("setsockopt: SO_REUSEADDR");

 return VAR_4;
}
