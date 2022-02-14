
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
typedef char WCHAR ;
typedef size_t UINT ;
struct TYPE_2__ {size_t uDevType; scalar_t__ lpTable; } ;
typedef char const* LPCWSTR ;
typedef scalar_t__ HRSRC ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (int ,char const*,char const*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,size_t,char*,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_3 (scalar_t__,size_t) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char const*) ;
 int VAR_6 ;

__attribute__((used)) static UINT FUNC_7(UINT VAR_7)
{
    UINT VAR_8;
    WCHAR VAR_9[32];
    LPCWSTR VAR_10 = ((void*)0);


    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
 if (VAR_5[VAR_8].lpTable && VAR_5[VAR_8].uDevType == VAR_7)
     return VAR_8;
    }


    if (VAR_7 >= VAR_1 && VAR_7 <= VAR_2) {
 if (FUNC_2(VAR_6, VAR_7, VAR_9, sizeof(VAR_9) / sizeof(WCHAR))) {
     VAR_10 = VAR_9;
 }
    } else if (VAR_7 == 0) {
        static const WCHAR VAR_11[] = {'C','O','R','E',0};
 VAR_10 = VAR_11;
    }
    VAR_8 = VAR_3;
    if (VAR_10) {
 HRSRC VAR_12 = FUNC_0(VAR_6, VAR_10, (LPCWSTR)VAR_4);
 HANDLE VAR_13 = 0;

 if (VAR_12) VAR_13 = FUNC_1(VAR_6, VAR_12);
 if (VAR_13) {
     VAR_8 = FUNC_3(VAR_13, VAR_7);
 } else {
     FUNC_5("No command table found in resource %p[%s]\n",
   VAR_6, FUNC_6(VAR_10));
 }
    }
    FUNC_4("=> %d\n", VAR_8);
    return VAR_8;
}
