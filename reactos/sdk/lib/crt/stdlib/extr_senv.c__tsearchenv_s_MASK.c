
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char _TCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int,char*,int *) ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ) ;
 int* FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char const*) ;
 int FUNC_12 (char*,char*,int) ;

int FUNC_13(const _TCHAR* VAR_5, const _TCHAR* VAR_6, _TCHAR *VAR_7, size_t VAR_8)
{
  _TCHAR *VAR_9, *VAR_10;
  _TCHAR VAR_11[VAR_4];

  if (!FUNC_3(VAR_5 != ((void*)0)) || !FUNC_3(VAR_7 != ((void*)0)) ||
      !FUNC_3(VAR_8 > 0))
  {
      *FUNC_6() = VAR_0;
      return VAR_0;
  }

  *VAR_7 = '\0';


  if (FUNC_0( VAR_5 ) != VAR_3)
  {
    FUNC_1( VAR_5, VAR_4, VAR_7, ((void*)0) );
    FUNC_5(FUNC_2());
    return 0;
  }


  VAR_9 = FUNC_11(VAR_6);
  if (!VAR_9)
  {
    FUNC_7(VAR_1);
    return VAR_1;
  }

  VAR_10 = VAR_9;

  do
  {
    _TCHAR *VAR_12 = VAR_10;

    while(*VAR_12 && *VAR_12 != ';') VAR_12++;
    if (VAR_10 == VAR_12 || !*VAR_10)
    {
      FUNC_7(VAR_1);
      return VAR_1;
    }
    FUNC_12(VAR_11, VAR_10, (VAR_12 - VAR_10) * sizeof(_TCHAR));
    if (VAR_11[VAR_12 - VAR_10] != '/' && VAR_11[VAR_12 - VAR_10] != '\\')
    {
      VAR_11[VAR_12 - VAR_10] = '\\';
      VAR_11[VAR_12 - VAR_10 + 1] = '\0';
    }
    else
      VAR_11[VAR_12 - VAR_10] = '\0';

    FUNC_8(VAR_11, VAR_5);
    if (FUNC_0( VAR_11 ) != VAR_3)
    {
      if (FUNC_10(VAR_11) + 1 > VAR_8)
      {
          FUNC_4("buf[count] is too small", VAR_2);
          return VAR_2;
      }
      FUNC_9(VAR_7, VAR_11);
      return 0;
    }
    VAR_10 = *VAR_12 ? VAR_12 + 1 : VAR_12;
  } while(1);

}
