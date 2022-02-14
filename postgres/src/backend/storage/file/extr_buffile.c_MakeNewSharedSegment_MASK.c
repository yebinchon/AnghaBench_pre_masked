
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fileset; int name; } ;
typedef scalar_t__ File ;
typedef TYPE_1__ BufFile ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static File
FUNC_4(BufFile *VAR_1, int VAR_2)
{
 char VAR_3[VAR_0];
 File VAR_4;







 FUNC_3(VAR_3, VAR_1->name, VAR_2 + 1);
 FUNC_2(VAR_1->fileset, VAR_3, 1);


 FUNC_3(VAR_3, VAR_1->name, VAR_2);
 VAR_4 = FUNC_1(VAR_1->fileset, VAR_3);


 FUNC_0(VAR_4 > 0);

 return VAR_4;
}
