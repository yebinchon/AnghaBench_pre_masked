
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t len; size_t size; int * scratch; int * f; int * i; } ;
typedef TYPE_1__ pdf_lexbuf ;
typedef int fz_context ;
typedef int fz_buffer ;
 int FUNC_0 (int *,int *,char) ;
 int FUNC_1 (int *,int *,int *,size_t) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,char*,int *) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int *,TYPE_1__*) ;

void FUNC_6(fz_context *VAR_0, fz_buffer *VAR_1, int VAR_2, pdf_lexbuf *VAR_3)
{
 switch (VAR_2)
 {
 case 133:
  FUNC_3(VAR_0, VAR_1, "/%s", VAR_3->scratch);
  break;
 case 128:
  if (VAR_3->len >= VAR_3->size)
   FUNC_5(VAR_0, VAR_3);
  VAR_3->scratch[VAR_3->len] = 0;
  FUNC_2(VAR_0, VAR_1, VAR_3->scratch);
  break;
 case 130:
  FUNC_4(VAR_0, VAR_1, "<<");
  break;
 case 135:
  FUNC_4(VAR_0, VAR_1, ">>");
  break;
 case 132:
  FUNC_0(VAR_0, VAR_1, '[');
  break;
 case 137:
  FUNC_0(VAR_0, VAR_1, ']');
  break;
 case 131:
  FUNC_0(VAR_0, VAR_1, '{');
  break;
 case 136:
  FUNC_0(VAR_0, VAR_1, '}');
  break;
 case 134:
  FUNC_3(VAR_0, VAR_1, "%ld", VAR_3->i);
  break;
 case 129:
  FUNC_3(VAR_0, VAR_1, "%g", VAR_3->f);
  break;
 default:
  FUNC_1(VAR_0, VAR_1, VAR_3->scratch, VAR_3->len);
  break;
 }
}
