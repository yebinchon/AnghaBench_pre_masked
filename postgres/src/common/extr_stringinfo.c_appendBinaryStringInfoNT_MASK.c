
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (scalar_t__,char const*,int) ;

void
FUNC_3(StringInfo VAR_0, const char *VAR_1, int VAR_2)
{
 FUNC_0(VAR_0 != ((void*)0));


 FUNC_1(VAR_0, VAR_2);


 FUNC_2(VAR_0->data + VAR_0->len, VAR_1, VAR_2);
 VAR_0->len += VAR_2;
}
