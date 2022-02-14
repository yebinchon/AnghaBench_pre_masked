
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int state; int (* seek ) (int *,int ,int ,int) ;} ;
typedef TYPE_1__ fz_output ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ,int ,int) ;

void
FUNC_3(fz_context *VAR_1, fz_output *VAR_2, int64_t VAR_3, int VAR_4)
{
 if (VAR_2->seek == ((void*)0))
  FUNC_1(VAR_1, VAR_0, "Cannot seek in unseekable output stream\n");
 FUNC_0(VAR_1, VAR_2);
 VAR_2->seek(VAR_1, VAR_2->state, VAR_3, VAR_4);
}
