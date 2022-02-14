
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int member_0; } ;
struct file_info {int name; int data; int size; } ;
typedef int mode_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,struct stat*) ;
 int FUNC_4 (int ,int ,int ,int ,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;

void FUNC_6(struct file_info *VAR_5)
{
    struct stat VAR_6 = {0};
    int VAR_7;

    VAR_7 = FUNC_5(VAR_5->name, VAR_3, (mode_t)0600);
    if (VAR_7 == -1) {
        FUNC_0("Error while opening file %s.", VAR_5->name);
        FUNC_2(VAR_0);
    }

    if (FUNC_3(VAR_7, &VAR_6) == -1) {
        FUNC_0("Error getting file size for %s.", VAR_5->name);
        FUNC_2(VAR_0);
    }

    VAR_5->size = VAR_6.st_size;
    VAR_5->data = FUNC_4(0, VAR_5->size, VAR_4, VAR_2, VAR_7, 0);

    if (VAR_5->data == VAR_1) {
        FUNC_0("Error mapping file %s.", VAR_5->name);
        FUNC_2(VAR_0);
    }

    FUNC_1(VAR_7);
}
