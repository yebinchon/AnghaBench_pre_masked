
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int checkfun ;
struct TYPE_5__ {int b_vars; int b_fnum; int * b_ffname; } ;
struct TYPE_4__ {TYPE_2__* buf; } ;
typedef int PyObject ;
typedef TYPE_1__ BufferObject ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,TYPE_2__*,int ,int *) ;
 int * FUNC_3 (char*) ;
 int * FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static PyObject *
FUNC_6(BufferObject *VAR_4, char *VAR_5)
{
    if (FUNC_5(VAR_5, "name") == 0)
 return FUNC_3((VAR_4->buf->b_ffname == ((void*)0)
        ? "" : (char *)VAR_4->buf->b_ffname));
    else if (FUNC_5(VAR_5, "number") == 0)
 return FUNC_4(VAR_2, VAR_4->buf->b_fnum);
    else if (FUNC_5(VAR_5, "vars") == 0)
 return FUNC_0(VAR_4->buf->b_vars);
    else if (FUNC_5(VAR_5, "options") == 0)
 return FUNC_2(VAR_3, VAR_4->buf, (checkfun) VAR_1,
   (PyObject *) VAR_4);
    else if (FUNC_5(VAR_5, "__members__") == 0)
 return FUNC_1(((void*)0), VAR_0);
    else
 return ((void*)0);
}
