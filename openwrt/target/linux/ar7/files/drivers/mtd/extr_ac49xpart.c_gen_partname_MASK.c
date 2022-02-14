
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_partition {char* name; } ;


 int VAR_0 ;
 char* FUNC_0 (int,int ) ;
 char** VAR_1 ;
 int FUNC_1 (char*,char*,char*,...) ;

void FUNC_2(unsigned int VAR_2,
    unsigned int *VAR_3,
    struct mtd_partition *VAR_4)
{
 char *VAR_5 = FUNC_0(sizeof(char) * 8, VAR_0);

 (VAR_3[VAR_2])++;
 if (VAR_3[VAR_2] == 1)
  FUNC_1(VAR_5, "%s", VAR_1[VAR_2]);
 else
  FUNC_1(VAR_5, "%s%d", VAR_1[VAR_2], VAR_3[VAR_2]);

 VAR_4->name = VAR_5;
}
