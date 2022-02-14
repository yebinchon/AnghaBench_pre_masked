
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_zero; int sin_family; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(char *VAR_1, int *VAR_2)
{
 struct sockaddr_in *VAR_3;

 VAR_3 = (struct sockaddr_in *)VAR_1;
 *VAR_2 = sizeof(struct sockaddr_in);
 VAR_3->sin_family = VAR_0;
 FUNC_0(VAR_3->sin_zero, 0, sizeof(VAR_3->sin_zero));
}
