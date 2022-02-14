
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gdImagePtr ;
typedef TYPE_1__* gdFontPtr ;
struct TYPE_4__ {scalar_t__ w; } ;


 int FUNC_0 (int ,TYPE_1__*,int,int,unsigned char,int) ;
 int FUNC_1 (char*) ;

void FUNC_2 (gdImagePtr VAR_0, gdFontPtr VAR_1, int VAR_2, int VAR_3, unsigned char *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;
 VAR_7 = FUNC_1 ((char *) VAR_4);
 for (VAR_6 = 0; (VAR_6 < VAR_7); VAR_6++) {
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4[VAR_6], VAR_5);
  VAR_2 += VAR_1->w;
 }
}
