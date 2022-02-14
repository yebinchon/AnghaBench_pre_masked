
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ xmlreaderinput ;
typedef int startA ;
struct TYPE_7__ {int* data; } ;
typedef TYPE_3__ encoded_buffer ;
typedef int commentA ;
struct TYPE_5__ {TYPE_3__ encoded; } ;
typedef int BOOL ;


 int FUNC_0 (int*,char const*,int) ;

__attribute__((used)) static inline BOOL FUNC_1(xmlreaderinput *VAR_0)
{
    static const char VAR_1[] = {'<','?'};
    static const char VAR_2[] = {'<','!'};
    encoded_buffer *VAR_3 = &VAR_0->buffer->encoded;
    unsigned char *VAR_4 = (unsigned char*)VAR_3->data;

    return !FUNC_0(VAR_3->data, VAR_1, sizeof(VAR_1)) ||
           !FUNC_0(VAR_3->data, VAR_2, sizeof(VAR_2)) ||

           (VAR_4[0] == '<' &&
            (
             (VAR_4[1] && (VAR_4[1] <= 0x7f)) ||
             (VAR_3->data[1] >> 5) == 0x6 ||
             (VAR_3->data[1] >> 4) == 0xe ||
             (VAR_3->data[1] >> 3) == 0x1e)
           );
}
