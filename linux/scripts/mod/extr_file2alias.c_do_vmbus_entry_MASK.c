
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * b; } ;


 int FUNC_0 (void*,int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2, void *VAR_3,
     char *VAR_4)
{
 int VAR_5;
 FUNC_0(VAR_3, VAR_1, VAR_0);
 char VAR_6[(sizeof(*VAR_0) + 1) * 2];

 for (VAR_5 = 0; VAR_5 < (sizeof(*VAR_0) * 2); VAR_5 += 2)
  FUNC_2(&VAR_6[VAR_5], "%02x", FUNC_1((VAR_0->b)[VAR_5/2]));

 FUNC_4(VAR_4, "vmbus:");
 FUNC_3(VAR_4, VAR_6);

 return 1;
}
