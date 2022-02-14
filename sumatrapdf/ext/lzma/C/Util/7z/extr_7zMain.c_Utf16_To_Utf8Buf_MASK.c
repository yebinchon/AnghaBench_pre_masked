
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt16 ;
struct TYPE_4__ {scalar_t__* data; } ;
typedef int SRes ;
typedef TYPE_1__ CBuf ;
typedef scalar_t__ Bool ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__*,size_t*,int const*,size_t) ;

__attribute__((used)) static SRes FUNC_2(CBuf *VAR_3, const UInt16 *VAR_4, size_t VAR_5)
{
  size_t VAR_6 = 0;
  Bool VAR_7;
  FUNC_1(((void*)0), &VAR_6, VAR_4, VAR_5);
  VAR_6 += 1;
  if (!FUNC_0(VAR_3, VAR_6))
    return VAR_1;
  VAR_7 = FUNC_1(VAR_3->data, &VAR_6, VAR_4, VAR_5);
  VAR_3->data[VAR_6] = 0;
  return VAR_7 ? VAR_2 : VAR_0;
}
