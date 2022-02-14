
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int * PFIXED_INFO ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
  if (&FUNC_4) {
    DWORD VAR_4;
    ULONG VAR_5 = 0;

    VAR_4 = FUNC_4(((void*)0), ((void*)0));
    if (VAR_4 == VAR_2) {
      FUNC_5("GetNetworkParams is not supported\n");
      return;
    }
    FUNC_3(VAR_4 == VAR_1,
     "GetNetworkParams returned %d, expected ERROR_INVALID_PARAMETER\n",
     VAR_4);
    VAR_4 = FUNC_4(((void*)0), &VAR_5);
    FUNC_3(VAR_4 == VAR_0,
     "GetNetworkParams returned %d, expected ERROR_BUFFER_OVERFLOW\n",
     VAR_4);
    if (VAR_4 == VAR_0) {
      PFIXED_INFO VAR_6 = FUNC_1(FUNC_0(), 0, VAR_5);

      VAR_4 = FUNC_4(VAR_6, &VAR_5);
      FUNC_3(VAR_4 == VAR_3,
       "GetNetworkParams(buf, &dwSize) returned %d, expected NO_ERROR\n",
       VAR_4);
      FUNC_2(FUNC_0(), 0, VAR_6);
    }
  }
}
