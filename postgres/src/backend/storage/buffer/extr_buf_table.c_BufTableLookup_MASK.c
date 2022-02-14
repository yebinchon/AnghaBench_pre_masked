
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int id; } ;
typedef int BufferTag ;
typedef TYPE_1__ BufferLookupEnt ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,void*,int ,int ,int *) ;

int
FUNC_1(BufferTag *VAR_2, uint32 VAR_3)
{
 BufferLookupEnt *VAR_4;

 VAR_4 = (BufferLookupEnt *)
  FUNC_0(VAR_1,
         (void *) VAR_2,
         VAR_3,
         VAR_0,
         ((void*)0));

 if (!VAR_4)
  return -1;

 return VAR_4->id;
}
