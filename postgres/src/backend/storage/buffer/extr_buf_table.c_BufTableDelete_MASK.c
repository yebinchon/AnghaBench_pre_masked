
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int BufferTag ;
typedef int BufferLookupEnt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,void*,int ,int ,int *) ;

void
FUNC_2(BufferTag *VAR_3, uint32 VAR_4)
{
 BufferLookupEnt *VAR_5;

 VAR_5 = (BufferLookupEnt *)
  FUNC_1(VAR_2,
         (void *) VAR_3,
         VAR_4,
         VAR_1,
         ((void*)0));

 if (!VAR_5)
  FUNC_0(VAR_0, "shared buffer hash table corrupted");
}
