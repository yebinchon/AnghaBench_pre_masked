
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buffer; size_t size; } ;
typedef TYPE_1__ BUFFER ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static inline void FUNC_1(BUFFER *VAR_1)
{
    VAR_1->buffer[VAR_1->size] = '\0';
    FUNC_0(&VAR_1->buffer[VAR_1->size + 1], VAR_0);
}
