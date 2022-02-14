
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mutex {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct mutex*) ;
 int FUNC_1 (struct mutex*) ;
 int FUNC_2 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct mutex *VAR_1,
        char *VAR_2,
        char *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1);
 VAR_4 = FUNC_2(VAR_2, VAR_0, "%s\n", VAR_3);
 FUNC_1(VAR_1);

 return VAR_4;
}
