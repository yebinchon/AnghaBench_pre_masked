
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nnn ;
typedef scalar_t__ int32 ;
struct TYPE_3__ {int state; char* buf; int count; } ;
typedef TYPE_1__ WORKSTATE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;



 int VAR_6 ;
 long FUNC_0 (char*,int *,int ) ;

__attribute__((used)) static int32
FUNC_1(WORKSTATE *VAR_7, int32 *VAR_8)
{
 char VAR_9[16];
 int VAR_10;

 *VAR_8 = 0;

 VAR_10 = 0;
 while (1)
 {
  if (VAR_10 >= sizeof(VAR_9))
   return VAR_2;
  switch (VAR_7->state)
  {
   case 129:
    VAR_10 = 0;
    if ((*(VAR_7->buf) >= '0' && *(VAR_7->buf) <= '9') ||
     *(VAR_7->buf) == '-')
    {
     VAR_7->state = 130;
     VAR_9[VAR_10++] = *(VAR_7->buf);
    }
    else if (*(VAR_7->buf) == '!')
    {
     (VAR_7->buf)++;
     *VAR_8 = (int32) '!';
     return VAR_4;
    }
    else if (*(VAR_7->buf) == '(')
    {
     VAR_7->count++;
     (VAR_7->buf)++;
     return VAR_3;
    }
    else if (*(VAR_7->buf) != ' ')
     return VAR_2;
    break;
   case 130:
    if (*(VAR_7->buf) >= '0' && *(VAR_7->buf) <= '9')
    {
     VAR_9[VAR_10++] = *(VAR_7->buf);
    }
    else
    {
     long VAR_11;

     VAR_9[VAR_10] = '\0';
     VAR_6 = 0;
     VAR_11 = FUNC_0(VAR_9, ((void*)0), 0);
     *VAR_8 = (int32) VAR_11;
     if (VAR_6 != 0 || (long) *VAR_8 != VAR_11)
      return VAR_2;
     VAR_7->state = 128;
     return (VAR_7->count && *(VAR_7->buf) == '\0')
      ? VAR_2 : VAR_5;
    }
    break;
   case 128:
    if (*(VAR_7->buf) == '&' || *(VAR_7->buf) == '|')
    {
     VAR_7->state = 129;
     *VAR_8 = (int32) *(VAR_7->buf);
     (VAR_7->buf)++;
     return VAR_4;
    }
    else if (*(VAR_7->buf) == ')')
    {
     (VAR_7->buf)++;
     VAR_7->count--;
     return (VAR_7->count < 0) ? VAR_2 : VAR_0;
    }
    else if (*(VAR_7->buf) == '\0')
     return (VAR_7->count) ? VAR_2 : VAR_1;
    else if (*(VAR_7->buf) != ' ')
     return VAR_2;
    break;
   default:
    return VAR_2;
    break;
  }
  (VAR_7->buf)++;
 }
}
