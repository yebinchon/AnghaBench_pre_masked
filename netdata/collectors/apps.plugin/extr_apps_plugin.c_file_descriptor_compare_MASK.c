
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_descriptor {int magic; scalar_t__ hash; int name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(void* VAR_0, void* VAR_1) {





    if(((struct file_descriptor *)VAR_0)->hash < ((struct file_descriptor *)VAR_1)->hash)
        return -1;

    else if(((struct file_descriptor *)VAR_0)->hash > ((struct file_descriptor *)VAR_1)->hash)
        return 1;

    else
        return FUNC_1(((struct file_descriptor *)VAR_0)->name, ((struct file_descriptor *)VAR_1)->name);
}
