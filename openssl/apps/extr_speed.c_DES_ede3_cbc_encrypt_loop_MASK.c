
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* buf; } ;
typedef TYPE_1__ loopargs_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*,unsigned char*,int ,int *,int *,int *,int *,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int ** VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;

__attribute__((used)) static int FUNC_2(void *VAR_9)
{
    loopargs_t *VAR_10 = *(loopargs_t **) VAR_9;
    unsigned char *VAR_11 = VAR_10->buf;
    int VAR_12;
    for (VAR_12 = 0; FUNC_0(VAR_3[VAR_2][VAR_8]); VAR_12++)
        FUNC_1(VAR_11, VAR_11, VAR_4[VAR_8],
                             &VAR_5, &VAR_6, &VAR_7, &VAR_1, VAR_0);
    return VAR_12;
}
