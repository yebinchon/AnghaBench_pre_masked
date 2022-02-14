
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ PWSTR ;
typedef char const* PCWSTR ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static inline PWSTR FUNC_4(PCWSTR VAR_1)
{
 static const WCHAR VAR_2[] = {
                'S','o','f','t','w','a','r','e','\\',
                'M','i','c','r','o','s','o','f','t','\\',
                'C','r','y','p','t','o','g','r','a','p','h','y','\\',
                'D','e','f','a','u','l','t','s','\\',
                'P','r','o','v','i','d','e','r','\\',0
 };
 PWSTR VAR_3;

 VAR_3 = FUNC_0((FUNC_3(VAR_2) + FUNC_3(VAR_1) +1)*sizeof(WCHAR));
 if (VAR_3)
 {
  FUNC_2(VAR_3, VAR_2);
  FUNC_2(VAR_3 + FUNC_3(VAR_2), VAR_1);
 } else
  FUNC_1(VAR_0);
 return VAR_3;
}
