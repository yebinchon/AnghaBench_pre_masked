
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* scratch; int len; int size; } ;
typedef TYPE_1__ pdf_lexbuf ;
typedef int fz_stream ;
typedef int fz_context ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*) ;
 char FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_0, fz_stream *VAR_1, pdf_lexbuf *VAR_2)
{
 char *VAR_3 = VAR_2->scratch;
 char *VAR_4 = VAR_3 + FUNC_0(127, VAR_2->size);
 int VAR_5;

 while (1)
 {
  if (VAR_3 == VAR_4)
  {
   if (VAR_4 - VAR_2->scratch < 127)
   {
    VAR_3 += FUNC_5(VAR_0, VAR_2);
    VAR_4 = VAR_2->scratch + FUNC_0(127, VAR_2->size);
   }
   else
   {

    FUNC_3(VAR_0, "name is too long");
    *VAR_3 = 0;
    VAR_2->len = VAR_3 - VAR_2->scratch;
    VAR_3 = ((void*)0);
   }
  }
  VAR_5 = FUNC_4(VAR_0, VAR_1);
  switch (VAR_5)
  {
  case 131:
  case 132:
   FUNC_2(VAR_0, VAR_1);
   goto end;
  case 133:
   goto end;
  case '#':
  {
   int VAR_6[2];
   int VAR_7;
   for (VAR_7 = 0; VAR_7 < 2; VAR_7++)
   {
    VAR_5 = FUNC_1(VAR_0, VAR_1);
    switch (VAR_5)
    {
    case 130:
     if (VAR_7 == 1 && VAR_5 == '0' && VAR_6[0] == 0)
      goto illegal;
     VAR_6[VAR_7] = FUNC_4(VAR_0, VAR_1) - '0';
     break;
    case 128:
     VAR_6[VAR_7] = FUNC_4(VAR_0, VAR_1) - 'a' + 10;
     break;
    case 129:
     VAR_6[VAR_7] = FUNC_4(VAR_0, VAR_1) - 'A' + 10;
     break;
    default:
    case 133:
     goto illegal;
    }
   }
   if (VAR_3) *VAR_3++ = (VAR_6[0] << 4) + VAR_6[1];
   break;
illegal:
   if (VAR_7 == 1)
    FUNC_2(VAR_0, VAR_1);
   if (VAR_3) *VAR_3++ = '#';
   continue;
  }
  default:
   if (VAR_3) *VAR_3++ = VAR_5;
   break;
  }
 }
end:
 if (VAR_3)
 {
  *VAR_3 = '\0';
  VAR_2->len = VAR_3 - VAR_2->scratch;
 }
}
