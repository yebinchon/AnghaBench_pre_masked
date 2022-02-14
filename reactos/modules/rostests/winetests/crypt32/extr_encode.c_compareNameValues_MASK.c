
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int cbData; scalar_t__ pbData; } ;
struct TYPE_6__ {scalar_t__ dwValueType; TYPE_1__ Value; } ;
typedef TYPE_2__ CERT_NAME_VALUE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,char*,scalar_t__,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(const CERT_NAME_VALUE *VAR_2,
 const CERT_NAME_VALUE *VAR_3)
{
    if (VAR_2->dwValueType == VAR_1 &&
        VAR_3->dwValueType == VAR_0)
    {
        FUNC_3("Can't handle CERT_RDN_UTF8_STRING\n");
        return;
    }

    FUNC_2(VAR_3->dwValueType == VAR_2->dwValueType,
     "Expected string type %d, got %d\n", VAR_2->dwValueType,
     VAR_3->dwValueType);
    FUNC_2(VAR_3->Value.cbData == VAR_2->Value.cbData ||
     VAR_3->Value.cbData == VAR_2->Value.cbData - sizeof(WCHAR) ,
     "String type %d: unexpected data size, got %d, expected %d\n",
     VAR_2->dwValueType, VAR_3->Value.cbData, VAR_2->Value.cbData);
    if (VAR_3->Value.cbData && VAR_3->Value.pbData)
        FUNC_2(!FUNC_0(VAR_3->Value.pbData, VAR_2->Value.pbData,
         FUNC_1(VAR_3->Value.cbData, VAR_2->Value.cbData)),
         "String type %d: unexpected value\n", VAR_2->dwValueType);
}
