
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zip_uint64_t ;
struct zip_cdir {scalar_t__ nentry; scalar_t__ entry; int comment; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct zip_cdir*) ;

void
FUNC_3(struct zip_cdir *VAR_0)
{
    zip_uint64_t VAR_1;

    if (!VAR_0)
 return;

    for (VAR_1=0; VAR_1<VAR_0->nentry; VAR_1++)
 FUNC_0(VAR_0->entry+VAR_1);
    FUNC_2(VAR_0->entry);
    FUNC_1(VAR_0->comment);
    FUNC_2(VAR_0);
}
