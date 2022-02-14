
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
  if (&FUNC_1) {
    DWORD VAR_3, VAR_4;


    if (0) {
      VAR_3 = FUNC_1(((void*)0));
      if (VAR_3 == VAR_1)
        return;
      FUNC_0(VAR_3 == VAR_0,
       "GetNumberOfInterfaces(NULL) returned %d, expected ERROR_INVALID_PARAMETER\n",
       VAR_3);
    }

    VAR_3 = FUNC_1(&VAR_4);
    if (VAR_3 == VAR_1) {
      FUNC_2("GetNumberOfInterfaces is not supported\n");
      return;
    }
    FUNC_0(VAR_3 == VAR_2,
     "GetNumberOfInterfaces returned %d, expected 0\n", VAR_3);
  }
}
