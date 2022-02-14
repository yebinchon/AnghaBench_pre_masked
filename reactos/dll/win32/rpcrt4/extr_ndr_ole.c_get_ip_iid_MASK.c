
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ MaxCount; } ;
typedef TYPE_1__* PMIDL_STUB_MESSAGE ;
typedef scalar_t__* PFORMAT_STRING ;
typedef int IID ;


 int FUNC_0 (TYPE_1__*,unsigned char*,scalar_t__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,scalar_t__) ;
 int const VAR_2 ;
 int FUNC_2 (char*,scalar_t__,...) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static const IID* FUNC_4(PMIDL_STUB_MESSAGE VAR_3, unsigned char *VAR_4, PFORMAT_STRING VAR_5)
{
  const IID *VAR_6;
  if (!VAR_5) return &VAR_2;
  FUNC_2("format=%02x %02x\n", VAR_5[0], VAR_5[1]);
  if (VAR_5[0] != VAR_1) FUNC_1("format=%d\n", VAR_5[0]);
  if (VAR_5[1] == VAR_0) {
    VAR_6 = (const IID *)&VAR_5[2];
  } else {
    FUNC_0(VAR_3, VAR_4, VAR_5+2, 0);
    VAR_6 = (const IID *)VAR_3->MaxCount;
  }
  if (!VAR_6) VAR_6 = &VAR_2;
  FUNC_2("got %s\n", FUNC_3(VAR_6));
  return VAR_6;
}
