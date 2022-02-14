
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uLong ;
struct zip_cdir {int size; int offset; TYPE_1__* comment; } ;
struct zip {int flags; int * zp; } ;
struct TYPE_2__ {scalar_t__ raw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int ,scalar_t__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (char const*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_5(struct zip *VAR_5, const struct zip_cdir *VAR_6)
{
    uLong VAR_7, VAR_8;
    char VAR_9[8+1];
    char *VAR_10;

    if (VAR_5->zp == ((void*)0) || VAR_6 == ((void*)0))
 return;

    if (FUNC_1(VAR_6->comment) != VAR_1+8
 || FUNC_3((const char *)VAR_6->comment->raw, VAR_0, VAR_1) != 0)
 return;

    FUNC_2(VAR_9, VAR_6->comment->raw+VAR_1, 8);
    VAR_9[8] = '\0';
    VAR_4 = 0;
    VAR_8 = FUNC_4(VAR_9, &VAR_10, 16);
    if ((VAR_8 == VAR_2 && VAR_4 != 0) || (VAR_10 && *VAR_10))
 return;

    if (FUNC_0(VAR_5->zp, VAR_6->offset, VAR_6->size, &VAR_7, ((void*)0)) < 0)
 return;

    if (VAR_7 == VAR_8)
 VAR_5->flags |= VAR_3;
}
