
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loopback {int card; } ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct loopback*,int ) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_2(struct loopback *VAR_1, int VAR_2)
{
 char VAR_3[32];

 FUNC_1(VAR_3, sizeof(VAR_3), "cable#%d", VAR_2);
 return FUNC_0(VAR_1->card, VAR_3, VAR_1,
        VAR_0);
}
