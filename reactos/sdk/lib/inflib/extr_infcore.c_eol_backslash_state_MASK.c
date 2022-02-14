
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int const* start; int line_pos; } ;
typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct parser*,int const*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (struct parser*) ;
 int FUNC_3 (struct parser*,int ) ;
 int FUNC_4 (struct parser*,int const*) ;
 int FUNC_5 (struct parser*,int ) ;

__attribute__((used)) static const WCHAR *FUNC_6( struct parser *VAR_3, const WCHAR *VAR_4 )
{
  const WCHAR *VAR_5;

  for (VAR_5 = VAR_4; !FUNC_0( VAR_3, VAR_5 ); VAR_5++)
    {
      switch(*VAR_5)
        {
          case '\r':
            continue;

          case '\n':
            VAR_3->line_pos++;
            VAR_3->start = VAR_5 + 1;
            FUNC_5( VAR_3, VAR_2 );
            return VAR_5 + 1;

          case '\\':
            continue;

          case ';':
            FUNC_3( VAR_3, VAR_1 );
            FUNC_5( VAR_3, VAR_0 );
            return VAR_5 + 1;

          default:
            if (FUNC_1(*VAR_5))
              continue;
            FUNC_4( VAR_3, VAR_5 );
            FUNC_2( VAR_3 );
            return VAR_5;
        }
    }
  VAR_3->start = VAR_5;
  FUNC_2( VAR_3 );

  return VAR_5;
}
