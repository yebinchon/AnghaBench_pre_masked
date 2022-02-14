
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* input; } ;
typedef TYPE_4__ xmlreader ;
typedef int UINT ;
struct TYPE_8__ {TYPE_2__* buffer; } ;
struct TYPE_6__ {int cur; } ;
struct TYPE_7__ {TYPE_1__ utf16; } ;



__attribute__((used)) static inline UINT FUNC_0(xmlreader *VAR_0)
{
    return VAR_0->input->buffer->utf16.cur;
}
