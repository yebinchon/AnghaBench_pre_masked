
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t line_position; char* line; int done; int len; int prmt; } ;
typedef TYPE_1__ lua_Load ;


 scalar_t__ VAR_0 ;
 char VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (char) ;

__attribute__((used)) static bool FUNC_4(lua_Load *VAR_5){

  bool VAR_6 = 0;
  char VAR_7;
  while (FUNC_1(&VAR_7))
  {
    if(VAR_3)
    {
      char VAR_8 = VAR_1;

      VAR_1 = '\0';



      if ((VAR_7 == '\r' && VAR_8 == '\n') ||
          (VAR_7 == '\n' && VAR_8 == '\r'))
      {
        continue;
      }


      else if (VAR_7 == 0x7f || VAR_7 == 0x08)
      {
        if (VAR_5->line_position > 0)
        {
          if(VAR_4) FUNC_3(0x08);
          if(VAR_4) FUNC_3(' ');
          if(VAR_4) FUNC_3(0x08);
          VAR_5->line_position--;
        }
        VAR_5->line[VAR_5->line_position] = 0;
        continue;
      }
      if (VAR_7 == '\r' || VAR_7 == '\n')
      {
        VAR_1 = VAR_7;

        VAR_5->line[VAR_5->line_position] = 0;
        if(VAR_4) FUNC_3('\n');
        FUNC_2(VAR_5->line, VAR_5->line_position);
        if (VAR_5->line_position == 0)
        {

          FUNC_0(VAR_5->prmt);
          continue;
        } else {
          VAR_5->done = 1;
          VAR_6 = 1;
          break;
        }
      }
      if(VAR_4) FUNC_3(VAR_7);


      if ( VAR_5->line_position + 1 >= VAR_5->len ){
        VAR_5->line_position = 0;
      }
    }

    VAR_5->line[VAR_5->line_position] = VAR_7;
    VAR_5->line_position++;

    if(!VAR_3)
    {
      if( ((VAR_2!=0) && (VAR_5->line_position >= VAR_2)) || (VAR_5->line_position >= VAR_5->len) || ((VAR_0>=0) && ((unsigned char)VAR_7==(unsigned char)VAR_0)) )


      {
        FUNC_2(VAR_5->line, VAR_5->line_position);
        VAR_5->line_position = 0;
      }
    }

    VAR_7 = 0;
  }

  if( (VAR_5->line_position > 0) && (!VAR_3) && (VAR_2==0) && (VAR_0<0) )
  {
    FUNC_2(VAR_5->line, VAR_5->line_position);
    VAR_5->line_position = 0;
  }

  return VAR_6;
}
