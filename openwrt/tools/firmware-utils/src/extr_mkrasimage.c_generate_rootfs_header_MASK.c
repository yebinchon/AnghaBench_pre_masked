
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int size; scalar_t__ data; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int,int ) ;
 size_t FUNC_6 (char*) ;
 unsigned int FUNC_7 (unsigned char const*,int ) ;

char *FUNC_8(struct file_info VAR_3, char *VAR_4)
{
    size_t VAR_5;
    unsigned int VAR_6, VAR_7;
    char *VAR_8;
    size_t VAR_9 = 0;

    VAR_8 = FUNC_3(VAR_1);
    if (!VAR_8) {
        FUNC_0("Couldn't allocate memory for rootfs header!");
        FUNC_1(VAR_0);
    }


    FUNC_5(VAR_8, 0xff, VAR_1);

    VAR_6 = FUNC_7((const unsigned char *)VAR_3.data, VAR_3.size);
    VAR_7 = FUNC_2(VAR_3.size);


    FUNC_4(VAR_8 + VAR_9, &VAR_6, 4);
    VAR_9 += 4;


    FUNC_4(VAR_8 + VAR_9, &VAR_7, 4);
    VAR_9 += 4;


    VAR_5 = FUNC_6(VAR_4) <= VAR_2 ? FUNC_6(VAR_4) : VAR_2;
    FUNC_4(VAR_8 + VAR_9, VAR_4, VAR_5);
    VAR_9 += VAR_5;

    VAR_8[VAR_9] = 0x0;

    return VAR_8;
}
