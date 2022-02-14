
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int cache; int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int* VAR_0 ;

int FUNC_5(int VAR_1, mbfl_convert_filter * VAR_2)
{
 int VAR_3;

 switch(VAR_2->status) {
  case 132:

   if (VAR_2->cache == 0 && VAR_1 == 'b')
   {
    VAR_2->status = 131;
    VAR_2->cache = 1;
   }
   else if (VAR_1 == '\n')
    VAR_2->cache = 0;
   else
    VAR_2->cache++;
   break;
  case 131:
   if (VAR_0[VAR_2->cache++] != VAR_1) {

    VAR_2->status = 132;
    break;
   }
   if (VAR_2->cache == 5)
   {

    VAR_2->status = 128;
    VAR_2->cache = 0;
   }
   break;
  case 128:
   if (VAR_1 == '\n')
    VAR_2->status = 130;
   break;
  case 130:

   VAR_3 = FUNC_1(VAR_1);
   VAR_2->cache = VAR_3 << 24;
   VAR_2->status = 136;
   break;
  case 136:

   VAR_3 = FUNC_1(VAR_1);
   VAR_2->cache |= (VAR_3 << 16);
   VAR_2->status = 135;
   break;
  case 135:

   VAR_3 = FUNC_1(VAR_1);
   VAR_2->cache |= (VAR_3 << 8);
   VAR_2->status = 134;
   break;
  case 134:

   VAR_3 = FUNC_1(VAR_1);
   VAR_2->cache |= VAR_3;
   VAR_2->status = 133;
   break;
  case 133:

   {
    int VAR_4, VAR_5, VAR_6, VAR_7 = FUNC_1(VAR_1);
    VAR_4 = (VAR_2->cache >> 16) & 0xff;
    VAR_5 = (VAR_2->cache >> 8) & 0xff;
    VAR_6 = (VAR_2->cache) & 0xff;
    VAR_3 = (VAR_2->cache >> 24) & 0xff;
    if (VAR_3-- > 0)
     FUNC_0((*VAR_2->output_function)( (VAR_4 << 2) | (VAR_5 >> 4), VAR_2->data));
    if (VAR_3-- > 0)
     FUNC_0((*VAR_2->output_function)( (VAR_5 << 4) | (VAR_6 >> 2), VAR_2->data));
    if (VAR_3-- > 0)
     FUNC_0((*VAR_2->output_function)( (VAR_6 << 6) | VAR_7, VAR_2->data));
    VAR_2->cache = VAR_3 << 24;

    if (VAR_3 == 0)
     VAR_2->status = 129;
    else
     VAR_2->status = 136;
   }
   break;
  case 129:

   VAR_2->status = 130;
 }
 return VAR_1;
}
