
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int size; int data; int name; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,int,int *) ;

void FUNC_6(struct file_info *VAR_1)
{
    FILE *VAR_2 = FUNC_4(VAR_1->name, "w");

    FUNC_5(VAR_1->data, VAR_1->size, 1, VAR_2);

    if (FUNC_3(VAR_2)) {
        FUNC_0("Wanted to write, but something went wrong.");
        FUNC_1(VAR_0);
    }

    FUNC_2(VAR_2);
}
