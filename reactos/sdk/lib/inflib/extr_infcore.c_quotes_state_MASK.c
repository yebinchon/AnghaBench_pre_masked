
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {char* start; char const* end; } ;
typedef char WCHAR ;


 int FUNC_0 (struct parser*,char const*) ;
 int FUNC_1 (struct parser*) ;
 int FUNC_2 (struct parser*,char const*) ;

__attribute__((used)) static const WCHAR *FUNC_3( struct parser *VAR_0, const WCHAR *VAR_1 )
{
  const WCHAR *VAR_2, *VAR_3 = VAR_0->start;

  for (VAR_2 = VAR_1; !FUNC_0( VAR_0, VAR_2 ); VAR_2++)
    {
      if (*VAR_2 == '"')
        {
          if (VAR_2+1 < VAR_0->end && VAR_2[1] == '"')
            {
              FUNC_2( VAR_0, VAR_2 + 1 );
              VAR_0->start = VAR_3 = VAR_2 + 2;
              VAR_2++;
            }
          else
            {
              FUNC_2( VAR_0, VAR_2 );
              VAR_0->start = VAR_2 + 1;
              FUNC_1( VAR_0 );
              return VAR_2 + 1;
            }
        }
    }
  FUNC_2( VAR_0, VAR_2 );
  FUNC_1( VAR_0 );
  return VAR_2;
}
