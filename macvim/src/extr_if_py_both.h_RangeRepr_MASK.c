
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ b_fname; } ;
struct TYPE_6__ {scalar_t__ end; scalar_t__ start; TYPE_1__* buf; } ;
struct TYPE_5__ {TYPE_4__* buf; } ;
typedef TYPE_2__ RangeObject ;
typedef int PyObject ;


 TYPE_4__* VAR_0 ;
 int * FUNC_0 (char*,...) ;

__attribute__((used)) static PyObject *
FUNC_1(RangeObject *VAR_1)
{
    if (VAR_1->buf->buf == VAR_0)
 return FUNC_0("<range object (for deleted buffer) at %p>",
        (VAR_1));
    else
    {
 char *VAR_2 = (char *)VAR_1->buf->buf->b_fname;

 if (VAR_2 == ((void*)0))
     VAR_2 = "";

 return FUNC_0("<range %s (%d:%d)>",
        VAR_2, (int)VAR_1->start, (int)VAR_1->end);
    }
}
