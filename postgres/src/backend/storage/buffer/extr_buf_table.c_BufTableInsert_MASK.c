
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {scalar_t__ blockNum; } ;
typedef TYPE_1__ BufferTag ;
typedef TYPE_2__ BufferLookupEnt ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,void*,int ,int ,int*) ;

int
FUNC_2(BufferTag *VAR_3, uint32 VAR_4, int VAR_5)
{
 BufferLookupEnt *VAR_6;
 bool VAR_7;

 FUNC_0(VAR_5 >= 0);
 FUNC_0(VAR_3->blockNum != VAR_1);

 VAR_6 = (BufferLookupEnt *)
  FUNC_1(VAR_2,
         (void *) VAR_3,
         VAR_4,
         VAR_0,
         &VAR_7);

 if (VAR_7)
  return VAR_6->id;

 VAR_6->id = VAR_5;

 return -1;
}
