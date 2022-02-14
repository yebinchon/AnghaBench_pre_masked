
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* io_channel ;
typedef int errcode_t ;
struct TYPE_6__ {scalar_t__ refcount; struct TYPE_6__* buffer; int * handle; struct TYPE_6__* name; scalar_t__ private_data; } ;
typedef TYPE_1__* PNT_PRIVATE_DATA ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static errcode_t FUNC_3(io_channel VAR_2)
{
 PNT_PRIVATE_DATA VAR_3 = ((void*)0);

 if (VAR_2 == ((void*)0))
  return 0;

 FUNC_1(VAR_2, VAR_0);
 VAR_3 = (PNT_PRIVATE_DATA) VAR_2->private_data;
 FUNC_1(VAR_3, VAR_1);

 if (--VAR_2->refcount > 0)
  return 0;

 FUNC_2(VAR_2->name);
 FUNC_2(VAR_2);

 if (VAR_3 != ((void*)0)) {
  if (VAR_3->handle != ((void*)0))
   FUNC_0(VAR_3->handle);
  FUNC_2(VAR_3->buffer);
  FUNC_2(VAR_3);
 }

 return 0;
}
