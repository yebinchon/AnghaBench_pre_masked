
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dec_enc; int encoding; } ;
struct TYPE_5__ {int buffer; TYPE_1__ af; } ;
typedef TYPE_2__ mpg123_handle ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(mpg123_handle *VAR_0)
{






 switch(VAR_0->af.dec_enc)
 {

 case 131:
  switch(VAR_0->af.encoding)
  {
  case 128:
   FUNC_4(&VAR_0->buffer);
  break;
  case 129:
   FUNC_4(&VAR_0->buffer);
   FUNC_0(&VAR_0->buffer);
  break;
  case 132:
   FUNC_0(&VAR_0->buffer);
  break;
  }
 break;


 case 133:
  switch(VAR_0->af.encoding)
  {
  case 130:
   FUNC_3(&VAR_0->buffer);
  break;

  case 134:
   FUNC_1(&VAR_0->buffer);
  break;


  case 131:
   FUNC_2(&VAR_0->buffer);
  break;
  case 128:
   FUNC_2(&VAR_0->buffer);
   FUNC_4(&VAR_0->buffer);
  break;
  case 129:
   FUNC_2(&VAR_0->buffer);
   FUNC_4(&VAR_0->buffer);
   FUNC_0(&VAR_0->buffer);
  break;
  case 132:
   FUNC_2(&VAR_0->buffer);
   FUNC_0(&VAR_0->buffer);
  break;

  }
 break;

 }
}
