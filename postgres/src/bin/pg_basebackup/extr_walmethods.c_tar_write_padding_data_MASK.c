
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int TarMethodFile ;
struct TYPE_2__ {int data; } ;
typedef TYPE_1__ PGAlignedXLogBlock ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ,size_t) ;

__attribute__((used)) static bool
FUNC_3(TarMethodFile *VAR_1, size_t VAR_2)
{
 PGAlignedXLogBlock VAR_3;
 size_t VAR_4 = VAR_2;

 FUNC_1(VAR_3.data, 0, VAR_0);
 while (VAR_4)
 {
  size_t VAR_5 = FUNC_0(VAR_4, VAR_0);
  ssize_t VAR_6 = FUNC_2(VAR_1, VAR_3.data, VAR_5);

  if (VAR_6 < 0)
   return 0;
  VAR_4 -= VAR_6;
 }

 return 1;
}
