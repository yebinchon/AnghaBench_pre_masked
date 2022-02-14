
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ulong ;
typedef int u64int ;
typedef int schar ;
typedef int s64int ;
typedef int s32int ;
typedef int s16int ;
struct TYPE_13__ {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_12__ {int * d; scalar_t__ ep; scalar_t__ p; } ;
typedef TYPE_1__ DwarfBuf ;
typedef TYPE_2__ DwarfBlock ;
typedef int Dwarf ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_8(Dwarf *VAR_2, DwarfBlock *VAR_3, ulong *VAR_4)
{
 DwarfBuf VAR_5;

 FUNC_7(&VAR_5, 0, sizeof VAR_5);
 VAR_5.p = VAR_3->data;
 VAR_5.ep = VAR_3->data+VAR_3->len;
 VAR_5.d = VAR_2;

 switch(FUNC_0(&VAR_5)){
 case 139:
  *VAR_4 = FUNC_6(&VAR_5);
  return VAR_1;
 case 137:
  *VAR_4 = FUNC_0(&VAR_5);
  return VAR_1;
 case 138:
  *VAR_4 = (schar)FUNC_0(&VAR_5);
  return VAR_1;
 case 135:
  *VAR_4 = FUNC_3(&VAR_5);
  return VAR_1;
 case 136:
  *VAR_4 = (s16int)FUNC_3(&VAR_5);
  return VAR_1;
 case 133:
  *VAR_4 = FUNC_4(&VAR_5);
  return VAR_1;
 case 134:
  *VAR_4 = (s32int)FUNC_4(&VAR_5);
  return VAR_1;
 case 131:
  *VAR_4 = (u64int)FUNC_5(&VAR_5);
  return VAR_1;
 case 132:
  *VAR_4 = (s64int)FUNC_5(&VAR_5);
  return VAR_1;
 case 129:
  *VAR_4 = FUNC_1(&VAR_5);
  return VAR_1;
 case 130:
  *VAR_4 = FUNC_2(&VAR_5);
  return VAR_1;
 case 128:
  *VAR_4 = FUNC_1(&VAR_5);
  return VAR_1;
 default:
  return VAR_0;
 }
}
