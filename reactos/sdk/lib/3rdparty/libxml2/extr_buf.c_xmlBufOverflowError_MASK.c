
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlBufPtr ;
struct TYPE_3__ {scalar_t__ error; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int *,int *,char const*) ;

__attribute__((used)) static void
FUNC_1(xmlBufPtr VAR_2, const char *VAR_3)
{
    FUNC_0(VAR_1, VAR_0, ((void*)0), ((void*)0), VAR_3);
    if ((VAR_2) && (VAR_2->error == 0))
        VAR_2->error = VAR_0;
}
