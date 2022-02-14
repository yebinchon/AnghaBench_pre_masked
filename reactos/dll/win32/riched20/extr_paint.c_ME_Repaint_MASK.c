
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int texthost; } ;
typedef TYPE_1__ ME_TextEditor ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;

void FUNC_4(ME_TextEditor *VAR_1)
{
  if (FUNC_3(VAR_1))
  {
    FUNC_2(VAR_1);
    FUNC_0("ME_Repaint had to call ME_WrapMarkedParagraphs\n");
  }
  FUNC_1(VAR_1->texthost, VAR_0);
}
