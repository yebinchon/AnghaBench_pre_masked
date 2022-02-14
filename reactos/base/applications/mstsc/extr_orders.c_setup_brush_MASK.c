
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_9__ {int style; int* pattern; TYPE_1__* bd; } ;
struct TYPE_8__ {int * data; } ;
typedef TYPE_1__ BRUSHDATA ;
typedef TYPE_2__ BRUSH ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static void
FUNC_4(BRUSH * VAR_0, BRUSH * VAR_1)
{
 BRUSHDATA *VAR_2;
 uint8 VAR_3;
 uint8 VAR_4;

 FUNC_2(VAR_0, VAR_1, sizeof(BRUSH));
 if (VAR_0->style & 0x80)
 {
  VAR_4 = VAR_0->style & 0x0f;
  VAR_3 = VAR_0->pattern[0];
  VAR_2 = FUNC_0(VAR_4, VAR_3);
  if ((VAR_2 == ((void*)0)) || (VAR_2->data == ((void*)0)))
  {
   FUNC_1("error getting brush data, style %x\n", VAR_0->style);
   VAR_0->bd = ((void*)0);
   FUNC_3(VAR_0->pattern, 0, 8);
  }
  else
  {
   VAR_0->bd = VAR_2;
  }
  VAR_0->style = 3;
 }
}
