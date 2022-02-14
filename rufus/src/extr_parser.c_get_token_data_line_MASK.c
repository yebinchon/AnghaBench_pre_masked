
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int const*,scalar_t__) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int*,int ) ;
 int VAR_2 ;

__attribute__((used)) static wchar_t* FUNC_3(const wchar_t* VAR_3, wchar_t* VAR_4)
{
 size_t VAR_5, VAR_6;
 BOOLEAN VAR_7 = VAR_0;
 BOOLEAN VAR_8 = VAR_0;

 if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)) || (VAR_4[0] == 0))
  return ((void*)0);

 VAR_5 = 0;


 VAR_5 += FUNC_2(&VAR_4[VAR_5], VAR_2);
 if (VAR_4[VAR_5] == L'<')
  VAR_5++;
 VAR_5 += FUNC_2(&VAR_4[VAR_5], VAR_2);


 if (FUNC_0(&VAR_4[VAR_5], VAR_3, FUNC_1(VAR_3)) != 0)
  return ((void*)0);


 VAR_5 += FUNC_1(VAR_3);


 VAR_5 += FUNC_2(&VAR_4[VAR_5], VAR_2);


 if (VAR_4[VAR_5] == L'>')
  VAR_8 = VAR_1;
 else if (VAR_4[VAR_5] != L'=')
  return ((void*)0);
 VAR_5++;


 VAR_5 += FUNC_2(&VAR_4[VAR_5], VAR_2);


 if (VAR_4[VAR_5] == L'"') {
  VAR_7 = VAR_1;
  VAR_5++;
 }


 VAR_6 = VAR_5;


 while ( (VAR_4[VAR_5] != 0) && (((VAR_4[VAR_5] != L'"') && (VAR_4[VAR_5] != L'<')) || ((VAR_4[VAR_5] == L'"') && (!VAR_7)) || ((VAR_4[VAR_5] == L'<') && (!VAR_8))) )
  VAR_5++;
 VAR_4[VAR_5--] = 0;


 while ((VAR_5>=VAR_6) && ((VAR_4[VAR_5] == L'\r') || (VAR_4[VAR_5] == L'\n')))
  VAR_4[VAR_5--] = 0;

 return (VAR_4[VAR_6] == 0)?((void*)0):&VAR_4[VAR_6];
}
