
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* buffer; size_t size; int contenttype; } ;
typedef int BUFFER_OVERFLOW_EOF ;
typedef TYPE_1__ BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*,size_t) ;
 char* FUNC_4 (size_t) ;

BUFFER *FUNC_5(size_t VAR_2)
{
    BUFFER *VAR_3;

    FUNC_3(VAR_1, "Creating new web buffer of size %zu.", VAR_2);

    VAR_3 = FUNC_2(1, sizeof(BUFFER));
    VAR_3->buffer = FUNC_4(VAR_2 + sizeof(BUFFER_OVERFLOW_EOF) + 2);
    VAR_3->buffer[0] = '\0';
    VAR_3->size = VAR_2;
    VAR_3->contenttype = VAR_0;
    FUNC_1(VAR_3);
    FUNC_0(VAR_3);

    return(VAR_3);
}
