
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bottom; int top; } ;
struct TYPE_7__ {int style; int y_offset; int line_count; int line_height; TYPE_1__ format_rect; } ;
typedef int LRESULT ;
typedef int INT ;
typedef TYPE_2__ EDITSTATE ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;




 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static LRESULT FUNC_4(EDITSTATE *VAR_3, INT VAR_4)
{
 INT VAR_5;

 if (!(VAR_3->style & VAR_0))
  return (LRESULT)VAR_1;

 VAR_5 = 0;

 switch (VAR_4) {
 case 130:
  if (VAR_3->y_offset)
   VAR_5 = -1;
  break;
 case 131:
  if (VAR_3->y_offset < VAR_3->line_count - 1)
   VAR_5 = 1;
  break;
 case 128:
  if (VAR_3->y_offset)
   VAR_5 = -(VAR_3->format_rect.bottom - VAR_3->format_rect.top) / VAR_3->line_height;
  break;
 case 129:
  if (VAR_3->y_offset < VAR_3->line_count - 1)
   VAR_5 = (VAR_3->format_rect.bottom - VAR_3->format_rect.top) / VAR_3->line_height;
  break;
 default:
  return (LRESULT)VAR_1;
 }
 if (VAR_5) {
     INT VAR_6 = FUNC_2(VAR_3);

     if(VAR_3->y_offset + VAR_5 > VAR_3->line_count - VAR_6)
  VAR_5 = FUNC_3(VAR_3->line_count - VAR_6, 0) - VAR_3->y_offset;


     if(VAR_5) {
  FUNC_0(VAR_3, 0, VAR_5);
  return FUNC_1(VAR_5, VAR_2);
     }

 }
 return (LRESULT)VAR_1;
}
