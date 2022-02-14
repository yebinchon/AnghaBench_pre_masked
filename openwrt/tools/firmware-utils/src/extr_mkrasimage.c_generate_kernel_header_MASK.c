
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int size; scalar_t__ data; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,unsigned int*,int) ;
 unsigned int FUNC_5 (unsigned char const*,int ) ;

char *FUNC_6(struct file_info VAR_2)
{
    unsigned int VAR_3, VAR_4;
    char *VAR_5;
    size_t VAR_6 = 0;

    VAR_5 = FUNC_3(VAR_1);
    if (!VAR_5) {
        FUNC_0("Couldn't allocate memory for kernel header!");
        FUNC_1(VAR_0);
    }

    VAR_3 = FUNC_5((const unsigned char *)VAR_2.data, VAR_2.size);
    VAR_4 = FUNC_2(VAR_2.size);


    FUNC_4(VAR_5 + VAR_6, &VAR_3, 4);
    VAR_6 += 4;


    FUNC_4(VAR_5 + VAR_6, &VAR_4, 4);

    return VAR_5;
}
