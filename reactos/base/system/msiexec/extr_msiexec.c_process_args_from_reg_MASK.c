
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 char* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,char const*,int ,scalar_t__*,int ,scalar_t__*) ;
 int VAR_5 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,int*,char***) ;

__attribute__((used)) static BOOL FUNC_9( const WCHAR *VAR_6, int *VAR_7, WCHAR ***VAR_8 )
{
 LONG VAR_9;
 HKEY VAR_10;
 DWORD VAR_11 = 0, VAR_12 = 0;
 WCHAR *VAR_13;
 BOOL VAR_14 = VAR_1;

 VAR_9 = FUNC_4(VAR_2, VAR_3, &VAR_10);
 if(VAR_9 != VAR_0)
  return VAR_1;
 VAR_9 = FUNC_5(VAR_10, VAR_6, 0, &VAR_12, 0, &VAR_11);
 if(VAR_9 == VAR_0 && VAR_12 == VAR_4)
 {
  int VAR_15 = FUNC_6( *VAR_8[0] );
  if (!(VAR_13 = FUNC_1( FUNC_0(), 0, VAR_11 + (VAR_15 + 1) * sizeof(WCHAR) )))
  {
   FUNC_3( VAR_10 );
   return VAR_1;
  }
  FUNC_7( VAR_13, *VAR_8[0], VAR_15 * sizeof(WCHAR) );
  VAR_13[VAR_15++] = ' ';
  VAR_9 = FUNC_5(VAR_10, VAR_6, 0, &VAR_12, (LPBYTE)(VAR_13 + VAR_15), &VAR_11);
  if( VAR_9 == VAR_0 )
  {
   FUNC_8(VAR_13, VAR_7, VAR_8);
   VAR_14 = VAR_5;
  }
  FUNC_2(FUNC_0(), 0, VAR_13);
 }
 FUNC_3(VAR_10);
 return VAR_14;
}
