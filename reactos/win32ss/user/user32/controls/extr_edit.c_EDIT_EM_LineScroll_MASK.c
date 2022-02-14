
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int style; int char_width; } ;
typedef int INT ;
typedef TYPE_1__ EDITSTATE ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_1(EDITSTATE *VAR_2, INT VAR_3, INT VAR_4)
{
 if (!(VAR_2->style & VAR_0))
  return VAR_1;

 VAR_3 *= VAR_2->char_width;
 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
