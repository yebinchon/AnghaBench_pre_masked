
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;
 int FUNC_3 (struct stat*,int ,int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0)
{
 struct stat VAR_1;
 ssize_t VAR_2;

 FUNC_3(&VAR_1, 0, sizeof(struct stat));
 VAR_2 = FUNC_2(VAR_0, &VAR_1);
 FUNC_1(VAR_2 == 0);
 FUNC_1(FUNC_0(VAR_1.st_mode));
}
