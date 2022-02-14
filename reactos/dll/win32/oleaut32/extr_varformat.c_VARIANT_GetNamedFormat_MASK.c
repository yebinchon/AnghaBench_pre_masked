
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int const* format; } ;
struct TYPE_5__ {int name; } ;
typedef TYPE_1__ NAMED_FORMAT ;
typedef int LPCWSTR ;
typedef TYPE_2__* LPCNAMED_FORMAT ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ,int ,int,int ) ;

__attribute__((used)) static inline const BYTE *FUNC_2(LPCWSTR VAR_2)
{
  NAMED_FORMAT VAR_3;
  LPCNAMED_FORMAT VAR_4;

  VAR_3.name = VAR_2;
  VAR_4 = FUNC_1(&VAR_3, VAR_1, FUNC_0(VAR_1),
                                 sizeof(NAMED_FORMAT), VAR_0);
  return VAR_4 ? VAR_4->format : ((void*)0);
}
