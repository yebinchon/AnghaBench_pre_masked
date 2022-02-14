
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int no_key ;
struct TYPE_2__ {unsigned char* buf; } ;
typedef TYPE_1__ loopargs_t ;


 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (int ,unsigned char*,int,unsigned char*,int,int *,int *) ;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_2(void *VAR_4)
{
    loopargs_t *VAR_5 = *(loopargs_t **) VAR_4;
    unsigned char *VAR_6 = VAR_5->buf;
    unsigned char VAR_7[32];
    int VAR_8;

    int VAR_9 = VAR_2 * 4 * VAR_1[0] / VAR_1[VAR_3];


    for (VAR_8 = 0; FUNC_0(VAR_9); VAR_8++) {
        if (FUNC_1(VAR_0, VAR_7, sizeof(VAR_7), VAR_6, VAR_1[VAR_3],
                 ((void*)0), ((void*)0)) == ((void*)0))
            return -1;
    }
    return VAR_8;
}
