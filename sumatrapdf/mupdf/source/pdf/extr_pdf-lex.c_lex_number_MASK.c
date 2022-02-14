
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* scratch; int size; int i; int f; } ;
typedef TYPE_1__ pdf_lexbuf ;
typedef int fz_stream ;
typedef int fz_context ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int
FUNC_5(fz_context *VAR_3, fz_stream *VAR_4, pdf_lexbuf *VAR_5, int VAR_6)
{
 char *VAR_7 = VAR_5->scratch;
 char *VAR_8 = VAR_5->scratch + VAR_5->size - 1;
 char *VAR_9 = (VAR_6 == '.' ? VAR_7 : ((void*)0));
 int VAR_10 = (VAR_6 == '-');
 int VAR_11 = 0;

 *VAR_7++ = VAR_6;

 VAR_6 = FUNC_4(VAR_3, VAR_4);


 if (VAR_10)
 {
  while (VAR_6 == '-')
   VAR_6 = FUNC_4(VAR_3, VAR_4);
 }

 while (VAR_7 < VAR_8)
 {
  switch (VAR_6)
  {
  case 129:
  case 130:
   FUNC_3(VAR_3, VAR_4);
   goto end;
  case 131:
   goto end;
  case '.':
   if (VAR_9)
    VAR_11 = 1;
   VAR_9 = VAR_7;
   *VAR_7++ = VAR_6;
   break;
  case 128:
   *VAR_7++ = VAR_6;
   break;
  default:
   VAR_11 = 1;
   *VAR_7++ = VAR_6;
   break;
  }
  VAR_6 = FUNC_4(VAR_3, VAR_4);
 }

end:
 *VAR_7 = '\0';
 if (VAR_11)
  return VAR_0;
 if (VAR_9)
 {





  if (VAR_10 > 1 || VAR_9 - VAR_5->scratch >= 10)
   VAR_5->f = FUNC_0(VAR_5->scratch);
  else
   VAR_5->f = FUNC_2(VAR_5->scratch);
  return VAR_2;
 }
 else
 {
  VAR_5->i = FUNC_1(VAR_5->scratch);
  return VAR_1;
 }
}
