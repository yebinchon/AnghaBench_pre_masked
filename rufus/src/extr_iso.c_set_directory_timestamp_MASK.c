
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPFILETIME ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (char*,int,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char*,int ) ;

__attribute__((used)) static void __inline FUNC_5(char* VAR_6, LPFILETIME VAR_7, LPFILETIME VAR_8, LPFILETIME VAR_9)
{
 HANDLE VAR_10 = FUNC_0(VAR_6, VAR_2 | VAR_3,
  VAR_1, ((void*)0), VAR_5, VAR_0, ((void*)0));
 if ((VAR_10 == VAR_4) || (!FUNC_1(VAR_10, VAR_7, VAR_8, VAR_9)))
  FUNC_4("  Could not set timestamp for directory '%s': %s", VAR_6, FUNC_2());
 FUNC_3(VAR_10);
}
