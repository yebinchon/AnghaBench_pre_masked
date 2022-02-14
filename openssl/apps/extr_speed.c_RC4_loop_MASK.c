
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* buf; } ;
typedef TYPE_1__ loopargs_t ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,size_t,unsigned char*,unsigned char*) ;
 int ** VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static int FUNC_2(void *VAR_5)
{
    loopargs_t *VAR_6 = *(loopargs_t **) VAR_5;
    unsigned char *VAR_7 = VAR_6->buf;
    int VAR_8;
    for (VAR_8 = 0; FUNC_0(VAR_1[VAR_0][VAR_4]); VAR_8++)
        FUNC_1(&VAR_3, (size_t)VAR_2[VAR_4], VAR_7, VAR_7);
    return VAR_8;
}
