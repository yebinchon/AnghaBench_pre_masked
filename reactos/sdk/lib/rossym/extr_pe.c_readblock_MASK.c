
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_3__ {scalar_t__ data; int len; } ;
typedef TYPE_1__ DwarfBlock ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (void*,char*,int ) ;
 int FUNC_3 (void*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_1, DwarfBlock *VAR_2, ulong VAR_3, ulong VAR_4)
{
 VAR_2->data = FUNC_1(VAR_4);
 if(VAR_2->data == VAR_0)
  return -1;
 if(!FUNC_3(VAR_1, VAR_3, 0) || !FUNC_2(VAR_1, (char *)VAR_2->data, VAR_4)){
  FUNC_0(VAR_2->data);
  VAR_2->data = VAR_0;
  return -1;
 }
 VAR_2->len = VAR_4;
 return 0;
}
