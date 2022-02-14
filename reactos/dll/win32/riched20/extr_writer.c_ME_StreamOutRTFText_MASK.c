
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {scalar_t__ nDefaultCodePage; scalar_t__ nCodePage; } ;
typedef TYPE_1__ ME_OutStream ;
typedef int LONG ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*,int,char*) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,int ,int const*,int,char*,int,int *,int *) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static BOOL
FUNC_6(ME_OutStream *VAR_4, const WCHAR *VAR_5, LONG VAR_6)
{
  char VAR_7[VAR_3];
  int VAR_8 = 0;
  int VAR_9, VAR_10, VAR_11;

  if (VAR_6 == -1)
    VAR_6 = FUNC_3(VAR_5);

  while (VAR_6) {

    if (VAR_4->nDefaultCodePage == VAR_1) {

      VAR_9 = FUNC_4(VAR_6, VAR_3 / 6);
      VAR_10 = FUNC_2(VAR_1, 0, VAR_5, VAR_9, VAR_7,
                                   VAR_3, ((void*)0), ((void*)0));
      VAR_6 -= VAR_9;
      VAR_5 += VAR_9;
      for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
        if (VAR_7[VAR_11] == '{' || VAR_7[VAR_11] == '}' || VAR_7[VAR_11] == '\\') {
          if (!FUNC_1(VAR_4, "%.*s\\", VAR_11 - VAR_8, VAR_7 + VAR_8))
            return VAR_2;
          VAR_8 = VAR_11;
        }
      if (VAR_8 < VAR_10)
        if (!FUNC_0(VAR_4, VAR_7 + VAR_8, VAR_10 - VAR_8))
          return VAR_2;
      VAR_8 = 0;
    } else if (*VAR_5 < 128) {
      if (*VAR_5 == '{' || *VAR_5 == '}' || *VAR_5 == '\\')
        VAR_7[VAR_8++] = '\\';
      VAR_7[VAR_8++] = (char)(*VAR_5++);
      VAR_6--;
    } else {
      BOOL VAR_12 = VAR_2;
      char VAR_13[3];





      VAR_10 = FUNC_2(VAR_4->nCodePage, 0, VAR_5, 1,
                                   VAR_13, 3, ((void*)0),
                                   (VAR_4->nCodePage == VAR_0) ? ((void*)0) : &VAR_12);
      if (VAR_12)
        VAR_8 += FUNC_5(VAR_7 + VAR_8, "\\u%d?", (short)*VAR_5);
      else if ((BYTE)*VAR_13 < 128) {
        if (*VAR_13 == '{' || *VAR_13 == '}' || *VAR_13 == '\\')
          VAR_7[VAR_8++] = '\\';
        VAR_7[VAR_8++] = *VAR_13;
      } else {
         for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
           VAR_8 += FUNC_5(VAR_7 + VAR_8, "\\'%02x", (BYTE)VAR_13[VAR_11]);
      }
      VAR_5++;
      VAR_6--;
    }
    if (VAR_8 >= VAR_3 - 11) {
      if (!FUNC_0(VAR_4, VAR_7, VAR_8))
        return VAR_2;
      VAR_8 = 0;
    }
  }
  return FUNC_0(VAR_4, VAR_7, VAR_8);
}
