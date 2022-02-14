
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* buf; } ;
typedef TYPE_1__ loopargs_t ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (unsigned char*,size_t,unsigned char*,int *,int ,int *) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int ** VAR_2 ;
 scalar_t__* VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static int FUNC_3(void *VAR_5)
{
    loopargs_t *VAR_6 = *(loopargs_t **) VAR_5;
    unsigned char *VAR_7 = VAR_6->buf;
    unsigned char VAR_8[VAR_1];
    int VAR_9;

    for (VAR_9 = 0; FUNC_0(VAR_2[VAR_0][VAR_4]); VAR_9++) {
        if (!FUNC_1(VAR_7, (size_t)VAR_3[VAR_4], VAR_8, ((void*)0), FUNC_2(),
                        ((void*)0)))
            return -1;
    }
    return VAR_9;
}
