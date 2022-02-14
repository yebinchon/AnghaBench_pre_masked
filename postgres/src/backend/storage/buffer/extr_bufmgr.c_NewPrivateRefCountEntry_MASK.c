
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ refcount; int buffer; } ;
typedef TYPE_1__ PrivateRefCountEntry ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static PrivateRefCountEntry *
FUNC_1(Buffer VAR_1)
{
 PrivateRefCountEntry *VAR_2;


 FUNC_0(VAR_0 != ((void*)0));


 VAR_2 = VAR_0;
 VAR_0 = ((void*)0);


 VAR_2->buffer = VAR_1;
 VAR_2->refcount = 0;

 return VAR_2;
}
